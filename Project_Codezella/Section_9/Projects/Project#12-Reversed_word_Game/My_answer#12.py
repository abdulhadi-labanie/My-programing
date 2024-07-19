import time
import random

# list of words
words = [
'have', 'that', 'they', 'with', 'this', 'from', 'which', 'would', 'will', 
'there',
'make', 'when', 'more', 'other', 'what', 'time', 'about', 'than', 'into', 
'could', 
'state', 'only', 'year', 'some', 'take', 'come', 'these', 'know', 'like', 
'then', 
'first', 'work', 'such', 'give', 'over', 'think', 'most', 'even', 'find', 
'also', 
'after', 'many', 'must', 'look', 'before', 'great', 'back', 'through', 
'long', 
'where', 'much', 'should', 'well', 'people', 'gouda', 'just', 'because', 
'good', 
'each', 'those', 'feel', 'seem', 'high', 'place', 'little', 'world', 
'very', 'still', 
'nation', 'hand', 'life', 'tell', 'write', 'become', 'here', 'show', 
'house', 'both', 
'between', 'need', 'mean', 'call', 'develop', 'under', 'last', 'right', 
'move', 'thing', 
'general', 'school', 'never', 'same', 'another', 'begin', 'while', 
'number', 'part', 
'turn', 'real', 'leave', 'might', 'want', 'point', 'form', 'child', 
'small', 'since', 
'against', 'late', 'home', 'interest', 'large', 'person', 'open', 
'public', 'follow', 
'during', 'present', 'without', 'again', 'hold', 'codezilla', 'govern', 
'around', 
'head', 'consider', 'word', 'program', 'problem', 'however', 'lead', 
'system', 
'order', 'plan', 'keep', 'face', 'group', 'play', 'stand', 'increase', 
'early', 'course', 'change', 'help', 'line', 'possible', 'fact', 'down'
]
#fande the index of word
len_ls = len(words) - 1

rand_words = random.randint(0, len_ls)

#reverse the word
word = words[rand_words]
remo_word = list(words[rand_words])
remo_word.reverse()

#format the word
finsh_word = "".join(remo_word)
print(f"The reversed word is : {finsh_word}")
print('-'*30)
#Math time
write_word_time = time.time()
write_word = input("Enter what is word in 5s: ")
finish_time = time.time()

the_time = finish_time - write_word_time
print('-'*30)
#Chek if True
if (the_time <= 5 and the_time >= 0) and (word == write_word):
  print(f"You win!!\nyour time is = {the_time:.1f}")
else:
  print(f"Wrong answer or lite time!!\nyour time is = {the_time:.1f}")
