######*******************************************لفهرس لتسهيل الوصول*******************************************######
#1* line(11)# ('," طرق الطباعة و استخدام ) ---> (Terin < 1 > )
#2* line(50)# ( ( _ and , ) طرق التفريق بين الارقام في الطباعة و استخدام ) ---> (Terin < 2 > )
#3* line(83)# ( ( bool value ) طرق الطباعة و استخدام ) ---> (Terin < 3-5 > )
#4* line(118)# ( ( mathematical operators ) العوامل الرياضية مثل - + * / ) ---> (Terin < 6 > )
#5* line(155)# ( ( mathematical shorthand ) الاختصار الرياضي += *= ) ---> (Terin < 7-8 > )
#6* line(235)# ( ( mathematical rounding ) التقريب الرياضي ) ---> (Terin < 9 > )
#7* line(288)# ( ( string operations - Part 1 ) السلاسل النصية في بايثون ) ---> (Terin < 10 > )
#8* line(365)# ( ( string operations - Part 2 ) السلاسل النصية في بايثون ) ---> (Terin < 10-11 > )
#9* line(405)# ( ( string methods ) طرق السلسلة في بايثون ) ---> (Terin < 13 > )
#10* line(472)# ( ( len exercises ) len exercises ) ---> (Terin < 14 > )
############////////////////////////////////////////////////////////////////////////////##############


##||||||||||||||||||||||||||******************< 1 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 1 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 1 >******************|||||||||||||||||||||||||##
def print_fasil(s):
  sater = s
  print(f"\n||||*********************< {sater} >*********************||||")
  print(f"||||*********************< {sater} >*********************||||\n\n")


print_fasil(1)
#في Python، هناك ثلاثة أنواع رئيسية للطباقة (التنسيق) التي يمكن استخدامها

#1. طباقة قيمة واحدة (unary formatting):
name = "Alice"
print("\n\nHello, %s!" % name)

#2. طباقة المنسق (format method):
name = "Bob"
age = 30
print("Hello, {}! You are {} years old.".format(name, age))

#3. طباقة f-strings:
name = "Charlie"
age = 25
print(f"Hello, {name}! You are {age} years old.")

# ما هي جميع الحالات التي يمكن استخدام او ظهور اخطاء ل " and ' في print

#1.print('Hello, world!")
#في هذه الحالة، Python لن يتمكن من تحديد نهاية السلسلة بشكل صحيح لأن علامة التنصيص ليست متطابقة.

#2.استخدام علامتي تنصيص (مزدوجة) في سلسلة نصية محتوية على تنصيص مفردة:
print("It's a beautiful day!")
#في هذه الحالة، يمكن استخدام تنصيصين مزدوجين لتحديد بداية ونهاية السلسلة واستخدام تنصيص مفرد داخل السلسلة دون أن يسبب مشكلة.

#3. استخدام علامتي تنصيص (مفردة) في سلسلة نصية محتوية على تنصيص مزدوجة:
print('He said, "Hello!"')

#4. استخدام علامة تنصيص مزدوجة لتحديد سلسلة نصية تحتوي على علامة تنصيص مزدوجة، والعكس صحيح أيضًا:
print("She said, \"It's raining.\"")

##||||||||||||||||||||||||||******************< 2 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 2 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 2 >******************|||||||||||||||||||||||||##
print_fasil(2)
#1
#إذا قمت بكتابة الكود التالي:
print(5, 000, 000)
# الناتج 0 0 5
# السبب هو ان الفاصلة تعني مسافة و تفصل بين المحتوى اذا لم تكون في "" وسيصبح الكود 000 000 5
# ثم يجمع بايثون جميع الاصفار لصفر واحد لانه نفس الناتج
# الناتج 0 0 5

#يمكن وضع الشرطة السفلية (_) بين الأرقام لتحسين قراءة الأرقام بواسطة البشر ولا تؤثر على قيمة الرقم بنفسه
# مثال
print(5_000_000)

