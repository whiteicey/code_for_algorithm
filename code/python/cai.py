import random
secret=random.randint(1,10)
number=input("猜")
guess=int (number)
while guess!=secret:
    number=input("again")
    guess=int(number)
    if guess == secret:
        print("yes")
    else:
        if guess<secret:
            print("little")
        else:
            print("bigger")
print("over")
