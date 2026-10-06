 #WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 6?
#Q2.WRITE A PROGRAM TO DISPLAY "HELLO" IF A NUMBER ENTERED BY USER IS MULTIPLE OF FIVE OTHER WISE PRINT ''BYE"?
def check_divisibility(number):
    if (number % 6 ==0):
        print(f"Number {number} is Divisible by 6")
    else:
        print(f"Number {number} is Not Divisible by 6")
    if (number % 5 ==0):
        print("HELLO!!")
    else:
        print("BYE!!")

print("Please Enter A Number To Check Whether It Is Multiple Of 5 Or Not")
print("Please Enter A Number To Check Whether It Is Divisible By 6 Or Not")
number = int(input("Enter An number "))
check_divisibility(number)