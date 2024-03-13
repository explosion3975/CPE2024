while True:
    num = int(input())
    if num == 0:
        break
    b = "{:b}".format(num)
    counter = 0
    for i in b:
        if i == '1':
            counter += 1
    print("The parity of {} is {} (mod 2).".format(b, counter))