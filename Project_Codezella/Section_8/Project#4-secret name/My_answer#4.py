name = input("Enter the name: ").lower()

if name.endswith('d'):
  print('You win!!')
else:
  print('Try again')

print("\n")
print('-'*40)

num = float(input("Enter a namber: "))
D_num = float(input("Enter the namber to diviton: "))
answer = input(f'Is {num} divition by {D_num}.(yes or no): ').lower()

if (num%D_num == 0 and answer == 'yes') or (num%D_num != 0 and answer == 'no'):
  print("Bravooo!!")
else:
  print('No, Try again.')