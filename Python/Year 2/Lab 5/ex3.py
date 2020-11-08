num1, num2, op = input("enter 2 numbers and an operator").split()

num1 = int(num1)
num2 = int(num2)
if op == '+':
    ans = num1 + num2
elif op == '-':
    ans = num1 - num2
elif op == '*':
    ans = num1 * num2
elif op == '/':
    ans = num1 / num2

print(ans)

