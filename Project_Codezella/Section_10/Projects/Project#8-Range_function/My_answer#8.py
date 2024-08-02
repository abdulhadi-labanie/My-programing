print('\n\n' + '-'*40 +
  '\n\n1. print a list of odd numbers from 1 to 100.\n')

odd_num = []

for i in range(1, 100, 2):
  odd_num.append(i)

print(odd_num)

# or
# numbers = list(range(1, 101, 2))
# print(numbers)


###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '\n\n2. print a list of even numbers from 8 to 422.\n')

even_num = []

for i in range(8, 423, 2):
  even_num.append(i)

print(even_num)

###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '\n\n3. print a list of numbers from 120 to 450, increasing by 7.\n')

sum_7_ls = []

for i in range(120, 451, 7):
  sum_7_ls.append(i)

print(sum_7_ls)

# or 
# numbers = list(range(120, 451, 7))
# print(numbers)


###---------------------------4----------------------###
###---------------------------4----------------------###
print('\n\n' + '#-'*35 +
      '\n\n4. print the sum of even numbers from 28 to 228.\n')

sum_even_ls = []
sum_even = 0

for i in range(28, 229, 2):
  sum_even_ls.append(i)
  sum_even += i

print(sum_even_ls)
print('\nThe total is = ' ,sum_even)

# or
# numbers = list(range(28, 229, 2))
# total = sum(numbers)
# print(total)