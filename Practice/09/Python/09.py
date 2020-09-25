time1 = input("Время прибытия первого человека: ").split(':')
time2 = input("Время прибытия первого человека: ").split(':')

if int(time1[0]) == 0 and time2[0] == '23':
    time1[0] = '24'
elif int(time2[0]) == 0 and time1[0] == '23':
    time2[0] = '24'

time1 = int(time1[0]) * 60 + int(time1[1])
time2 = int(time2[0]) * 60 + int(time2[1])

if abs(time1 - time2) > 15:
    print("Встреча не состоится")
else:
    print("Встреча состоится")