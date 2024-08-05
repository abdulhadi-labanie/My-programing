###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n1. Flat a nested list in 2 Ways.\n''')

nested_list = [["Hello", "from", "Codezilla"], 
["Python", "Course", "is", "awesome"], 
["I", "enjoy", "learning", "Python", "with", "Codezilla"]]

nested_list1 = []

for i in nested_list:
  for r in i:
    nested_list1.append(r)
    
print(' 1.', nested_list1)

print('\n' + '-' * 40, '\n')
#-----------------------------------------------#

nested_list2 = []

for lest in nested_list:
  nested_list2.extend(lest)
    
print(' 2.', nested_list2)
    
###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '\n\n2. Find the smallest multiple of 9 in the following list.\n')

numbers = [511, 260, 261, 912, 362, 473, 893, 277, 351, 494, 
486, 885, 341, 484, 598, 950, 859, 716, 488, 584]

numbers.sort()

for i in numbers:
  if i % 9 == 0:
    print(f"multiple of 9 is = {i}")
    break

###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n3. Find the largest number in the following list without 
using max and sort.\n''')

numbers = [-588, -479, -713, -701, -885, -578, -835, -466,
-935, -665, -360, -837, -389, -367, -454, -668, -907, -822,
-541, -680, -405, -330, -625, -916, -331, -876, -689, -753,
-810, -648, -787, -952, -718, -401, -502, -699, -533, -450,
-580, -725]

num_big = numbers[0]

for num3 in numbers:
  if num3 > num_big:
    num_big = num3
    
print(f"The largest number is {num_big}")


###---------------------------4----------------------###
###---------------------------4----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n4. Find the largest even number in the following list 
without using max and sort.\n''')

numbers4 = [-500, -694, -762, -445, -348, -361, -758,
-594, -954, -861, -610, -549, -336, -400, -600, -836,
-671, -573, -555, -390, -450, -811, -849, -870, -815, -694,
-951, -588, -484, -609, -674, -411, -408, -498, -649,
-541, -441, -839, -567, -898]

evenbig = None

for numeven in numbers4:
  if numeven % 2 == 0:
    evenbig = numeven
    break
    
for num4 in numbers4:
  if num4 % 2 == 0 and (evenbig is not None and num4 > evenbig):
      evenbig = num4
      
print(f'The largest even number is {evenbig}')