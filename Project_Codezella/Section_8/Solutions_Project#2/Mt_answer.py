work_hours = float(input("Enter the number of hours per month: "))
rate = float(input("Enter your hourly rate: "))

if work_hours > 100:
  n_rate = 100 * rate + ((work_hours-100)*2*rate)
  print(f"You have worked {work_hours:.1f} hours this month, your salary is {n_rate:,.2f}$")
else:
  print(F"{work_hours*rate} You don't have a plus work hours in this month.")