operations = {
    '*': lambda a, b: a * b,
    '/': lambda a, b: a / b,
    '-': lambda a, b: a - b,
    '+': lambda a, b: a + b
}

a, opr, b = input("Введите операцию: ").split(" ")
a, b = int(a), int(b)
print(operations[opr](a, b))