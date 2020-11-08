ans, ans2 = input("enter 2 numbers").split()

if ans > ans2:
    print(ans, "is bigger than", ans2)
elif ans == ans2:
    print(ans, "is equal to", ans2)
else:
    print(ans, "is smaller than", ans2)
