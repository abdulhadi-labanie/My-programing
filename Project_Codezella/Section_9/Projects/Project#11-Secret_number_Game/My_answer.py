import random

num = random.sample(range(1, 20), 4)

enter_num = input("Enter a number between 1 to 20: ")

if enter_num in str(num):
  print("-"*30)
  print("You win!")
else:
  print("-"*30)
  print("You last!!")

###-----------------------------------------------------------###
###-----------------------------------------------------------###

print("Guess the coin flip!")
coin = int(input("1. for Heads \n2. for Tails \nEnter (1 or 2): "))

flip = random.randint(1, 2)
print('-'*40)
if (coin == 1 and flip == 1):
  print("The was Heads \nYou win!!")
elif (coin == 2 and flip == 2):
  print("The was Tails \nYou win!!")
else:
  print("You last!!")

###-----------------------------------------------------------###
###-----------------------------------------------------------###

enter_roll = int(input("Enter a number for roll (1 - 6): "))

roll = random.randint(1, 6)

if enter_roll == roll:
  print(f"The dice is : {roll}\nYou win!!")
else:
  print(f"The dice is : {roll}\nYou last!!")