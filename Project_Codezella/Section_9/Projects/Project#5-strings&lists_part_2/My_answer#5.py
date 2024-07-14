# text = """A computer is a digital electronic machine that can be programmed to carry out sequences of arithmetic or logical operations automatically"""

# no_sp = text.replace(' ', '')

# print(len(text))
# print(len(no_sp))

###----------------------------------------------------------------###
###----------------------------------------------------------------###

# name = input("Enter your full name: ").split(' ')
# berth = input("Enter your berthday (dd-mm-yyyy): ")
# year = input("Enter the current year: ")

# print('-'*45)
# greet = f'Hello! {name[0].title()}\nWelcame'
# print(greet)
# print('-'*45)

# age = berth.split('-')
# age = int(year) - int(age[2])
# print(age)

###----------------------------------------------------------------###
###----------------------------------------------------------------###

num = input("Enter the operation: ").split(' ')
first_num = num[0]
sucond_num = num[-1]

if num[1] == '+':
 oper = float(num[0]) + float(num[-1])
 print(oper)
elif num[1] == '-':
 oper = float(num[0]) - float(num[-1])
 print(oper)
elif num[1] == '*':
 oper = float(num[0]) * float(num[-1])
 print(oper)
elif num[1] == '/':
 oper = float(num[0]) / float(num[-1])
 print(oper)
elif num[1] == '**':
 oper = float(num[0]) ** float(num[-1])
 print(oper)
elif num[1] == '%':
 oper = float(num[0]) % float(num[-1])
 print(oper)
else:
  print("Enter value (+ , - , * , / , ** , %)")

