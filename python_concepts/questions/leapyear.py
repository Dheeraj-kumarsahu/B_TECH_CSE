#Q3.WRITE A PROGRAM TO CHECK WHETHER AN YEAR IS LEAP YEAR OR NOT?

Year =int(input("Enter An Year "))
if (Year%100!=0 and Year %4==0):
  print(f"Year {Year} is Leap Year")
elif(Year % 400==0):
  print(f"Year {Year} is Leap Year")
else:
  print(f"Year {Year} is Not Leap Year")