_pow = int(input())

counter = 0
base = 1
while base <= _pow:
    base *= 2
    counter += 1
print(counter - 1)