###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '\n\n1. Sum the even numbers between 28 and 928 in at least 3 different ways.\n')
total = sum(range(28, 929, 2))

print(" 1. The total sum is =", total)

print('\n' + '-' * 40, '\n')
#-----------------------------------------------#

total_1 = 0
i = 0
for i in range(28, 929, 2):
  total_1 += i

print(" 2. The total whith for is =", total_1)

print('\n' + '-' * 40, '\n')
#-----------------------------------------------#

numbers = list(range(28, 929, 2))
total_3 = 0
for i in range(len(numbers)):
  total_3 += numbers[i]
  
print(" 3. The total whith for list is =", total_3)

print('\n' + '-' * 40, '\n')
#-----------------------------------------------#

numbers = list(range(28, 929, 2))
total_4 = sum(numbers)

print(" 4. The total whith while (sum) is =", total_4)


###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '\n\n2. Print the following list in the following form.\n')

fruits = ['apple', 'banana', 'orange', 'grape', 'mango']

print("Available fruits: ")

for i in range(len(fruits)):
  print(f'{i + 1}. {fruits[i]}')

###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '\n\n3. Print the total of even numbers between 30 to 470.\n')

# a list of pizzas
pizzas = ['Margherita', 'Pepperoni', 'Super Supreme',
'Hawaiian', 'Meat Lovers', 'Cheese Lovers']

print("Welcame to Eagle store!")
print('-'*40)

for i in range(len(pizzas)):
  print(f"{i + 1} {pizzas[i]}")

pizza_num = int(input("Enter the number of the pizza you want to order: "))
num = int(input("Enter the number of pizza: "))

print("\nThands for choosing Codezillas Pizza!")
print(f"While we get {num} {pizzas[pizza_num - 1]} pizza ready for you")