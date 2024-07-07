# Get user input for height in cm and weight in kg
enter_height = float(input("Enter height in cm: "))
enter_weight = float(input("Enter weight in kg: "))

print("-" * 40)

# Convert height from cm to meters
height_m = enter_height / 100

# Calculate BMI
BMI = enter_weight / (height_m ** 2)
BMI = float(f'{BMI:.2f}')

# Determine the BMI category
if BMI >= 30:
    print(f"Your BMI is {BMI} which is considered as Obesity")
elif 25 <= BMI < 30:
    print(f"Your BMI is {BMI} which is considered as Overweight")
elif 18.5 <= BMI < 25:
    print(f"Your BMI is {BMI} which is considered as Normal weight")
elif BMI < 18.5:
    print(f"Your BMI is {BMI} which is considered as Underweight")
else:
    print("Try again!!")

### -------------------------------------------------------------###
### -------------------------------------------------------------###

# Define sales categories
sales_70 = ['070', '170', '270', '370', '470']
sales_50 = ['050', '150', '250', '350', '450']
sales_30 = ['030', '130', '230', '330', '430']

# Get user input for item code and price
code_item = input("Enter the code of the item: ")  # Keep as string for comparison
price_item = float(input("Enter the price of the item: "))

# Calculate final price after discount
if code_item in sales_70:
    discount = 70
    final_price = price_item * (1 - discount / 100)
    print(f"The final price of item (code-{code_item}) after {discount}% sale is {final_price:.2f}€")

elif code_item in sales_50:
    discount = 50
    final_price = price_item * (1 - discount / 100)
    print(f"The final price of item (code-{code_item}) after {discount}% sale is {final_price:.2f}€")

elif code_item in sales_30:
    discount = 30
    final_price = price_item * (1 - discount / 100)
    print(f"The final price of item (code-{code_item}) after {discount}% sale is {final_price:.2f}€")

else:
    print(f"No sales on this item. The final price of item (code-{code_item}) is {price_item:.2f}€")


### -------------------------------------------------------------###
### -------------------------------------------------------------###


what_degree = int(input("Enter the degtee in celsius: "))

extremely_hot = \
"""
When the degree is 40 or more
We could say that the weather is extremely hot 🔥🔥♨
we should avoid direct exposure to The Sun ☀☀
We should also remember to drink a lot of water 💦
"""

very_hot = \
"""
When the degree is 30 or more
We could say that the weather is very hot 🔥♨
we should be careful about direct exposure to The Sun ☀
We should also remember to drink a lot of water 💦
"""

moderate = \
"""When the degree is between 20 and 30
We could say that we have moderate or good weather 🌞🌞
We should not go with too heavy nor too light clothes 👕
"""

cold = """When the degree is between 10 and 20
We could say that we have cold weather ❄❄
We should not go with pretty heavy clothes 👕
"""

very_cold = \
"""When the degree is between 0 and 10
We could say that we have very cold weather ❄❄❄
We should go with pretty heavy clothes 👕
"""

extremely_cold = \
"""When the degree is less than 0
We could say that we have extremely cold weather ❄🧊🧊☃
We should avoid getting out as possible 🧊🧊
We should go with really heavy clothes 👕
Never forget your Heavy Jacket 🧥 wheny you are going out 🧊�
"""

if what_degree > 60 or what_degree < -40:
  print("Enter a degree (-40) - 60: celsius.")
elif what_degree > 40:
  print(extremely_hot)
elif what_degree <= 40 and what_degree >30:
  print(very_hot)
elif what_degree <= 30 and what_degree >20:
  print(moderate)
elif what_degree <= 20 and what_degree >10:
  print(cold)
elif what_degree <= 10 and what_degree >0:
  print(very_cold)
else:
  print(extremely_cold)
