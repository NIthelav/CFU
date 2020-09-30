from math import sqrt, pow

def s_from_len():
    a = int(input("Введите длину a: "))
    b = int(input("Введите длину b: "))
    c = int(input("Введите длину c: "))

    if (a + b < c or b + c < a or a + c < b):
        print("Такого треугольника не существует")
        return

    p = (a + b + c) / 2
    s = sqrt(p * (p - a) * (p - b) * (p - c))
    print("Площадь равна =", s)

def s_from_coor():
    a1, a2 = [int(i) for i in input("Введите а1, а2: ").split(" ")]
    b1, b2 = [int(i) for i in input("Введите b1, b2: ").split(" ")]
    c1, c2 = [int(i) for i in input("Введите c1, c2: ").split(" ")]

    a = sqrt(pow((a1 - b1), 2)
            + pow((a2 - b2), 2))
    b = sqrt(pow((b1 - c1), 2)
            + pow((b2 - c2), 2))
    c = sqrt(pow((c1 - a1), 2)
            + pow((c2 - a2), 2))

    if (a + b < c or b + c < a or a + c < b):
        print("Такого треугольника не существует")
        return

    p = (a + b + c) / 2
    s = sqrt(p * (p - a) * (p - b) * (p - c))
    print("Площадь равна =", s)


path = int(input("Введите способ вычисления (0, 1): "))
if path == 0:
    s_from_len()
elif path == 1:
    s_from_coor()
else:
    print("Введите корректное значение")




