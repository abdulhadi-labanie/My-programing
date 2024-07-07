print("very tall > 200")
print("180 < tall < 200")
print("160 < normal < 180")
print("150 < short < 160")
print("very short < 150\n")

print("It is the time to see height different.")
tool = float(input("Enter your height in cm: "))

print("-"*35)

if tool > 200:
  print(f"{tool} cm is considered vert tall")
elif tool >= 180 and tool <= 200:
  print(f"{tool} cm is considered tall")
elif tool >= 160 and tool < 180:
  print(f"{tool} cm is considered normal")
elif tool >= 150 and tool < 160:
  print(f"{tool} cm is considered short")
else:
  print(f"{tool} cm is considered very short")

###----------------------------------------------------------------###
###----------------------------------------------------------------###

print("It is the time to see if we could do better.")
print("-" * 35)

num = float(input("Enter the number: "))
answer = input(f"{num} is even or odd?\n").lower()

if (answer == 'even' and num%2 == 0) or (answer == 'odd' and num%2 != 0):
    print("Bravooo!!!!")
else:
    print("No, let's try again!")
