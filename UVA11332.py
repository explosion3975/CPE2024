while True:
    str1 = input()
    if str1 == "0":
        break
    while(len(str1) > 1):
        num = 0
        for i in str1:
            num += int(i)
        str1 = str(num)
    print(str1)
    