num1 = 1_000_000
num2 = 5_000_000
num3 = 1_234_567

print(num1 + num2 + num3, "\n\n")

#2
#print(789,073,050) = SyntaxError

# تحاول إنشاء صف من ثلاثة عناصر: 789، 73، و50. هذه ليست طريقة صالحة لتمثيل عدد صحيح في بايثون
#(SyntaxError) ولهذا السبب تحصل على خطأ .
#لطباعة الرقم 789073050 كعدد صحيح واحد،
print(789_073_050, "\n\n")

##||||||||||||||||||||||||||******************< 3 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 3 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 3 >******************|||||||||||||||||||||||||##
print_fasil(3)

# تسلسل الهروب ANSI للنص الأخضر
green_start = "\033[92m"
# تسلسل الهروب ANSI لإعادة النص إلى اللون الافتراضي
green_end = "\033[0m"

print(
    "1:", bool(True), green_start +
    "Outputs: True - The boolean value True is always True" + green_end)
print(
    "2:", bool(False), green_start +
    "Outputs: False - The boolean value False is always False" + green_end)
print(
    "3:", bool(1), green_start +
    "Outputs: True - Numeric value 1 is considered True" + green_end)
print(
    "4:", bool(0), green_start +
    "Outputs: False - Numeric value 0 is considered False" + green_end)
print("5:", bool(3 < 6),
      green_start + "Outputs: True - The condition 3<6 is True" + green_end)
print("6:", bool(5 < 1),
      green_start + "Outputs: False - The condition 5<1 is False" + green_end)
print("7:", bool(5 == 5),
      green_start + "Outputs: True - The condition 5==5 is True" + green_end)
print(
    "8:", bool(5 == "5"), green_start +
    "Outputs: False - Comparing integer with string results in False" +
    green_end)
print("9:", bool(5 >= 5),
      green_start + "Outputs: True - The condition 5>=5 is True" + green_end)
print(
    "10:", bool("Python"), green_start +
    "Outputs: True - Non-empty strings are considered True" + green_end)
print(
    "11:", bool(""), green_start +
    "Outputs: False - Empty string is considered False" + green_end)
print(
    "12:", bool([1, 2, 3]), green_start +
    "Outputs: True - Non-empty lists are considered True" + green_end)
print(
    "13:", bool([]), green_start +
    "Outputs: False - Empty lists are considered False" + green_end)
print("14:", bool(10 == 10.0),
      green_start + "Outputs: True - 10 equals 10.0, so it's True" + green_end)
print(
    "15:", bool(10 != 10.0), green_start +
    "Outputs: False - 10 is equal to 10.0, so it's not unequal" + green_end)
age = 20
print(
    "16:", bool(age == 10.0), green_start +
    "Outputs: False - The variable age is 20, not equal to 10.0" + green_end)
print("17:", bool(10 == 10.0),
      green_start + "Outputs: True - 10 is equal to 10.0" + green_end)
print(
    "18:", bool(10 is 10.0), green_start +
    "Outputs: False - 'is' checks for identity, not equality, and int is not the same object as float"
    + green_end)
print(
    "19:", bool(10 is not 10.0), green_start +
    "Outputs: True - 10 is indeed not the same object as 10.0" + green_end)
print(
    "20:", bool(10 is 10), green_start +
    "Outputs: True - 'is' checks if both are the same object, and 10 is indeed the same as 10"
    + green_end)
print(
    "21:", type(2 is 3), green_start +
    "Outputs: <class 'bool'> - The result of 'is' comparison is a boolean" +
    green_end)

print("\n")

##||||||||||||||||||||||||||******************< 4 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 4 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 4 >******************|||||||||||||||||||||||||##
print_fasil(4)
num1 = 7
num2 = 5

# يطبع نتيجة جمع الرقمين num1 و num2
print(f"{num1} + {num2} = {num1 + num2}")
print("Prints the result of adding the two numbers num1 and num2 \n")

