while True:
    try:
        str1 = input()
        str2 = input()
        dict1 = dict()
        answer = ""
        for i in str1:
            if dict1.get(i,False):
                dict1[i] += 1
            else:
                dict1[i] = 1
        for i in str2:
            if dict1.get(i,0) != 0:
                dict1[i] -= 1
                answer += i
        list1 = list(answer)
        for i in range(len(list1) - 1, 0, -1):
            for ii in range(i):
                if list1[ii] > list1[ii + 1]:
                    tmp = list1[ii]
                    list1[ii] = list1[ii + 1]
                    list1[ii + 1] = tmp
        for i in list1:
            if i.isalpha():
                print(i,end = "")
        print()
        # print(list(answer))
    except EOFError:
        break