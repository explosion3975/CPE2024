counter = 0
while True:
    try:
        total = int(input())
        list1 = input().split(" ")
        list1 = [int(i) for i in list1]
        dict1 = dict()
        counter += 1
        flag = True
        for i in range(total - 1):
            for ii in range(i + 1,total):
                if dict1.get(list1[i] + list1[ii],False):
                    flag = False
                    break
                else:
                    dict1[list1[i] + list1[ii]] = True
        if flag:
            print("Case #{}: It is a B2-Sequence.".format(counter),end = "\n\n")
        else:
            print("Case #{}: It is not a B2-Sequence.".format(counter),end = "\n\n")
        _ = input()

    except EOFError:
        break