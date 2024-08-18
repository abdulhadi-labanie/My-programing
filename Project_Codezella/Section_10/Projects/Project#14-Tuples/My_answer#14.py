###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n1. Make a program that print contacts info in the following form.\n''')

contacts = [
('Mohamed Gouda', '+1-555-555-5555', 'mohamedgouda@example.com'), 
('Amira Abdelrahman', '+1-555-555-5556', 'amiraabdelrahman@example.com'), 
('Abdullah Othman', '+1-555-555-5557', 'abdullahothman@example.com'), 
('Ahmed Saeed', '+1-555-555-5558', 'ahmedsaeed@example.com'), 
('Saleh Abdelhamid', '+1-555-555-5559', 'salehabdelhamid@example.com'), 
('Fatima Ali', '+1-555-555-5560', 'fatimaali@example.com'), 
('Omar Hasan', '+1-555-555-5561', 'omarhasan@example.com'), 
('Aisha Ahmed', '+1-555-555-5562', 'aishaahmed@example.com'), 
('Karim Hassan', '+1-555-555-5563', 'karimhassan@example.com')]

for word in contacts:
  print('\n'+'-'*40+'\n')
  name = f'Name: {word[0]}'
  print(name)
  phone_num = f'Phone number: {word[1]}'
  print(phone_num)
  mail = f'Mail: {word[2]}'
  print(mail)
  print('\n'+'-'*40+'\n')
      
###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n2. Make a program that produce the following output.\n''')

grocery_names = ["apple", "banana", "orange", "grapes", 
"tomato", "potato", "milk", "bread", "butter"]
grocery_prices = [0.99, 0.5, 0.75, 2.99, 1.49, 0.99, 3.99, 
2.49, 4.99]

kuitti = zip(grocery_names, grocery_prices)

print('Grocery List:')
print('Item\t\tPrices\n'+'-'*40)

for i in list(kuitti):
  print(f'{i[0]}      {i[1]}')


###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n3. Make the following program.\n''')

contacts3 = [
    ("Mohamed Gouda", "+1-555-555-5555", "mohamedgouda@example.com"),
    ("Amira Abdelrahman", "+1-555-555-5556", "amiraabdelrahman@example.com"),
    ("Abdullah Othman", "+1-555-555-5557", "abdullahothman@example.com"),
    ("Ahmed Saeed", "+1-555-555-5558", "ahmedsaeed@example.com"),
    ("Saleh Abdelhamid", "+1-555-555-5559", "salehabdelhamid@example.com"),
    ("Fatima Ali", "+1-555-555-5560", "fatimaali@example.com"),
    ("Omar Hasan", "+1-555-555-5561", "omarhasan@example.com"),
    ("Aisha Ahmed", "+1-555-555-5562", "aishaahmed@example.com"),
    ("Karim Hassan", "+1-555-555-5563", "karimhassan@example.com")
]

while True:
    print("\nWelcome to the phonebook application!")
    print('1. Add a contact.')
    print("2. Update a contact")
    print('3. Search for a contact')
    print('4. Quit')

    choice = input("\nEnter your choice: ")

    if choice == '1':
        add_name = input("Enter name: ").title()
        add_phone = input("Enter phone: ")
        add_email = input("Enter email: ").lower()

        contacts3.append((add_name, add_phone, add_email))
        print("Contact added successfully.\n")
        print("-" * 40 + '\n')

    elif choice == '2':
        say_name = input("Enter the name of the contact you want to update: ")
        found = False
        for i in range(len(contacts3)):
            if contacts3[i][0].lower() == say_name.lower():
                found = True
                contact_index = i
                break

        if found:
            print("-" * 40 + '\n')
            up_phone = input("Enter new phone number: ")
            up_email = input("Enter new email: ").lower()
            updated_contact = list(contacts3[contact_index])
            updated_contact[1] = up_phone
            updated_contact[2] = up_email
            contacts3[contact_index] = tuple(updated_contact)
            print("Contact updated successfully.")
            print('\n' + '-' * 35 + '\n')
        else:
            print("The name not found.")
            print("-" * 40 + '\n')

    elif choice == '3':
        search_name = input("Enter the name of the contact you want to search: ")
        found_S = False
        for contact in contacts3:
            if contact[0].lower() == search_name.lower():
                found_S = True
                print("-" * 40 + '\n')
                print(f"Name: {contact[0]}")
                print(f"Phone num: {contact[1]}")
                print(f"Email: {contact[2]}")
                print("-" * 40 + '\n')
                break

        if not found_S:
            print("Name not found.")
            print("-" * 40 + '\n')

    elif choice == '4':
        print("Thank you for using our app!")
        break

    else:
        print("Invalid choice. Please enter a number between 1 and 4.")
        print("-" * 40 + '\n')

                        

