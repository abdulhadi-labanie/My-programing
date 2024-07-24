num_1 = 0
total_1 = 0
while num_1 <= 100:
  total_1 += num_1
  num_1 += 1

print('1-', total_1, 'Print the total of numbers between 0 to 100.')

print('\n')
###---------------------------------------------------------###
###--------------------------2------------------------------###

num_2 = 70
total_2 = 0
while num_2 <= 160:
  total_2 += num_2
  num_2 += 1

print('2-', total_2, 'Print the total of numbers between 70 to 160.')

print('\n')
###---------------------------------------------------------###
###--------------------------3------------------------------###

num_3 = 30
total_3 = 0
while num_3 <= 470:
  total_3 += num_3
  num_3 += 2

print('3-', total_3, 'Print the total of even numbers between 30 to 470.')

print('\n')
###---------------------------------------------------------###
###--------------------------4------------------------------###

number = 0
total_4 = 0
while number <= 1000:

  number += 1
  if number % 3 == 0:
    # print(number, 'yes')
    total_4 += number
    # print('total', total_4)
    # print('-'*20)
  # else:
  #   print(number, "No")
  #   print('-'*20)

print('4-', total_4, '''Print the total of numbers that are divisible by 3 and 
between 1 to 1000''')

print('\n')
###---------------------------------------------------------###
###--------------------------5------------------------------###

number_5 = 0
total_5 = 0
while number_5 <= 2000:

  if number_5 % 3 == 0 and number_5 % 7 == 0:
    # print(number_5, 'yes')
    total_5 += number_5
  #   print('total', total_5)
  #   print('-'*20)
  # else:
  #   print(number_5, "No")
  #   print('-'*20)
  number_5 += 1

print('5-', total_5, '''Print the total of numbers that are divisible by 3 and 
7, and between 1 to 2000''')

print('\n')



print('\n')
###---------------------------------------------------------###
###--------------------------6------------------------------###

nums_6 = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 
25, 27, 29]

len_nums_6 = len(nums_6)
index = 1
str_ls = str(nums_6[0])

while index < len_nums_6:
  str_ls += ', ' + str(nums_6[index])
  index += 1
  
print(str_ls)