while True:
    try:
        sum1 = 0
        sum2 = 0
        num = input()
        if num == "0":
            break
        flag = True
        for i in num:
            if flag:
                flag = not flag
                sum1 += int(i)
            else:
                flag = not flag
                sum2 += int(i)
        if abs(sum1 - sum2) % 11 == 0:
            print(num,"is a multiple of 11.")
        else:
            print(num,"is not a multiple of 11.")
    except EOFError:
        break