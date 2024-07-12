word = input("Enter a word: ")
is_vowl = input("does the word start with a vowl: ")
print('-'*40)

vowl = word[0]

if vowl.lower() in 'oieua' and is_vowl == 'yes':
  print(f'Bravoo!!\n{word} is start with vowl.')
elif vowl.lower() not in 'oieua' and is_vowl == 'no':
  print(f'Bravoo!!\n{word} is not start with vowl.')
else:
  print("lest try again!")