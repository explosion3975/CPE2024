total = int(input())
list1 = []
for i in range(total):
    list1.append(input())
dict1 = dict()
for i in list1:
    for ii in i:
        if ii.isalpha():
            if dict1.get(ii.upper(), False):
                dict1[ii.upper()] += 1
            else:
                dict1[ii.upper()] = 1
list_result = list(dict1.items())
for i in range(len(list_result) - 1, 0, -1):
    for ii in range(i):
        if list_result[ii][1] < list_result[ii + 1][1]:
            tmp = list_result[ii]
            list_result[ii] = list_result[ii + 1]
            list_result[ii + 1] = tmp
        elif list_result[ii][1] == list_result[ii + 1][1]:
            if list_result[ii][0][0] > list_result[ii + 1][0][0]:
                tmp = list_result[ii]
                list_result[ii] = list_result[ii + 1]
                list_result[ii + 1] = tmp
for i in list_result:
    print(i[0], i[1])
