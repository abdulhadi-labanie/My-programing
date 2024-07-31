print('\n' + '-'*40 + '\nFind the total of the numbers in the list.\n')

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
total = 0
for num in numbers:
  total += num
  print(total)

###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n' + '-'*40 + '\nFind the square of the numbers in the list.\n')

numbers_2 = [1, 2, 3, 4, 5]

for num in numbers_2:
  num = num **2
  print(num)
  
###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n' + '-'*40 +
      '\nPrint the characters of the following string, each on a line.\n')

string = "Codezilla Python Course"

for char in string:
  print(char)

###---------------------------4----------------------###
###---------------------------4----------------------###
print('\n' + '-'*40 +
      '\nPrint the total cost of the following list.\n')

# A list of prices for different items in dollars
prices = [10.99, 9.99, 15.99, 7.99, 12.99]

total = 0
for num in prices:
  total += num
  print(total)
print('\nThe total is =',total)

###---------------------------5----------------------###
###---------------------------5----------------------###
print('\n' + '-'*40 +
      '\nPrint the multiplication result of the following list.\n')

numbers_5 = [1, 2, 3, 4, 5]
total = 1

for num in numbers_5:
  total *= num
  print(total)
print('\nThe total is =',total)

###---------------------------6----------------------###
###---------------------------6----------------------###
print('\n' + '-'*40 +
      '\nFind the product of numbers that user enters.\n')

total_ls = []
total_6 = 1

while True:
    enter_num = input('Enter a number to product (enter to stop): ')
    if len(enter_num) == 0:
      break
    else:
      total_ls.append(float(enter_num))
      continue
for num in total_ls:
  total_6 *= num
      
print('\nThe total is =',f'{total_6:,.2f}')