# Employees and their offices
cairo = ['Islam Mahfouz', 'Mohamed Mesilhy', 
'Hatem Elmaghraby', 'Kareem Embaby']
riyadh = ['Mohamed Gouda', 'Ayman Hamed', 
'Seif Ali', 'Adham Wael']
casablanca = ['Ahmed Ashraf', 'Abd El-Rahman Mahrous', 
'Islam Sheta', 'Mohamed Medhat', 'Mahmoud Nasser']
dubai= ['Ahmed Alaa', 'Kareem Abd-Elmeged', 
'Osama Ashraf', 'Mohamed Mostafa', 'Ahmed Bedeir']

# Cairo = Egypt
# Riyadh = Saudi_Arabia = KSA
# Casablanca = Morocco
# Dubai = UAE

name = input("Enter the name of office: ").lower()


match name:
    case 'cairo' | 'egypt' | 'eg':
        print(f"The employees in {name} are: {', '.join(cairo[:-1])} and {cairo[-1]}")
    case 'riyadh' | 'saudi arabia' | 'ksa':
        print(f"The employees in {name} are: {', '.join(riyadh[:-1])} and {riyadh[-1]}")
    case 'casablanca' | 'morocco':
        print(f"The employees in {name} are: {', '.join(casablanca[:-1])} and {casablanca[-1]}")
    case 'dubai' | 'uae':
        print(f"The employees in {name} are: {', '.join(dubai[:-1])} and {dubai[-1]}")
    case _:
        print("Not found!!")
