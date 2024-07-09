# employees and their ids
juniors = ['1111', '1113', '1115', '1117','1119', '1121']
mid_level = ['1311', '1313', '1315', '1317','1319', '1321', '1323', '1325']
seniors = ['1519', '1521', '1523', '1525']

e_id = input("Enter employee id: ")
rate = float(input("Enter hour rate: "))
hour = float(input("Enter hours in this month: "))


if e_id in juniors:
  puns = rate * hour * 3
  print(f"Employee id:{e_id} gets a bunos of {puns:,.2f}€")
elif e_id in mid_level:
  puns = rate * hour * 6
  print(f"Employee id:{e_id} gets a bunos of {puns:,.2f}€")
elif e_id in seniors:
  puns = rate * hour * 9
  print(f"Employee id:{e_id} gets a bunos of {puns:,.2f}€")
else:
  print("Not an employee.")

