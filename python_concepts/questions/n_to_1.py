n=int(input("Enter A Number:  "))
if (n > 0):
    for i in range(n, 0, -1):
        print(i, end=" ")
else:
    print("Please enter a positive integer.")