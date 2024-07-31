print('\n' + '-'*40 + '\n1. Find the square of the numbers in the list.\n')

numbers = [1, 2, 3, 4, 5]

num_power = []

for num in numbers:
  power = num ** 2
  num_power.append(power)
print(num_power)

###------------------------2----------------------###
###------------------------2----------------------###
print('\n' + '-'*40 + 
      '\n2. list with the square of the numbers in the given list.\n')

scores = [75, 87, 93, 98, 82, 67, 91, 88]
pr_scores = []

for n in scores:
  prsent = f'{n}%'
  pr_scores.append(prsent)

print(pr_scores)


###------------------------3----------------------###
###------------------------3----------------------###
print('\n' + '-'*40 + 
      '\n3. Make a list with all the items in the following list in lowercase.\n')

fruits = ["APPLE", "ORANGE", "BANANA", "PEAR", "MANGO"]

lower_fruits = []

for f in fruits:
  lower_fruits.append(f.lower())

print(lower_fruits)

###------------------------4----------------------###
###------------------------4----------------------###
print('\n' + '-'*40 + 
      '\n4. list with all the items in the following list in title case.\n')

names = ["mohamed gouda", "islam mahfouz", "ayman hamed", "hassan ali", 
"mostafa mohamed"]

titel_names = []

for ti in names:
  titel_names.append(ti.title())

print(titel_names)

###------------------------5----------------------###
###------------------------5----------------------###
print('\n' + '-'*40 + 
      '\n5. Make a list from the letters of the user string in uppercase.\n')

ent_text = input("Enter a text: ")
ls_test = []

for c in ent_text:
  ls_test.append(c.upper())

print(ls_test)

###------------------------6----------------------###
###------------------------6----------------------###
print('\n' + '-'*40 + 
      '\n6. Make a new list with prices in the following form $10.99.\n')

prices = [10.99, 20.99, 30.99, 40.99, 50.99]
ls_prices = []

for p in prices:
  ls_prices.append(f'${p}')

print(ls_prices)

###------------------------7----------------------###
###------------------------7----------------------###
print('\n' + '-'*40 + 
      '\n\n7. Calculate the average of the following price list.\n')

prices_7 = [75, 153, 635, 144, 356, 712, 675, 234]

pric = 0

i = 0
for p in prices_7:
  pric += p
  i += 1

avrege = pric / i
print(prices_7)
print(f'The averge is = {avrege:,.2f}')

###------------------------8----------------------###
###------------------------8----------------------###
print('\n' + '-'*40 + 
      '\n\n8. Make the following list into one string using For, to get the following output. \n')

nums = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 
25, 27, 29]

string = str(nums[0])

for n in nums[1:]:
  string += ', ' + str(n)

print(string)