# يطبع نتيجة طرح الرقم الثاني num2 من الرقم الأول num1
print(f"{num1} - {num2} = {num1 - num2}")
print(
    "Prints the result of subtracting the second number num2 from the first number num1 \n"
)

# يطبع نتيجة ضرب الرقمين num1 و num2 في بعضهما
print(f"{num1} * {num2} = {num1 * num2}")
print(
    "Prints the result of multiplying the two numbers num1 and num2 together \n"
)

# يطبع نتيجة قسمة الرقم الأول num1 على الرقم الثاني num2
print(f"{num1} / {num2} = {num1 / num2}")
print(
    "Prints the result of dividing the first number num1 by the second number num2 \n"
)

# يطبع نتيجة القسمة الصحيحة للرقم الأول num1 على الرقم الثاني num2، أي قسمة بدون باقي عشري
print(f"{num1} // {num2} = {num1 // num2}")
print(
    "Prints the result of the integer division of the first number num1 by \n\
the second number num2, i.e., division without the remainder \n")

# يطبع نتيجة رفع الرقم الأول num1 لأس يساوي الرقم الثاني num2
print(f"{num1} ** {num2} = {num1 ** num2}")
print("Prints the result of raising the first number num1 to the power \n\
of the second number num2 \n")

# يطبع الباقي من قسمة الرقم الأول num1 على الرقم الثاني num2
print(f"{num1} % {num2} = {num1 % num2}")
print(
    "Prints the remainder from dividing the first number num1 by the second number num2 \n\n\n"
)

##||||||||||||||||||||||||||******************< 5 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 5 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 5 >******************|||||||||||||||||||||||||##
print_fasil(5)
# الاولويات في الحساب في بايثون

# الاولوية الأولى: القوس ( )
# الاولوية الثانية: الأس **
# الاولوية الثالثة: الضرب والقسة و الباقي من القسمة و القسمة الصحيحة / , * , // , %
# الاولوية الرابعة: الجمع و الطرح + , -
# مثال
print(2 + 3 * 4)  # Output: 14
print((2 + 3) * 4)  # Output: 20
print(2**3**2, "\n\n")  # Output: 512

total = 3
total += 5

print("total = 3 \n"
      "total += 5")
print(total, "\n")
#////////////////( += )//////////////////#

total = 3
total -= 5

print("total = 3 \n"
      "total -= 5")
print(total, "\n")
#////////////////( -= )//////////////////#

total = 3
total = -5

print("total = 3 \n"
      "total =- 5")
print(total, "\n")
#////////////////( =- )//////////////////#

total = 3
total *= 5

print("total = 3 \n"
      "total *= 5")
print(total, "\n")
#////////////////( *= )//////////////////#
print("total = 3 \n"
      "total =* 5")
print("Error \n")
#////////////////( =* )//////////////////#

total = 3
total /= 5

print("total = 3 \n"
      "total /= 5")
print(total, "\n")
#////////////////( /= )//////////////////#

total = 3
total **= 5

print("total = 3 \n"
      "total **= 5")
print(total, "\n")
#////////////////( **= )//////////////////#

total = 3
total //= 5

print("total = 3 \n"
      "total //= 5")
print(total, "\n")
#////////////////( //= )//////////////////#

total = 3
total %= 5

print("total = 3 \n"
      "total %= 5")
print(total, "\n")
#////////////////( %= )//////////////////#

##||||||||||||||||||||||||||******************< 6 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 6 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 6 >******************|||||||||||||||||||||||||##
print_fasil(6)

num = 3.7
print(f"round {num} = {round(num)}")

num = 3.3
print(f"round {num} = {round(num)}")

num = 3.5
print(f"round {num} = {round(num)}\n")

