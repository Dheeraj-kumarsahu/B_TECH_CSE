#q1
a=1
b=9
print(a, b)
a,b=b,a
print(a,b)

#q3
import math 
def calculate(x1,x2,y1,y2):
    distance=math.sqrt((x2-x1)**2 + (y2-y1)**2)
    return distance
x1=float(input("Enter x Coordinates for (x1):- "))
x2=float(input("Enter x Coordinates for (x2):- "))
y1=float(input("Enter y Coordinates for (y1):- "))
y2=float(input("Enter y Coordinates for (y2):- "))
dist=calculate(x1,x2,y1,y2)
print(f"\nThe Distance Between Points ({x1},{y1} and {x2},{y2} is {dist:.2f} units.")
