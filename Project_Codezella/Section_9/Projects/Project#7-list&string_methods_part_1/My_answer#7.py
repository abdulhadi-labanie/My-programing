# list of available vegetables
vegetables = ['broccoli', 'eggplant', 'carrot', 'cabbage', 
'cucumber', 'potato', 'garlic', 'pepper']

print("Welcame to our shop!")
kasvis = input("Enter the vegetable you wont to get: ")
print("-"*45)

vegetables_ls = ', '.join(vegetables)

if kasvis.lower() in vegetables:
  num = input("Enter the amount in kg: ")
  print(f"We will get you {num} kg of {kasvis} very soon!!")
else:
  print(f"Sorry, We just have {vegetables_ls[:-1]} and {vegetables[-1]}")