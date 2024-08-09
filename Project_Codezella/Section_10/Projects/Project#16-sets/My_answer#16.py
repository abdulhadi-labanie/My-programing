import random

###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n1. Make a list that generates 1000 random number 
between 1 and 1000 then calculate the number of 
unique numbers and print them, then print the 
average of the list and the average of the unique 
numbers.\n\n''')

random_ls = []

for i in range(1000):
  random_num = random.randint(1, 1000)
  random_ls.append(random_num)

nums_set = set(random_ls)
unique_nums = list(nums_set)
len_unique = len(unique_nums)

print(f"Lenth ofunique is: {len_unique}")
print(f"The avrege of unique list is: {sum(unique_nums)/len_unique:,.2f}")
print(f"The avrege of all nums list is: {sum(random_ls)/len(random_ls):,.2f}")