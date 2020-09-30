from random import randint

random.seed()
number = randint(0, 100)

print("Попробуй угадать число")
flag = True
i = 0
while flag:
    guess = int(input("Введи число: "))
    if guess > number:
        print("Загаданное число меньше")
    elif guess < number:
        print("Загаданное число больше")
    else:
        print("Поздравляю! Вы угадали")
        flag = bool(int(input("Хотите сыграть еще раз? (1 - Да, 0 - Нет): ")))
        number = randint(0, 100)
        i = 0
    i += 1
    if i == 5:
        print("Вас постигла неудача.")
        flag = bool(int(input("Хотите сыграть еще раз? (1 - Да, 0 - Нет): ")))
        number = randint(0, 100)
        i = 0