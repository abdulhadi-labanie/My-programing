winners_ls = ['mohamed', 'ahmed', 'mahmoud', 'islam', 
           'hassan', 'israa', 'mariam']

name_win = input("Enter the name: ").lower().strip()

if name_win in winners_ls:
  print(f'Congratulation {name_win.capitalize()} is winning!!!')
else:
  print(f"Sorry {name_win.capitalize()} is not winner.")

###-------------------------------------------------------------###

first_name = 'islam'
first_passeord = 'islam315'

se_name = 'abdu'
se_password = 'abdu32'

name_ls = [first_name, se_name]
password_ls = [first_passeord, se_password]

Enter_name_1 = str(input("Enter user name: "))
Enter_password_1 = str(input("Enter password : "))


if Enter_name_1 in name_ls and Enter_password_1 in password_ls:
  print("Access is allowed")
else:
  print("Sorry, Access is not allowed!!")


###-------------------------------------------------------------###

con_fri_lat_ls = ['eg', 'ksa', 'syr']
con_lat_sun_ls = ['usa', 'uk', 'fi']

Enter_con = input("Enter the contry: ")

if Enter_con in con_fri_lat_ls:
  print(f"The holi is FRI and SAT in {Enter_con}")
elif Enter_con in con_lat_sun_ls:
  print(f"The holi is SAT and SUN in {Enter_con}")
else:
  print("sorry, I do not know!")