# هذا السطر من الكود يوضح كيفية تقريب رقم عشري إلى أقرب عدد صحيح في بايثون باستخدام دالة round().
# يُعطى المتغير قيمة 13.5. عند تطبيق يقوم بايثون بتقريب الرقم إلى أقرب عدد صحيح. إذا كان الجزء الكسري من الرقم يساوي بالضبط 5 يقوم بايثون بتقريبه إلى أقرب رقم زوجي
# (وهذا ما يُعرف بـ "تقريب النصف إلى الزوجي' أو "تقريب البنوك')

num = 13.5
print(f"round {num} = {round(num)}")
num = 12.5
print(f"round {num} = {round(num)}")
num = 17.5
print(f"round {num} = {round(num)}\n")

num1 = 2000
num2 = 3
print(f"{num1} / {num2} = {num1 / num2}:")
print(f"- round {num1} / {num2} = {round(num1 / num2)}" + "\n")

print("1. 1111,9" + 3 * " " + ", --> *(1)")
print(f"- round(namber, 1) {num1} / {num2} = {round(num1 / num2, 1)}" +
      "1111,9" + "\n")

print("3. 1111,999  , --> *(3)")
print(f"- round(namber, 3) {num1} / {num2} = {round(num1 / num2, 3)}" + "\n")

print("-1 1110" + 7 * " " + "(1)* <-- ,")
print(f"- round(namber, -1) {num1} / {num2} = {round(num1 / num2, -1)}" + "\n")

print("-2 1100" + 7 * " " + "(2)* <-- ,")
print(f"- round(namber, -2) {num1} / {num2} = {round(num1 / num2, -2)}" +
      "1100" + "\n")

print("-3 1000" + 6 * " " + "(3)* <-- ,")
print(f"- round(namber, -3) {num1} / {num2} = {round(num1 / num2, -3)}" +
      "1000" + "\n")

#print(round(13/3 .2)) SyntaxError: invalid syntax. Perhaps you forgot a comma?

##||||||||||||||||||||||||||******************< 7 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 7 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 7 >******************|||||||||||||||||||||||||##
print_fasil(7)

print(f"int(float(8,9)) = {int(float('8.9'))}")
print(f"int(float(11,3)) = {int(float('11.3'))}\n\n")
#print(int('3.7')) Error
#print(float(5) * str(4))  Error

# الدمج: دمج سلسلتين نصيتين معاً
# 1. Concatenation: Combining two strings together
first_name = "John"
last_name = "Doe"
full_name = first_name + " " + last_name
print("1:", full_name, "- Output: John Doe")
# يدمج الاسم الأول والاسم الأخير لتكوين اسم كامل.

# 2. Repetition: Repeating a string multiple times
repeat_str = "Python! " * 3
print("2:", repeat_str, "- Output: Python! Python! Python!")
# يكرر السلسلة "Python! " ثلاث مرات.

# 3. Indexing: Accessing a specific character in the string
language = "Python"
first_letter = language[0]
print("3:", first_letter, "- Output: P")
# يوضح الوصول إلى الحرف الأول ('P') من السلسلة "Python".

# 4. Slicing: Extracting a part of the string
slice_example = "Python"
slice_part = slice_example[1:4]
print("4:", slice_part, "- Output: yth")
# يستخرج جزء من السلسلة، من الفهرس 1 إلى 3.

# 5. Uppercase conversion
lower_case_str = "python"
print("5:", lower_case_str.upper(), "- Output: PYTHON")
# يحول السلسلة "python" إلى أحرف كبيرة.

# 6. Removing white spaces
whitespace_str = "   Python   "
print("6:", whitespace_str.strip(), "- Output: Python")
# يزيل المسافات البيضاء من بداية ونهاية السلسلة.

# 7. Splitting the string into a list
csv = "one,two,three"
print("7:", csv.split(","), "- Output: ['one', 'two', 'three']")
# يقسم السلسلة إلى قائمة من السلاسل النصية، باستخدام الفاصلة كمحدد.

# 8. Joining a list of strings into one string
words = ["Python", "is", "awesome"]
print("8:", " ".join(words), "- Output: Python is awesome")
# يدمج قائمة السلاسل النصية في سلسلة واحدة مع فواصل مسافات.

