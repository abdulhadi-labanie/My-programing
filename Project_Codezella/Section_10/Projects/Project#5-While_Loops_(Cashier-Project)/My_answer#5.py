import random

while True:
  enter_word = input('> ')
  if len(enter_word) == 0:
    continue
  if enter_word[0] == '#':
    continue
  elif enter_word.lower() == 'done':
    print('Done!')
    break
  else:
    print(enter_word)

###------------------------2-------------------------###
###------------------------2-------------------------###

print('\n\nguess a random number between 1 and 100:\n')

ran_num = random.randint(1, 100)
user_try = 0

while True:
  guess_num = int(input('Guess the number: '))
  
  renge =  guess_num - ran_num

  if guess_num > 100 or guess_num < 0:
    print('Guess the number between 1 and 100.')
    continue
    
  if guess_num == ran_num:
    user_try += 1
    print(f"You Guessed the number in {user_try} attempts!!")
    break
  elif renge <= 5 and renge > 0:
    print('high')
    user_try += 1
  elif renge >= 5:
    print('too high')
    user_try += 1
  elif renge < 0 and renge > -6:
    print('low')
    user_try += 1
  else:
    print('too low')
    user_try += 1


###------------------------3-------------------------###
###------------------------3-------------------------###

print('\n\nthe first multiple of 7 in the following list.\n')

# find the first multiple of 7 in a list of numbers
numbers = [953, 776, 532, 665, 973, 683, 484, 499, 741, 980]

i = 0
while i < len(numbers):
  
  if numbers[i] % 7 == 0:
    print(f'num in numbers {numbers[i]}')
    break
  i += 1


###------------------------4-------------------------###
###------------------------4-------------------------###

print('\n\nProgram that calculate the average score of a student\n')

ave = []

while True:
  score = input("Enter the score (or 'done' to exit): ")
  if len(score) == 0 or score == 'done':
    break
  ave.append(float(score))
  
averge = sum(ave) / len(ave)
print(f'Averge is {averge:,.2f}')

###------------------------5-------------------------###
###------------------------5-------------------------###

print('\n\nProgram that calculate the average score of a student\n')

full_total = []
index_product = 0

while True:
  pro_name = input('Enter the name of product: ') # get name 
  if len(pro_name) == 0 or pro_name == 'done': # check if user input is done
    break
  pro_quantity = input('Enter quantity: ')
  pro_price = input('Enter price: ')
  print('-' * 45)

  print(f'product: {pro_name}') # print name
  print(f'quantity: {pro_quantity}')
  print(f'price: {pro_price}')

  total = int(pro_quantity) * float(pro_price) # calculate total
  print(f'Total is = {total:,.2f}€')
  full_total.append(total)

  index_product += 1 # add anther product
  print('-' * 45, '\n\n')


print('Thank you for shopping form us.')
print(f'You have {index_product} order.')
i = 1
while i <= index_product: # print all total
  print(f'{i}.product {pro_name} total is = {full_total[i-1]}€')
  i += 1

print('-'*45)
print(f'The ful total is = {sum(full_total)}€') # print full total

###------------------------6-------------------------###
###------------------------6-------------------------###

print('\n\nSimple ATM program\n')

bank = 1000

while True:
  print('-'*60+ '\n\n')
  print('Welacme to our ATM. Please select an option:')
  print('''
  1. Check your bank.
  2. Ota.
  3. laitta.
  4. Exit.''')

  o_num = int(input("Enter option number: "))

  if o_num == 1:
    print(f'You have in bank: {bank}€\n')
    continue
  elif o_num == 2:
    ota = float(input('Enter ota number: '))

    if bank - ota <= 0:
      print('Out of rang enter a lower number.\n')
      continue
    elif bank - ota >= 0:
      bank -= ota 
      print(f'You have now {bank:,}€\n')
      continue
  elif o_num == 3:
    laitta = float(input('Enter the number you wont add: '))
    bank += laitta
    print(f'You have now in bank: {bank}€\n')
    continue
  elif o_num == 4:
    print('Thank you for useing our bank!')
    break
  else:
    continue