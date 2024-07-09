# a list of pizzas
pizzas = ['Margherita','Pepperoni',
          'Super Supreme','Hawaiian',
          'Meat Lovers','Cheese Lovers'
]

order = int(input("Enter the namber of the pizza you want to order:" \
              '\n1.Margherita'+'\n2.Pepperoni'\
              '\n3.Super Supreme'+'\n4.Hawaiian'\
              '\n5.Meat Lovers'+'\n6.Cheese Lovers\n\n order is: '))

num = int(input("Enter the number how mush pizza you want: "))
pizza = None

if order == 1:
  pizza = pizzas[0]
elif order == 2:
  pizza = pizzas[1]
elif order == 3:
  pizza = pizzas[2]
elif order == 4:
  pizza = pizzas[3]
elif order == 5:
  pizza = pizzas[4]
elif order == 6:
  pizza = pizzas[5]
else:
  pizza = None
  print("Enter number 1-6.")

if pizza != None:
  print(f"While we get {num} {pizza} pizaa ready for you.")


 ###---------------------------------------------------------------###
 ###---------------------------------------------------------------###

# a list of hot drinks, soda, and juices
drinks = [
# hot drinks
['Tea', 'Herbs', 'Hot Cider', 'Coffee', 'Hot Chocolate'],
# soda
['Coke', 'Pepsi', 'Fanta', 'Sprite', 'Mirinda'],
# juices
['Lemonade', 'Orange Juice', 'Mango Juice',
'Strawberry Juice', 'Apple Juice']
]

d_order = int(input("Enter what do you want drink:"\
                   "\n 1.Hot drinks"+"\n 2.Soda"+"\n 3.Juices"+\
                   "\n\norder is: "))
print('-'*40)

Hot = None
Soda = None
Juices = None
f_order = None

if d_order == 1:
  Hot = f'\n1.{drinks[0][0]}\n2.{drinks[0][1]}\n3.{drinks[0][2]}\
          \n4.{drinks[0][3]}\n5.{drinks[0][4]}\n'
  f_order = int(input(f"\nEnter witch do you want to drink:{Hot}\n\norder is: "))
elif d_order == 2:
  Soda = f'\n1.{drinks[1][0]}\n2.{drinks[1][1]}\n3.{drinks[1][2]}\
           \n4.{drinks[1][3]}\n5.{drinks[1][4]}\n'
  f_order = int(input(f"\nEnter witch do you want to drink:{Soda}\n\norder is: "))
elif d_order == 3:
  Juices = f'\n1.{drinks[2][0]}\n2.{drinks[2][1]}\n3.{drinks[2][2]}\
             \n4.{drinks[2][3]}\n5.{drinks[2][4]}\n'
  f_order = int(input(f"\nEnter witch do you want to drink:{Juices}\n\norder is: "))


if f_order != None:
  print('\n'+'-'*40)
  print(f"Thanks you, Enjoe your time.\nWhile we get {drinks[d_order-1][f_order-1]} ready for you:)")

###--------------------------------------------------------------------------------###
###--------------------------------------------------------------------------------###

students = [
# Codezilla school
['1100', '1101', '1102', '1103', '1104',
'1105', '1106', '1107', '1108', '1109'],
# Al Dorra school
['2100', '2101', '2102', '2103', '2104',
'2105', '2106', '2107', '2108', '2109'],
# Mostafa Kamel school
['3100', '3101', '3102', '3103', '3104',
'3105', '3106', '3107', '3108', '3109']
]

s_id = input("Enter the student id: ")

print('-'*40)

if s_id in students[0]:
  print("Student is in Codezilla school.")
elif s_id in students[1]:
  print("Student is in Al Dorra school.")
elif s_id in students[2]:
  print("Student is in Codezilla Mostafa Kamel school.")
else:
  print("Sorry, Student is not our recorde!!")