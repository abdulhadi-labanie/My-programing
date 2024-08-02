###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '\n\n1. Print the total of numbers between 0 to 100.\n')

total_1 = 0

for i in range(1, 101):
  total_1 += i

print('1. The total is =', total_1)

###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '\n\n2. Print the total of numbers between 70 to 160.\n')

total_2 = 0

for i in range(70, 161):
  total_2 += i

print('2. The total is =',total_2)

###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '\n\n3. Print the total of even numbers between 30 to 470.\n')

total_3 = 0 

for i in range(30, 471, 2):
  total_3 += i

print('3. The total is =', total_3)

###---------------------------4----------------------###
###---------------------------4----------------------###
print('\n\n' + '#-'*35 +
      '\n\n4. Print the total of numbers that are divisible by 3 and between 1 to 1000.\n')

total_4 = 0

for i in range(1, 1001):
  if i % 3 == 0:
    total_4 += i

print('4. The total is =', total_4)

###---------------------------5----------------------###
###---------------------------5----------------------###
print('\n\n' + '#-'*35 + '''\n\n
5. Make a program that calculate the average of the 
second highest and second lowest numbers that are 
between 452 and 983 and are divisible by 5 and 7.\n\n''')

div_5_7 = []

for i in range(452, 983):
  if i % 5 == 0 and i % 7 == 0:
    div_5_7.append(i)

averge = div_5_7[1] + div_5_7[-2] / 2

print('5. The averge is =', averge)