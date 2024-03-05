total = int(input())
list1 = []
list_month = [31,28,31,30,31,30,31,31,30,31,30,31]
list_week = ["Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"]
for i in range(total):
    list1.append(input())
for i in list1:
    list2 = i.split(" ")
    list2 = [int(list2[0]),int(list2[1])]
    num = list2[1]
    if list2[0] != 1:
        for ii in range((list2[0] - 1)):
            num += list_month[ii]
    print(list_week[num % 7])