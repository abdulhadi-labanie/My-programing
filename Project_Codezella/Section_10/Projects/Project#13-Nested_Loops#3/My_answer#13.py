###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n1. Make your own Multiplication table like the following.\n''')

for num in range(11):
  print('\n'+'-'*40+ '\n')
  for i in range(11): 
    print(f"{num} x {i} = {num * i}")

###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n2. Make All the following list items uppercase. \n''')

words = ['have', 'that', 'they', 'with', 'this', 'from', 
'which', 'would', 'will', 'there', 'make', 'when', 'more', 
'other', 'what', 'time', 'about', 'than', 'into', 'could', 
'state', 'only', 'year', 'some', 'take', 'come', 'these', 
'know', 'like', 'then', 'first', 'work', 'such', 'give', 
'over', 'think', 'most', 'even', 'find', 'also', 'after', 
'many', 'must', 'look', 
'before', 'great', 'back', 'through', 'long', 'where', 'much', 
'should', 'well', 'people', 'gouda', 'just', 'because', 'good', 
'each', 'those', 'feel', 'seem', 'high', 'place', 'little', 
'world', 'very', 'still', 'nation', 'hand', 'life', 'tell', 
'write', 'become', 'here', 'show', 'house', 'both', 'between', 
'need', 'mean', 'call', 'develop', 'under', 'last', 'right', 
'move', 'thing', 'general', 'school', 'never', 'same', 
'another', 'begin', 'while', 'number', 'part', 'turn', 'real', 
'leave', 'might', 'want', 'point', 'form', 'child', 'small', 
'since', 'against', 'late', 'home', 'interest', 'large', 
'person', 'open', 'public', 'follow', 'during', 'present', 
'without', 'again', 'hold', 'codezilla', 'govern', 'around', 
'head', 'consider', 'word', 'program', 'problem', 'however', 
'lead', 'system', 'order', 'plan', 'keep', 'face', 'group', 
'play', 'stand', 'increase', 'early', 'course', 'change', 
'help', 'line', 'possible', 'fact', 'down']

for i in range(len(words)):
  words[i] = words[i].upper()
      
print(words)


###--------------------------3----------------------###
###--------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n3. A. convert each inner list to a string and join them 
with a space and add them to a list named sentences.
B. Make another list replace spaces with dashes and 
convert each word to uppercase.\n''')

words3 = [["Hello", "from", "Codezilla"], 
["Python", "Course", "is", "awesome"], 
["I", "enjoy", "learning", "Python", "with", "Codezilla"]]

sentences = []

for word in words3:
  sentences.append(' '.join(word))
print(sentences,'\n\n')

ex_sentences = []

for word in range(len(sentences)):
  ex_sentences.append(sentences[word].replace(' ', '-').upper())

print(ex_sentences)

###---------------------------4------------------------###
###---------------------------4------------------------###
print('\n\n' + '#-'*35 +
      '''\n\n4. Find the smallest number in the following list 
      without using min and sort.\n''')

numbers4 = [-588, -479, -713, -701, -885, -578, -835, -466, -
935, -665, -360, -837, -389, -367, -454, -668, -907, -822, -
541, -680, -405, -330, -625, -916, -331, -876, -689, -753, -
810, -648, -787, -952, -718, -401, -502, -699, -533, -450, -
580, -725]

min_num = numbers4[0]

for num in numbers4:
  if num < min_num:
     min_num = num
        
print(f"The smallest number is {min_num}")

###---------------------------5------------------------###
###---------------------------5------------------------###
print('\n\n' + '#-'*35 +
      '''\n\n5. Find the smallest, odd number in the following list 
without using min and sort.\n''')

numbers5 = [-500, -694, -762, -445, -348, -361, -758, -594, -
954, -861, -610, -549, -336, -400, -600, -836, -671, -573, -
555, -390, -450, -811, -849, -870, -815, -694, -951, -588, -
484, -609, -674, -411, -408, -498, -649, -541, -441, -839, -
567, -898]

for f_odd in numbers5:
  if f_odd % 2 != 0:
    odd = f_odd
    break

for num in numbers5:
   if num % 2 != 0 and (num < odd):
      odd = num
         
print(f"The smallest odd number is {odd}")   

###---------------------------6------------------------###
###---------------------------6------------------------###
print('\n\n' + '#-'*35 +
      '''\n\n6. Find the average word length in the following sentence.\n''')

sentence6 = """Python is a widely used high-level 
general-purpose interpreted dynamic programming language
Its design philosophy emphasizes code readability and its 
syntax allows programmers to express concepts in fewer lines of 
code 
than possible in many other languages
The language provides constructs intended to enable clear 
programs on both a small and large scale
"""
sentence66 = sentence6.split(' ')

total = 0

for word in sentence66:
  total += len(word)

avrege = total / len(sentence66)

print(avrege)

###---------------------------7------------------------###
###---------------------------7------------------------###
print('\n\n' + '#-'*35 +
      '''\n\n7. Debug the following code with at least 2 solutions, 
so that "Found Codezilla!" is the last printed output.\n''')

nested_list = [["Hello", "from", "Codezilla"], 
["Python", "Course", "is", "awesome"], 
["I", "enjoy", "learning", "Python"]]

# Solution 1: comparing words and exit the program with exit() function
for lst in nested_list:
  print(lst)
  for word in lst:
    print(word)
    if word == "Codezilla":
      print("Found Codezilla!")
    exit() # EXIT THE WHOLE PROGRAM

##########

# Solution 2: comparing words and exit the program with continue and exit() function 
for lst2 in nested_list:
  print(lst2)
  for word in lst2:
    print(word)
    if word != "Codezilla":
      continue
    else:
      print("Found Codezilla!")
      exit() # EXIT THE WHOLE PROGRAM

##########

# Solution 3: checking for words with in and exit the loop with break (the best solution)
for lst3 in nested_list:
  print(lst3)
  if "Codezilla" in lst3:
    print("Found Codezilla!")
    break # EXIT THE LOOP ONLY