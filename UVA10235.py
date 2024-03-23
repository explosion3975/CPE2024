while True:
    try:
        num = input()
        num1 = int(num)
        num2 = int(num[::-1])
        flag = False
        for i in range(2, num1 + 1):
            if num1 % i == 0 and i != num1:
                flag = True
                print(num, "is not prime.")
                break
        if flag:
            continue
        if num1 == num2:
            print(num, "is prime.")
            continue
        for i in range(2, num2 + 1):
            if num2 % i == 0 and i != num2:
                flag = True
                print(num, "is prime.")
                break
        if not flag:
            print(num, "is emirp.")
    except EOFError:
        break
