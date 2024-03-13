while True:
    try:
        n = input()
        num = 0
        max_n = "0"
        flag = True
        for i in n:
            if i == '-':
                continue
            if '0' <= i <= '9':
                max_n = max(i,max_n)
                num += int(i)
            elif 'A' <= i <= 'Z' :
                max_n = max(i,max_n)
                num += ord(i) - ord('A') + 10
            elif 'a' <= i <= 'z' :
                max_n = max(i,max_n)
                num += ord(i) - ord('a') + 36
        # print(max_n)
        if '0' <= max_n <= '9':
            max_n = int(max_n)
        elif 'A' <= max_n <= 'Z' :
            max_n = ord(max_n) - ord('A') + 10
        elif 'a' <= max_n <= 'z' :
            max_n = ord(max_n) - ord('a') + 36
        for i in range(max_n,63):
            # print(i)
            if i == 0:
                print(2)
                flag = False
                break
            elif num % i == 0:
                flag = False
                print(i + 1)
                break
        if flag:
            # print("num:",num)
            print("such number is impossible!")
    except EOFError:
        break