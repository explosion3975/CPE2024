total = int(input())
for i in range(total):
    list1 = input().split(" ")
    list1 = [eval(i) for i in list1]
    if list1[1] == 0:
        print("0.0000")
        continue
    print("{:.4f}".format((((1 - list1[1]) ** (list1[2] - 1)) * list1[1]) / ( 1 - ((1 - list1[1]) ** list1[0]))))