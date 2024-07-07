### Preject 1 ###

enter_num = float(input("Enter a number: "))
num_divi = float(input("Enter the number to divide by: "))

eq_num = enter_num / num_divi

print(f"The divide result is {eq_num:.3f}")

if enter_num % num_divi == 0:
  print(f"{enter_num} is divide by {num_divi}")
else:
  print(f"{enter_num} is not divisible by {num_divi}\n\n")

#____________________________________________#
### Preject 2 ###

print("Please, Enter the Numbers you want to compare")
print("-------------")
com_num1 = float(input("Enter the First Number: "))
com_num2 = float(input("Enter the Second Number: "))
com_num3 = float(input("Enter the Third Number: "))
print("-------------")

if com_num1 > com_num2 and com_num1 > com_num3:
  print(f"{com_num1} is the greatest number.")
elif com_num2 > com_num3:
  print(f"{com_num2} is the greatest number.")
else:
  print(f"{com_num3} is the greatest number.")

#____________________________________________#
### Preject 3 ###

money = float(input("\n\nEnter amount of money you have: "))
print("-------------")
mo_1 = float(input("Enter the price of the first item: "))
mo_2 = float(input("Enter the price of the second item: "))
mo_3 = float(input("Enter the price of the third item: "))
print("-------------")

all_item = mo_1 + mo_2 + mo_3

if all_item <= money:
  print("Items have been purchased successfully")
  print(f"The remaining amount is {money-all_item:.2f}$")
else:
  print("Sorry, You don't have enough balance")
  print(f"You need to add extra {(money-all_item)*-1:.2f}$")
