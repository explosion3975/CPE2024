total = int(input())
for time in range(total):
    counter = 0
    num = int(input())
    b = "{:b}".format(num)
    hb = "{:b}".format(int(str(num),16))
    for i in b:
        if i == '1':
            counter += 1
    print(counter,end = " ")
    counter = 0
    # print(h)
    for i in hb:
        if i == '1':
            counter += 1
    print(counter)