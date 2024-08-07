###---------------------------1----------------------###
###---------------------------1----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n1. Print the following information in the following 
format.\n''')

countries_and_capitals = [
("Afghanistan", "Kabul"),
("Albania", "Tirana"),
("Algeria", "Algiers"),
("Andorra", "Andorra la Vella"),
("Angola", "Luanda"),
("Antigua and Barbuda", "Saint John's"),
("Argentina", "Buenos Aires"),
("Armenia", "Yerevan"),
("Australia", "Canberra"),
("Austria", "Vienna"),
("Azerbaijan", "Baku"),
("Bahamas", "Nassau"),
("Bahrain", "Manama"),
("Bangladesh", "Dhaka")]

for index, (country, capital) in enumerate(countries_and_capitals):
      print(f"{index+1}. {country}: {capital}")

###---------------------------2----------------------###
###---------------------------2----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n2. Using Enumerate make all the sentences in the list 
upper case and replace spaces with dashes.\n''')

sentences = ['Hello from Codezilla', 'Python Course is awesome', 
             'I enjoy learning Python with Codezilla']


for i, word in enumerate(sentences):
      # Replace spaces with dashes and convert to uppercase
      sentences[i] = sentences[i].replace(" ", "-").upper()
      # Print the modified list of words
      print("The modified list of sentences is:")
      print(sentences)
      break

###---------------------------3----------------------###
###---------------------------3----------------------###
print('\n\n' + '#-'*35 +
      '''\n\n3. Print the following information in the following 
format.\n''')

books = [
("The 7 Habits of Highly Effective People", "Stephen R. Covey"),
("How to Win Friends and Influence People", "Dale Carnegie"),
("Atomic Habits", "James Clear"),
("The 4-Hour Work Week", "Tim Ferriss"),
("Deep Work", "Cal Newport"),
("So Good They Can't Ignore You", "Cal Newport"),
("Digital Minimalism", "Cal Newport"),]

for index, (name, author) in enumerate(books):
      print(f"{index+1}. {name} - Author: {author}")