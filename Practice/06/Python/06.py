import math

a = int(input("Введите a = "))
b = int(input("Введите b = "))
c = int(input("Введите c = "))


if a == 0 and b == 0:
    print("x - Действительные числа") if c == 0 else print("Решений нет") 
elif a == 0:
    print(f"x = {-c/b}")
else:
    d = b * b - 4 * a * c
    if d < 0:
        print(f"Нет корней среди действительных чисел ( d == {d})")
    elif d == 0:
        print(f"x = {-b / (2 * a)}")
    else:
        print(f"x1 = {(-b + math.sqrt(d)) / (2 * a)}, x2 = {(-b - math.sqrt(d)) / (2 * a)}")