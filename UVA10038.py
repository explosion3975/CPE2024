while True:
    try:
        dict1 = dict()
        line = input()
        list1 = line.split(" ")
        line_number = list1[0]
        list1 = list1[1:]
        flag = True
        # print(list1)
        for i in range(len(list1) - 1):
            num = abs(int(list1[i]) - int(list1[i + 1]))
            if dict1.get(num,False) or num > len(list1) or num == 0:
                flag = False
                break
            else:
                dict1[num] = True
        if flag:
            print("Jolly")
        else:
            print("Not jolly")
    except EOFError: 
        break