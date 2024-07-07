enter_input = input("Enter your input: ").strip()

if enter_input.isdigit():
  print("You entered a number")
elif enter_input.isalpha():
  print("You entered letters")
  if enter_input.islower():
    print("All letters are lowecase")
  elif enter_input.isupper():
    print("All letters are uppercase")
  elif enter_input.istitle():
    print("All letters are titlecase")
elif enter_input.isalnum():
  print("There is a mix between letters and numbers")

###---------------------------------------------------------###
###---------------------------------------------------------###
###---------------------------------------------------------###

num_1 = float(input("Enter the first number: "))
num_2 = float(input("Enter the second number: "))
operator = input("Enter the operator: ")

sum = num_1 + num_2
minos = num_1 - num_2
div = num_1 / num_2
kerta = num_1 * num_2
power = num_1 ** num_2

if operator == '+':
  print(f"sum result is {sum}")
elif operator == '-':
  print(f"minos result is {minos}")
elif operator == '/':
  print(f"divild result is {div:.1f}")
elif operator == '*':
  print(f"kerta result is {kerta:.1f}")
elif operator == '**':
  print(f"power result is {power:.1f}")
else:
  print("Sorry, Please enter valid inputs.")


###---------------------------------------------------------###
###---------------------------------------------------------###
###---------------------------------------------------------###

arabic = float(input("Enter Arabic score: "))
english = float(input("Enter english score: "))
math = float(input("Enter math score: "))
physics = float(input("Enter physics score: "))
chemistry = float(input("Enter chemistry score: "))
biology = float(input("Enter biology score: "))

print('-'*40)

kok = (arabic + english + math + physics + chemistry + biology) / 6

if kok > 100 or kok < 0:
  print("please enter scores between 0 and 100.")
elif kok >= 90:
  print(f"your score is {kok:.2f}%")
  print("your grade is A")
elif kok >= 70:
  print(f"your score is {kok:.2f}%")
  print("your grade is B")
elif kok >= 50:
  print(f"your score is {kok:.2f}%")
  print("your grade is C")
else:
  print(f"your score is {kok:.2f}%")
  print("your grade is F")