###---------------------------4----------------------###
###---------------------------4----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n4. Make a program that print contacts info in the 
following form.\n''')


countries4 = [
('Palestine', 'Al-Quds', 'Asia', 'Arabic', 5000000), 
('Algeria', 'Algiers', 'Africa', 'Arabic', 42000000), 
('Bahrain', 'Manama', 'Asia', 'Arabic', 1700000), 
('Comoros', 'Moroni', 'Africa', 'Arabic', 800000), 
('Djibouti', 'Djibouti', 'Africa', 'Arabic', 900000), 
('Egypt', 'Cairo', 'Africa', 'Arabic', 100000000), 
('Iraq', 'Baghdad', 'Asia', 'Arabic', 40000000), 
('Jordan', 'Amman', 'Asia', 'Arabic', 10000000), 
('Kuwait', 'Kuwait City', 'Asia', 'Arabic', 4000000), 
('Lebanon', 'Beirut', 'Asia', 'Arabic', 6000000), 
('Libya', 'Tripoli', 'Africa', 'Arabic', 7000000), 
('Morocco', 'Rabat', 'Africa', 'Arabic', 35000000), 
('Oman', 'Muscat', 'Asia', 'Arabic', 5000000), 
('Qatar', 'Doha', 'Asia', 'Arabic', 2700000), 
('Saudi Arabia', 'Riyadh', 'Asia', 'Arabic', 34000000), 
('Sudan', 'Khartoum', 'Africa', 'Arabic', 43000000), 
('Syria', 'Damascus', 'Asia', 'Arabic', 17000000), 
('Tunisia', 'Tunis', 'Africa', 'Arabic', 11000000), 
('United Arab Emirates', 'Abu Dhabi', 'Asia', 'Arabic', 10000000), 
('Yemen', "Sana'a", 'Asia', 'Arabic', 29000000), 
('Indonesia', 'Jakarta', 'Asia', 'Indonesian', 2700000000), 
('Pakistan', 'Islamabad', 'Asia', 'Urdu', 2200000000), 
('Bangladesh', 'Dhaka', 'Asia', 'Bengali', 1600000000), 
('Turkey', 'Ankara', 'Europe/Asia', 'Turkish', 80000000), 
('Iran', 'Tehran', 'Asia', 'Persian', 83000000), 
('Malaysia', 'Kuala Lumpur', 'Asia', 'Malaysian', 32000000), 
('Nigeria', 'Abuja', 'Africa', 'English', 200000000), 
('Ethiopia', 'Addis Ababa', 'Africa', 'Amharic', 110000000), 
('Albania', 'Tirana', 'Europe', 'Albanian', 2877797), 
('Andorra', 'Andorra la Vella', 'Europe', 'Catalan', 77006), 
('Austria', 'Vienna', 'Europe', 'German', 8955102), 
('Belarus', 'Minsk', 'Europe', 'Belarusian', 9449323), 
('Belgium', 'Brussels', 'Europe', 'Dutch, French, German', 11519193), 
('Bosnia and Herzegovina', 'Sarajevo', 'Europe', 'Bosnian, Serbian, Croatian', 3280819), 
('Bulgaria', 'Sofia', 'Europe', 'Bulgarian', 6948445), 
('Croatia', 'Zagreb', 'Europe', 'Croatian', 4105267), 
('Cyprus', 'Nicosia', 'Europe', 'Greek, Turkish', 1189265), 
('Czech Republic', 'Prague', 'Europe', 'Czech', 10618303), 
('Denmark', 'Copenhagen', 'Europe', 'Danish', 5792202), 
('Estonia', 'Tallinn', 'Europe', 'Estonian', 1324333), 
('Finland', 'Helsinki', 'Europe', 'Finnish, Swedish', 5540720), 
('France', 'Paris', 'Europe', 'French', 67102172), 
('Germany', 'Berlin', 'Europe', 'German', 82979224), 
('Greece', 'Athens', 'Europe', 'Greek', 10423054), 
('Hungary', 'Budapest', 'Europe', 'Hungarian', 9769526), 
('Iceland', 'Reykjavik', 'Europe', 'Icelandic', 341243), 
('Ireland', 'Dublin', 'Europe', 'English, Irish', 4761657), 
('Italy', 'Rome', 'Europe', 'Italian', 60461826), 
('Kosovo', 'Pristina', 'Europe', 'Albanian, Serbian', 1800000), 
('Latvia', 'Riga', 'Europe', 'Latvian', 1886198), 
('Liechtenstein', 'Vaduz', 'Europe', 'German', 38375), 
('Lithuania', 'Vilnius', 'Europe', 'Lithuanian', 2722289), 
('Luxembourg', 'Luxembourg', 'Europe', 'Luxembourgish, French, German', 625978), 
('Malta', 'Valletta', 'Europe', 'Maltese, English', 514000), 
('Moldova', 'Chisinau', 'Europe', 'Romanian', 2883300), 
('Monaco', 'Monaco', 'Europe', 'French', 39242), 
('Montenegro', 'Podgorica', 'Europe', 'Montenegrin', 621810), 
('Netherlands', 'Amsterdam', 'Europe', 'Dutch', 17231017), 
('North Macedonia', 'Skopje', 'Europe', 'Macedonian', 2083374), 
('Canada', 'Ottawa', 'North America', 'English, French', 38550000), 
('United States', 'Washington, D.C.', 'North America', 'English', 329000000), 
('Mexico', 'Mexico City', 'North America', 'Spanish', 130750000), 
('Brazil', 'Brasília', 'South America', 'Portuguese', 211200000), 
('Argentina', 'Buenos Aires', 'South America', 'Spanish', 44480000),
('Colombia', 'Bogotá', 'South America', 'Spanish', 50370000), 
('Peru', 'Lima', 'South America', 'Spanish', 32160000), 
('Venezuela', 'Caracas', 'South America', 'Spanish', 28200000)]


country = None

capital = input("Enter a country name or capital to search: ").capitalize()

for country_lest in countries4:
      if (capital == country_lest[0]) or (capital == country_lest[1]):
            country = country_lest
            break
      
if country:
      print("\nHere are the results:")
      print('\n' + '-'*35 + '\n')
      print(f"Country: {country[0]}")
      print(f"Capital: {country[1]}")
      print(f"Continent: {country[2]}")
      print(f"Language: {country[3]}")
      print(f"Population: {country[4]}")
else:
      print(f"Sorry the capital {capital} not found!!")