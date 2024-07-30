import string
import random

print('random password containing letters:\n')

carcters = string.ascii_letters + string.digits + string.punctuation


len_pass = int(input("Enter how mach long password you want: "))

for_index = 0
password = ''

while for_index < len_pass:
  random_C = random.choice(carcters)
  password += random_C
  for_index += 1
  
print('password:', password)

###--------------------------2------------------------------###
###--------------------------2------------------------------###
print('\n\npassword containing big letters:\n')

carcter = string.ascii_uppercase + string.digits + string.punctuation

password = ''

len_password_2 = int(input('Enter the long of password: '))

len_index_2 = 0
while len_index_2 < len_password_2:
  random_2 = random.choice(carcter)
  password += random_2
  len_index_2 += 1

print('password:', password)

###--------------------------3------------------------------###
###--------------------------3------------------------------###
print('\n\npassword containing letters, numbers, and punctuations:\n')

password = []

caracter = string.ascii_letters 
numbers = string.digits + string.punctuation

len_pass_3 = int(input('Enter th long of password: '))

hafe_len_cars = (len_pass_3 // 2)

hafe_len_nums = (len_pass_3 // 2)
if len_pass_3 % 2 != 0:
  hafe_len_cars += 1

i = 0
while i < hafe_len_cars: # cars hafe or more
  password.append(random.choice(caracter))
  i += 1

i = 0 
while i < hafe_len_nums:
  password.append(random.choice(numbers)) # nums while
  i += 1

random.shuffle(password)
password = ''.join(password)
print(f'The password is {len_pass_3} = {password}')