name = input("Enter your full name: ").strip().title()

first_name = name.index(' ')

print(f"Hello! {name[:first_name]}.\nWelcame to Codezilla.")

###-------------------------------------------------------------------###
###-------------------------------------------------------------------###

name1 = input("enter your name: ").strip().title()
compani = input("Enter compani name: ")
age = input("Enter your berthday: ")
email = input("Enter your email: ")

print('-'*50)
f_name = name1.index(' ')
print(f"Hello! {name1[:f_name]}.\nWelcame to Codezilla!")
print('-'*50)

id = compani[:3] + '-' + name1[-2:] + age
c_gmail = email.index('@')

print(f"Your id is: {id}")
print(f"Your email is: {email[:c_gmail]}@{compani}.com")
