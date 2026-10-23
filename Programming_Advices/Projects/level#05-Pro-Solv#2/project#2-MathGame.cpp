#include <iostream>
using namespace std;

enum enQuestionsLevel { Easy = 1, Med = 2, Hard = 3, MixLevel = 5 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixType = 5 };

int ReadPositiveNumber(string Massege, int Range) {
    int Number;

    do {
        cout << Massege;
        cin >> Number;

    } while (Number <= 0 || Number > Range);

    return Number;
}

int GenerateRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

int ChuiceCalculateLevel(int Level) {
    switch (Level) {
    case enQuestionsLevel::Easy:
        return GenerateRandomNumber(1, 10);
    case enQuestionsLevel::Med:
        return GenerateRandomNumber(11, 50);
    case enQuestionsLevel::Hard:
        return GenerateRandomNumber(51, 100);
    case enQuestionsLevel::MixLevel:
        return GenerateRandomNumber(1, 100);
    default:
        cout << "\n\tQuestion Level ERROR!!\n";
        return 0;
    }
}

string STRChuiceCalculateLevel(int Level) {
    switch (Level) {
    case enQuestionsLevel::Easy:
        return "Easy";
    case enQuestionsLevel::Med:
        return "Med";
    case enQuestionsLevel::Hard:
        return "Hard";
    case enQuestionsLevel::MixLevel:
        return "Mix";
    default:
        cout << "\n\tQuestion Level ERROR!!\n";
        return 0;
    }
}

char GetCalculateType(int OperationType) {
    switch (OperationType) {
    case enOperationType::Add:
        return '+';
    case enOperationType::Sub:
        return '-';
    case enOperationType::Mul:
        return '*';
    case enOperationType::Div:
        return '/';
    case enOperationType::MixType:
        return 'M';
    default:
        cout << "\tGet Calculate ERROR!!\n";
        return '?';
    }
}

int GetMixCalculate(int Num1, int Num2, int& OperationType) {
    OperationType = GenerateRandomNumber(1, 4);

    switch (OperationType) {
    case enOperationType::Add:
        return Num1 + Num2;
    case enOperationType::Sub:
        return Num1 - Num2;
    case enOperationType::Mul:
        return Num1 * Num2;
    case enOperationType::Div:
        if (Num2 != 0) return Num1 / Num2;
        else {
            cout << "\tDivision by zero error!\n";
            return 0;
        }
    default:
        cout << "\tMix Calculate ERROR!!\n";
        return 0;
    }
}

int GenerateQuestions(int Num1, int Num2, int OperationType) {
    switch (OperationType) {
    case enOperationType::Add:
        return Num1 + Num2;
    case enOperationType::Sub:
        return Num1 - Num2;
    case enOperationType::Mul:
        return Num1 * Num2;
    case enOperationType::Div:
        if (Num2 != 0) return Num1 / Num2;
        else {
            cout << "\tDivision by zero error!\n";
            return 0;
        }
    default:
        cout << "\tUnknown Operation Type!\n";
        return 0;
    }
}

bool ChickUserResult(int UserInput, int result, short& counter) {

    if (UserInput == result)
    {
        counter += 1;
        return true;
    }
    else
    {
        return false;
    }

}

void PrintQuestion(int Num1, int Num2, int OperationType) {
    cout << "\n";
    cout << "  " << Num1 << "\n";
    cout << "  " << Num2 << "  " << GetCalculateType(OperationType) << "\n";
    cout << "________________________________________\n";
}


void PrintAllQuestions(int& RangeQue, int& QuestionLevel, int& OperationType, short& counter) {
    short UserAnswer;
    RangeQue = ReadPositiveNumber("How Many Questions do you want to answer: ", 20);
    QuestionLevel = ReadPositiveNumber("Enter Questios Level: [1] Easy, [2] Med, [3] Hard, [4] Mix: ", 5);
    if (QuestionLevel == 4)
        QuestionLevel += 1;

    OperationType = ReadPositiveNumber("Enter Operation Type: [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix: ", 5);

    int Num1, Num2;

    for (int i = 1; i <= RangeQue; i++)
    {
        Num1 = ChuiceCalculateLevel(QuestionLevel);
        Num2 = ChuiceCalculateLevel(QuestionLevel);

        if (OperationType == enOperationType::Div || OperationType == enOperationType::MixType) {
            while (Num2 == 0) {
                Num2 = ChuiceCalculateLevel(QuestionLevel);
            }
        }

        cout << "\nQuestion [" << i << "/" << RangeQue << "]" << endl << endl;

        int result;
        if (OperationType == enOperationType::MixType) {
            int CurrentOperationType = GenerateRandomNumber(1, 4); // تحديد نوع العملية لكل سؤال
            result = GetMixCalculate(Num1, Num2, CurrentOperationType); // احسب النتيجة باستخدام نوع العملية الحالي
            PrintQuestion(Num1, Num2, CurrentOperationType); // طباعة السؤال مع النوع الحالي
        }
        else {
            result = GenerateQuestions(Num1, Num2, OperationType);
            PrintQuestion(Num1, Num2, OperationType);
        }

        cout << "  ";
        cin >> UserAnswer;

        if (ChickUserResult(UserAnswer, result, counter)) {
            system("color 2f");
            cout << "Right Answer :-)" << endl;
        }
        else {
            system("color 4f");
            cout << "\aWrong Answer :-(" << endl;
            cout << "The right answer is : " << result << endl;
        }
    }
}

void PrintAllResutl(int& RangeQue, int& QuestionLevel, int& OperationType, short& counter)
{

    string IsPass = "";

    if (counter > (RangeQue - counter))
    {
        system("color 2f");
        IsPass = "Pass :-)";
    }
    else
    {
        system("color 4f");
        IsPass = "\aNot Pass :-(";
    }

    cout << "\n";
    cout << "________________________________________________________\n\n";
    cout << "  Final Results is " << IsPass << endl;
    cout << "________________________________________________________\n\n";

    cout << "Number of Questions : " << RangeQue << endl;
    cout << "Questions level     : " << STRChuiceCalculateLevel(QuestionLevel) << endl;
    cout << "OpType              : " << GetCalculateType(OperationType) << endl;
    cout << "Number of Right Answers: " << counter << endl;
    cout << "Number of wrong Answers: " << (RangeQue - counter) << endl;
}

void WantToRestart()
{
    system("color 0f");
    system("CLS");  // "CLS" to Clean screen
}

void StartGame()
{
    int RangeQue, QuestionLevel, OperationType;
    short counter = 0;
    char restart;

    do
    {
        PrintAllQuestions(RangeQue, QuestionLevel, OperationType, counter);

        PrintAllResutl(RangeQue, QuestionLevel, OperationType, counter);


        do
        {
            cout << "Do you want to play again [y/n] or [1/0]: ";
            cin >> restart;

        } while (restart != 'y' && restart != 'Y' && restart != 'n' && restart != 'N' && restart != '1' && restart != '0');

        if (restart == 'y' || restart == 'Y' || restart == '1')
        {
            WantToRestart();
        }

    } while (restart == 'y' || restart == 'Y' || restart == '1');
}

int main() {
    srand((unsigned)time(NULL));

    StartGame();

    return 0;
}
