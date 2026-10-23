#include <iostream>
#include <cstdlib>
using namespace std;

short ReadPositiveNumber(string massege, short& RoundsNum)
{

	do
	{
		cout << massege;
		cin >> RoundsNum;

	} while (RoundsNum <= 0 || RoundsNum >= 11);

	return RoundsNum;

}

enum enGame { stone = 1, paper = 2, scissors = 3, ComputerWin = 4, UserWin = 5, Draw = 6, rongeValue = 7 };


short ReadUserChoice(string Massege)
{
	short UserChoise = 0;

	do
	{
		cout << Massege;
		cin >> UserChoise;

	} while (UserChoise <= 0 || UserChoise >= 4);

	return UserChoise;
}


int RaudomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}


enGame CheckHowsWinner(short ComputerChoise, short UserChoise, short& Comp_counter, short& User_counter, short& Draw_counter)
{
	if (UserChoise == ComputerChoise)
	{
		Draw_counter++;
		return enGame::Draw;
	}
	else if (UserChoise == enGame::stone && ComputerChoise == enGame::scissors)
	{
		User_counter++;
		return enGame::UserWin;
	}
	else if (UserChoise == enGame::stone && ComputerChoise == enGame::paper)
	{
		Comp_counter++;
		return enGame::ComputerWin;
	}
	else if (UserChoise == enGame::scissors && ComputerChoise == enGame::paper)
	{
		User_counter++;
		return enGame::UserWin;
	}
	else if (UserChoise == enGame::scissors && ComputerChoise == enGame::stone)
	{
		Comp_counter++;
		return enGame::ComputerWin;
	}
	else if (UserChoise == enGame::paper && ComputerChoise == enGame::stone)
	{
		User_counter++;
		return enGame::UserWin;
	}
	else if (UserChoise == enGame::paper && ComputerChoise == enGame::scissors)
	{
		Comp_counter++;
		return enGame::ComputerWin;
	}
	else
		return enGame::rongeValue;
}

string UsersChoice(short Choice)
{
	if (Choice == enGame::stone)
		return "Stone";
	else if (Choice == enGame::paper)
		return "Paper";
	else if (Choice == enGame::scissors)
		return "Scissors";
}


void PrintRoundResult(short& Rounds, short& Comp_counter, short& User_counter, short& Draw_counter)
{

	short RoundsNum = ReadPositiveNumber("How many roudns 1 to 10: ", Rounds);

	for (int i = 1; i <= RoundsNum; i++)
	{
		short userChoice = ReadUserChoice("Your Choice: [1]:Stone, [2]:Paper, [3]:Scissoes : ");
		short computerChoice = RaudomNumber(1, 3);

		enGame result = CheckHowsWinner(computerChoice, userChoice, Comp_counter, User_counter, Draw_counter);

		cout << "\nRound [" << i << "] begins:\n";

		cout << "\n----------------------- Round [" << i << "] ---------------------------\n\n";
		cout << "Player1  choise: " << UsersChoice(userChoice) << endl;
		cout << "Computer choise: " << UsersChoice(computerChoice) << endl;

		if (result == enGame::ComputerWin)
		{
			cout << "\a";
			system("color 4f");
			cout << "Round Winner   : [ Computer Winner ]" << endl;
		}
		else if (result == enGame::UserWin)
		{
			system("color 2f");
			cout << "Round Winner   : [ User Winner ]" << endl;
		}
		else if (result == enGame::Draw)
		{
			system("color 6f");
			cout << "Round Winner   : [ No Winner ]" << endl;
		}
		else
			cout << "!!!! [ Ronge Value ] !!!!" << endl;


		cout << "\n_______________________________________________________________________\n\n";
	}

}

enGame HowsWinnerGame(short Comp_counter, short User_counter, short Draw_counter)
{
	if (Comp_counter > User_counter)
	{
		if (Comp_counter <= Draw_counter || Comp_counter >= Draw_counter)
			return enGame::ComputerWin;
	}
	else if (User_counter > Comp_counter)
	{
		if (User_counter <= Draw_counter || User_counter >= Draw_counter)
			return enGame::UserWin;
	}
	else
		return enGame::Draw;
}


string WinnerResult(short Result)
{
	if (Result == enGame::UserWin)
	{
		system("color 2f");
		return "Player Winner";
	}
	else if (Result == enGame::ComputerWin)
	{
		cout << "\a";
		system("color 4f");
		return "Computer Winner";
	}
	else if (Result == enGame::Draw)
	{
		system("color 6f");
		return "No Winner";
	}
	else
	{
		system("color 5f");
		return "Ronge value!!";
	}

}


void PrintGameResults(short RoundsNum, short Comp_counter, short User_counter, short Draw_counter)
{
	cout << "\n\n\t\t\t\t--------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t +++ G a m e  O v e r +++ \n";
	cout << "\t\t\t\t________________________________________________________\n\n";

	cout << "\t\t\t\t___________________ [ Game Results ] ___________________\n\n";
	cout << "\t\t\t\tGame Rounds        : " << RoundsNum << endl;
	cout << "\t\t\t\tPlayer1 won times  : " << User_counter << endl;
	cout << "\t\t\t\tComputer won times : " << Comp_counter << endl;
	cout << "\t\t\t\tDraw times         : " << Draw_counter << endl;
	cout << "\t\t\t\tFinal Winner       : " << WinnerResult(HowsWinnerGame(Comp_counter, User_counter, Draw_counter)) << endl;

	cout << "\t\t\t\t________________________________________________________\n\n";
}

void ResetScreen(bool& playAgain)
{
	char ResetGame;

	do
	{
		cout << "\t\t\t\tDo you want to play again? Enter to continue 0/1 Or Y/N: ";
		cin >> ResetGame;

		if (ResetGame == 'Y' || ResetGame == 'y' || ResetGame == '1')
		{
			playAgain = true;
			system("color 0f");
			system("CLS");  // "CLS" to Clean screen
		}

		else if (ResetGame == 'N' || ResetGame == 'n' || ResetGame == '0')
		{
			playAgain = false;
		}

	} while (ResetGame != 'Y' && ResetGame != 'y' && ResetGame != 'N' && ResetGame != 'n' && ResetGame != '1' && ResetGame != '0');

}

void StartGame()
{
	short RoundsNum = 0, Compeuter_counterWin = 0, User_counterWin = 0, Draw_counter = 0;
	bool playAgain = false;

	do
	{
		PrintRoundResult(RoundsNum, Compeuter_counterWin, User_counterWin, Draw_counter);

		PrintGameResults(RoundsNum, Compeuter_counterWin, User_counterWin, Draw_counter);

		ResetScreen(playAgain);

	} while (playAgain);

}

int main()
{
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}