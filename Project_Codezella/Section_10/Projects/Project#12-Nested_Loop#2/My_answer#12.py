###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n1. Using For loop search for the word that the user will 
enter in the following list and print the result.\n''')

words = [
'each', 'those', 'feel', 'seem', 'high', 'place', 
'little', 'world', 'very', 'still', 
'nation', 'hand', 'life', 'tell', 'write', 'become', 
'here', 'show', 'house', 'both', 
'between', 'need', 'mean', 'call', 'develop', 'under', 
'last', 'right', 'move', 'thing', 
'general', 'school', 'never', 'same', 'another', 
'begin', 'while', 'number', 'part', 
'turn', 'real', 'leave', 'might', 'want', 'point', 
'form', 'child', 'small', 'since', 
'against', 'late', 'home', 'interest', 'large', 
'person', 'open', 'public', 'follow', 
'during', 'present', 'without', 'again', 'hold', 
'codezilla', 'govern', 'around', 
'head', 'consider', 'word', 'program', 'problem', 
'however', 'lead', 'system', 
'order', 'plan', 'keep', 'face', 'group', 'play', 
'stand', 'increase', 
'early', 'course', 'change', 'help', 'line', 
'possible', 'fact', 'down']

et_word = input("Enter a word to see if it in the list: ")

for i in words:
  if i == et_word.lower():
    print(f"The word is in list [{i}]")
    break
  else:
    print(f"The word is not in list {et_word}")
    break

###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '\n\n2. Tell the user if the entered number is a prime number or not.\n')

et_num2 = int(input("Enter a number: "))
prime = True

for i in range(2, et_num2):
  if et_num2 % i == 0:
    print(f"The number {et_num2} is not prime")
    prime = False
    break

if prime:
  print(f"The number {et_num2} is prime")

###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '\n\n3. Change list items into their absolute values.\n')

numbers = [-500, -694, -762, -445, -348, -361, -758, -594, 
-954, -861, -610, -549, -336, -400, -600, -836, -671, -573, 
-555, -390, -450, -811, -849, -870, -815, -694, -951, -588, 
-484, -609, -674, -411, -408, -498, -649, -541, -441, -839, 
-567, -898]

nums_plus = []
num_abs = []

for num in range(len(numbers)):
  if numbers[num] < 0:
    plus = numbers[num] * -1
    nums_plus.append(plus)
  else:
    nums_plus.append(numbers[num])
    
print(nums_plus)

#--------------step 2 -------------#

for num in numbers:
  num_abs.append(abs(num))

print('\n\n 2.',num_abs)
###---------------------------4----------------------###
###---------------------------4----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n4. Find the number of occurrences of the letter a and 
the letter e in the following list.\n''')



lst_words = [['have', 'that', 'they', 'with', 'this', 'from', 
'which', 'would', 'will', 'there', 'make', 'when', 'more', 
'other', 'what', 'time', 'about', 'than', 'into', 'could'], 

[ 'state', 'only', 'year', 'some', 'take', 'come', 'these', 
'know', 'like', 'then', 'first', 'work', 'such', 'give', 
'over', 'think', 'most', 'even', 'find', 'also', 'after', 
'many', 'must', 'look', 'before', 'great', 'back', 'through', 
'long'],

[ 'where', 'much', 'should', 'well', 'people', 'gouda', 'just', 
'because', 'good', 'each', 'those', 'feel', 'seem', 'high', 
'place', 'little', 'world', 'very', 'still', 'nation', 'hand', 
'life', 'tell', 'write', 'become', 'here', 'show', 'house', 
'both', 'between', 'need', 'mean', 'call', 'develop', 'under', 
'last', 'right', 'move', 'thing'], 

['general', 'school', 'never', 'same', 'another', 'begin', 
'while', 'number', 'part', 'turn', 'real', 'leave', 'might', 
'want', 'point', 'form', 'child', 'small', 'since', 'against', 
'late', 'home', 'interest', 'large', 'person', 'open', 
'public', 'follow', 'during', 'present', 'without', 'again', 
'hold', 'codezilla', 'govern', 'around', 'head', 'consider', 
'word', 'program', 'problem', 'however', 'lead', 'system'],

['order', 'plan', 'keep', 'face', 'group', 'play', 'stand', 
'increase', 'early', 'course', 'change', 'help', 'line', 
'possible', 'fact', 'down']]

full_ls = []

for ls in lst_words:
  full_ls.extend(ls)

letter_e = 0
letter_a = 0

for word in full_ls:
  for letter in word:
    if letter.lower() == 'a':
      letter_a += 1
    elif letter.lower() == 'e':
      letter_e += 1

#------------------step 2-------------------#
# # loop through the list of words
# for lst in lst_words:
  # # loop through the words in the list
  # for word in lst:
    # # loop through the letters in the word
    # for letter in word:
      # # check if letter is a or e
      # if letter == 'a':
        # letter_a += 1
      # elif letter == 'e':
        # letter_e += 1

print(f'leter a lenth is {letter_a}')
print(f'leter e lenth is {letter_e}')