# 9. Replacing part of the string
greeting = "Hello, world!"
print("9:", greeting.replace("world", "Python"), "- Output: Hello, Python!")
# يستبدل "world" بـ "Python" في السلسلة التحية.

# 10. Formatting with the format() method
print("10: Hello, {}!".format("Python"), "- Output: Hello, Python!")
# يستخدم طريقة format() لإدراج "Python" في المكان النائب.

# 11. Formatting with f-strings
name = "Python"
print(f"11: Hello, {name}!", "- Output: Hello, Python!")
# يوضح استخدام f-strings لتضمين التعبيرات داخل السلاسل النصية.

##||||||||||||||||||||||||||******************< 8 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 8 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 8 >******************|||||||||||||||||||||||||##

print_fasil(8)

# 1. التحقق من بداية أو نهاية السلسلة
text = "Python programming"
print("1:", text.startswith("Python"),
      "- String starts with 'Python'")  # True - String starts with 'Python'
print("2:", text.endswith("programming"), "- String ends with 'programming'"
      )  # True - String ends with 'programming'

# 2. التحقق من نوع الأحرف في السلسلة
print("3:", "12345".isdigit(),
      "- String contains only digits")  # True - String contains only digits
print("4:", "abcde".isalpha(), "- String contains only alphabets"
      )  # True - String contains only alphabets
print("5:", "abc123".isalnum(), "- String contains both alphabets and numbers"
      )  # True - String contains both alphabets and numbers

# 3. تغيير حالة الأحرف
name = "john doe"
print("6:", name.capitalize(), "- First character of the string is capitalized"
      )  # John doe - First character of the string is capitalized
print("7:", name.title(),
      "- Every word in the string starts with a capital letter"
      )  # John Doe - Every word starts with a capital letter

# 4. إضافة الأصفار في بداية السلسلة
number_str = "5"
print("8:", number_str.zfill(3), "- String length is made 3 with leading zeros"
      )  # 005 - String length is made 3 with leading zeros

# 5. إزالة المسافات من جانب واحد من السلسلة
whitespace_str = "   Python   "
print(
    "9:", whitespace_str.lstrip(),
    "- Leading spaces are removed")  # 'Python   ' - Leading spaces are removed
print("10:", whitespace_str.rstrip(), "- Trailing spaces are removed"
      )  # '   Python' - Trailing spaces are removed

# 6. استخدام التعبيرات النمطية للبحث والاستبدال
import re  # استيراد مكتبة التعبيرات النمطية

regex_result = re.search(r"\bpro\w+", "Python programming")
print("11:", regex_result.group(), "- Found a word starting with 'pro'"
      )  # programming - Found a word starting with 'pro'

# 7. استبدال جزء من السلسلة باستخدام التعبيرات النمطية
replaced_str = re.sub(r"\bpro\w+", "coding", "Python programming")
print("12:", replaced_str, "- Replaced words starting with 'pro' with 'coding'"
      )  # Python coding - Replaced words starting with 'pro' with 'coding'

##||||||||||||||||||||||||||******************< 9 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 9 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 9 >******************|||||||||||||||||||||||||##

print_fasil(9)

# https://www.w3schools.com/python/python_ref_string.asphttps://www.w3schools.com/python/python_ref_string.asp

# تعريف تسلسل الهروب ANSI للنص الأزرق
blue_start = "\033[94m"
blue_end = "\033[0m"

# مثال على سلسلة نصية لتطبيق الطرق عليها
sample_text = "Hello, World!"

# 1. capitalize() - تجعل الحرف الأول في السلسلة كبيراً والباقي صغيراً.
# مناسبة لتنسيق الجمل أو العناوين.
print(blue_start + "1: " + sample_text.capitalize() + blue_end +
      " - Capitalizes the first character.")

