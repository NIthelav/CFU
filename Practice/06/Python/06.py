import math

a = int(input("Введите a = "))
b = int(input("Введите b = "))
c = int(input("Введите c = "))

if a == 0 and b == 0:
    print("x =", -c)
elif a == 0:
    print("x =", -c/b)
elif c == 0:
    print(f"x1 = 0, x2 = {-b/a}")
elif b == 0:
    try:
        print(f"x1 = {math.sqrt(-c/a)}, x2 = {-math.sqrt(-c/a)}", )
    except ValueError:
        print("Нет корней среди действительных чисел (отрицательное подкоренное выражение)")
else:
    d = b * b - 4 * a * c
    if d < 0:
        print(f"Нет корней среди действительных чисел ( d == {d})")
    elif d == 0:
        print(f"x = {-b / (2 * a)}")
    else:
        print(f"x1 = {(-b + math.sqrt(d)) / (2 * a)}, x2 = {(-b - math.sqrt(d)) / (2 * a)}")