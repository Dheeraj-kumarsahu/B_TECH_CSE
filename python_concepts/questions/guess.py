import random

def game():
    Guess = random.randint(1, 100)
    print("Welcome to the Guessing Game!")
    name = input("Enter your name: ")
    print(f"{name}, welcome to the game!")
    
    AGE = int(input("Enter your age: "))
    ATTEMPTS = 0  
    
    if AGE < 18:
        print("Sorry, you are not old enough to play this game.")
    else:
        while True:
            guessing = int(input("Choose a number between 1 and 100: "))
            ATTEMPTS += 1
            if guessing < Guess:
                print("Your guess is too low. Try again!")
            elif guessing > Guess:
                print("Your guess is too high. Try again!")
            else:
                print("Congratulations! You guessed the number correctly.")
                print(f"It took you {ATTEMPTS} attempts.")
                break  

game()
