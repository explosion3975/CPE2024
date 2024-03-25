total = int(input())
for time in range(total):
    print(time)
    str1 = input()
    str2 = input()
    num1 = 0
    num2 = 0
    num = 1
    
    for i in range(len(str1) - 1,-1,-1):
        if str1[i] == '1':
            num1 += num
        num *= 2
        # print(num1)
        
    num = 1
    
    for i in range(len(str2) - 1,-1,-1):
        if str2[i] == '1':
            num2 += num
        num *= 2
        
    min_num = min(num1, num2)
    
    gcd = 1
    flag = True
    
    for i in range(2, min_num + 1):
        if num1 % i == 0 and num2 % i == 0:
            if gcd != 1:
                flag = False
                break
            gcd = i
            
    # print(num1,num2,gcd)
    if (flag and gcd != 1):
        print("Pair #{}: All you need is love!".format(time + 1))
    else:
        print("Pair #{}: Love is not all you need!".format(time + 1))
