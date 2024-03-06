while True:
    try:
        x = int(input())
        list1 = input().split(" ")
        list1 = [int(i) for i in list1]
        answer = 0
        list1 = list1[:-1]
        counter = len(list1)
        for i in list1:
            answer += i * counter * (x ** (counter - 1))
            counter -= 1
        print(answer)
    except EOFError:
        break