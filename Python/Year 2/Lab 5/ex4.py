num1, num2, num3 = input("enter 3 numbers").split()

num1 = int(num1)
num2 = int(num2)
num3 = int(num3)

print(num1, num2, num3, "\n")
if num1 > num2:
    if num1 > num3:
        print(num1)
    elif num3 > num1:
        print(num3)
elif num2 > num3:
    print(num2)
elif num3 > num2:
    print(num3)