# 2. upper() - تحويل جميع الأحرف في السلسلة إلى أحرف كبيرة.
# يستخدم عادة لتوحيد حالة الأحرف في البيانات النصية.
print(blue_start + "2: " + sample_text.upper() + blue_end +
      " - Converts all characters to uppercase.")

# 3. lower() - تحويل جميع الأحرف في السلسلة إلى أحرف صغيرة.
# مفيد في عمليات مقارنة النصوص حيث نرغب بتجاهل حالة الأحرف.
print(blue_start + "3: " + sample_text.lower() + blue_end +
      " - Converts all characters to lowercase.")

# 4. title() - تحويل الحرف الأول من كل كلمة إلى حرف كبير.
# يستخدم لتنسيق عناوين الكتب أو الأسماء.
print(blue_start + "4: " + sample_text.title() + blue_end +
      " - Capitalizes the first letter of each word.")

# 5. swapcase() - تبديل حالة كل حرف في السلسلة.
# يمكن استخدامها لإنشاء تأثيرات نصية معينة.
print(blue_start + "5: " + sample_text.swapcase() + blue_end +
      " - Swaps the case of each character.")

# 6. find('World') - البحث عن موقع فرعي ضمن السلسلة.
# يرجع مؤشر البداية للنص الفرعي، أو -1 إذا لم يتم العثور عليه.
print(blue_start + "6: " + str(sample_text.find('World')) + blue_end +
      " - Finds the position of 'World'.")

# 7. replace('World', 'Everyone') - استبدال نص فرعي بآخر.
# يستخدم لتعديل النصوص أو تصحيحها.
print(blue_start + "7: " + sample_text.replace('World', 'Everyone') +
      blue_end + " - Replaces 'World' with 'Everyone'.")

# 8. split() - تقسيم السلسلة إلى قائمة من السلاسل بناءً على فاصل.
# يفيد في تحليل البيانات أو استخراج المعلومات.
print(blue_start + "8: " + str(sample_text.split()) + blue_end +
      " - Splits the string into a list of words.")

# 9. join(['Hello', 'Python']) - دمج قائمة من السلاسل في سلسلة واحدة.
# مفيد في بناء الجمل أو النصوص من قائمة كلمات أو عبارات.
words = ['Hello', 'Python']
print(blue_start + "9: " + " ".join(words) + blue_end +
      " - Joins a list of strings into a single string.")

# 10. isalpha() - التحقق إذا كانت السلسلة تحتوي على أحرف فقط.
# يستخدم للتحقق من صحة الإدخالات النصية.
print(blue_start + "10: " + str("Hello".isalpha()) + blue_end +
      " - Checks if the string contains only letters.")

# 11. isdigit() - التحقق إذا كانت السلسلة تحتوي على أرقام فقط.
# يستخدم في التحقق من صحة البيانات الرقمية المدخلة كنص.
print(blue_start + "11: " + str("123".isdigit()) + blue_end +
      " - Checks if the string contains only digits.")

name = "     John       Doe    "
print(blue_start + "12." + name.strip().replace(' ', '_').replace('_', '*') +
      blue_end)
print(blue_start + "13." + name.strip().replace('', '*') + blue_end)
print(blue_start + "14." + "The result was 45.5".replace('45', str(77)) +
      blue_end)

##||||||||||||||||||||||||||******************< 10 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 10 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 10 >******************|||||||||||||||||||||||||##

print_fasil(10)

# تعريف سلسلة نصية باللغة العربية
my_string = "مرحبا"
# طباعة عدد الأحرف في السلسلة
# دالة len() تحسب عدد الأحرف في السلسلة النصية "مرحبا"، وهو 5.
# دالة print() تقوم بعرض النص "The length is" متبوعًا بالعدد الذي تم حسابه، أي 5.
print("1. The length is", len(my_string),
      "  in str")  # Output: The length is 5

