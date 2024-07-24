print("1.SUM:")
total = 0

while True:
  num_1 = input("Enter the number: ")
  if num_1.lower() == 'done' or len(num_1) == 0:
    break
    
  total += int(num_1)
print(f"The total is = {total}")

###-----------------------------------2---------------------------------###
###-----------------------------------2---------------------------------###
print("\n\n2.SUM even number:")

total_2 = 0

while True:
  num_2 = input("Enter the number: ")
  if num_2.lower() == 'done' or len(num_2) == 0:
    break
  if int(num_2) % 2 != 0:
    continue
    
  total_2 += int(num_2)
print(f"The total is = {total_2}")

###-----------------------------------3---------------------------------###
###-----------------------------------3---------------------------------###
print("\n\n3.SUM odd+ number:")

total_3 = 0

while True:
  num_3 = input("Enter the number: ")
  if num_3.lower() == 'done' or len(num_3) == 0:
    break
  if int(num_3) % 2 == 0 or int(num_3) < 0:
    continue

  total_3 += int(num_3)
print(f"The total is = {total_3}")

###-----------------------------------4---------------------------------###
###-----------------------------------4---------------------------------###
print("\n\n4.Kertta num:")

total_4 = 1

while True:
  num_4 = input("Enter the number: ")
  if num_4.lower() == 'done' or len(num_4) == 0:
    if total_4 == 1 and len(num_4) == 0:
      total_4 = total_4 - 1
    break
    
  if int(num_4) == 0 :
    continue

  total_4 *= int(num_4)
print(f"The total is = {total_4}")

###-----------------------------------5---------------------------------###
###-----------------------------------5---------------------------------###
print("\n\n5.Divition 5 and 7 num:")

total_5 = []
num_5 = 452

while num_5 >= 452 and num_5 <= 983:
  if num_5 % 5 == 0 and num_5 % 7 == 0:
    total_5.append(num_5)
  num_5 += 1
avrge_5 = (total_5[1] + total_5[-2]) / 2

print(f'''average of the second highest and second lowest numbers that are
between 452 and 983 and are divisible by 5 and 7 is = {avrge_5}''')

###-----------------------------------6---------------------------------###
###-----------------------------------6---------------------------------###
print("\n\n6.Debug the following code: A")

# A)
# initialize the total to 0
total = 0
while True:

  # Ask for a number
  number = input("Enter a number: ")

  # If the user enters "done", or pressed Enter key then break out of the loop
  if number == "done" or len(number) == 0: 
    break

  # SUM ODD NUMBERS
  if int(number)%2 == 0: 
    continue

  total += int(number)
print(f"The total is: {total}")


print("\n\n6.Debug the following code: B")
# B)
total_1 = 0
# Always ask for a number
while True:
  # Ask for a number
  number_1 = input("Enter a number: ")

  # If the user enters "done", or pressed Enter key then break out of the loop
  if number_1 == "done" or len(number_1) == 0: 
    break

  # SUM NUMBERS DIVISIBLE BY 3
  if int(number_1)%3 != 0: 
    continue

  total_1 += int(number_1)
# Print the total
print(f"The total is: {total_1}")