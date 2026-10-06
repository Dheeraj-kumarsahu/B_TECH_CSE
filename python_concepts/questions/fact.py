import math
number=int(input("Enter a number to find its factorial: "))
factorial=math.factorial(number)
print(f"The factorial of {number} is {factorial}")
fact=1
if number < 0:
    print("Sorry, factorial does not exist for negative numbers")
elif number == 0:
    print("The factorial of 0 is 1")
else:
    for i in range(1,number + 1):
        fact = fact*i
    print(f"The factorial of {number} is {fact}")