# تعريف قائمة تحتوي على خمسة أرقام
my_list = [1, 2, 3, 4, 5]
# طباعة عدد العناصر في القائمة
# هنا تقوم دالة len() بحساب عدد العناصر داخل القائمة my_list، والذي يكون 5.
# بعد ذلك تقوم دالة print() بطباعة هذا العدد مسبوقًا بالنص "The length is".
print("2. The length is", len(my_list),
      "  in list [1, 2, 3, 4, 5]")  # Output: The length is 5

# تعريف صف يحتوي على خمسة أرقام
my_tuple = (1, 2, 3, 4, 5)
# طباعة عدد العناصر في الصف
# دالة len() تحسب عدد العناصر في الصف my_tuple وتعود بالقيمة 5.
# دالة print() تعرض النص "The length is" متبوعًا بالقيمة 5.
print("3. The length is", len(my_tuple),
      "  my_tuple = (1, 2, 3, 4, 5)")  # Output: The length is 5

# تعريف مجموعة تحتوي على خمسة أرقام فريدة
my_set = {1, 2, 3, 4, 5}
# طباعة عدد العناصر في المجموعة
# داخل print(), دالة len(my_set) تحسب عدد العناصر في المجموعة وتعود بالقيمة 5.
# دالة print() بعدها تجمع النص "The length is" مع القيمة 5 وتطبعها في سطر واحد.
print("4. The length is", len(my_set),
      "  my_set = {1, 2, 3, 4, 5}")  # Output: The length is 5

# تعريف قاموس يحتوي على خمسة أزواج من المفاتيح والقيم
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
# طباعة عدد الأزواج مفتاح/قيمة في القاموس
# داخل print(), دالة len(my_dict) تحسب عدد الأزواج في القاموس وتعود بالقيمة 5.
# دالة print() تجمع النص "The length is" مع القيمة 5 وتطبع النص الناتج.
print("5. The length is", len(my_dict),
      "  my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}"
      )  # Output: The length is 5


##||||||||||||||||||||||||||******************< 11 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 11 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 11 >******************|||||||||||||||||||||||||##

print_fasil(11)


# تعريف متغيرين
x, y = 10, 20
# استخدام f-string لإجراء عملية جمع داخل {}
print(f"1- {x} + {y} = {x + y}")  # سيقوم بطباعة "10 + 20 = 30"

# تعريف متغير نصي
name = "world"
# استخدام f-string لتحويل النص إلى حروف كبيرة باستخدام دالة upper()
print(f"2- hello {name.upper()}")  # سيقوم بطباعة "مرحباً عالم" بحروف كبيرة

# تعريف قائمة من الأرقام
numbers = [1, 2, 3, 4, 5]
# استخدام f-string للوصول إلى العناصر الأول والأخير في القائمة
print(f"4- first number is {numbers[0]} last number is {numbers[-1]}")  # سيطبع العدد الأول والأخير في القائمة

# تعريف متغير للعمر
age = 25
# استخدام f-string مع تعبير شرطي لتحديد ما إذا كان الشخص قاصرًا أم بالغًا
print(f"5- age is {age} you are {'minor' if age < 18 else 'Adult'}")  # سيطبع "أنت بالغ"

# تعريف قائمة من الأرقام
nums = [1, 2, 3]
# استخدام f-string لحساب مجموع الأعداد في القائمة باستخدام تعبير مولد
print(f"6- Total numbers: {sum(n for n in nums)}")  # سيقوم بطباعة مجموع الأعداد: 6

# استيراد وحدة datetime
import datetime
# الحصول على الوقت الحالي
now = datetime.datetime.now()
# استخدام f-string لتنسيق الوقت والتاريخ الحالي
print(f"7- Time now {now:%Y-%m-%d %H:%M:%S}")  # سيقوم بطباعة الوقت والتاريخ الحالي بالتنسيق المحدد



##||||||||||||||||||||||||||******************< 12 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 12 >******************|||||||||||||||||||||||||##
##||||||||||||||||||||||||||******************< 12 >******************|||||||||||||||||||||||||##

print_fasil(12)

print(f"dsfgfds{'dsfsdg'}gsfd")