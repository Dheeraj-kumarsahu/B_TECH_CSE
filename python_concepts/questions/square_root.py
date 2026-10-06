import math 
N=int(input("Enter a number: "))
root=math.sqrt(N)
print(f"The square root of {N} is {root}")
Y=int(input("Enter another number: "))
y=math.gcd(N,Y)
print(f"The GCD of {N} and {Y} is {y}")