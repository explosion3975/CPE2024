def decode(str1):
    line1 = "qwertyuiop[]"
    line2 = "aasdfghjkl;'"
    line3 = "zxcvbnm,./"
    if str1 == " ":
        return " "
    elif str1 in line1:
        return line1[line1.index(str1) - 2]
    elif str1 in line2:
        return line2[line2.index(str1) - 2]
    else:
        return line3[line3.index(str1) - 2]
while True:
    try:
        str1 = input()
        for i in str1:
            print(decode(i.lower()),end = "")
        print()
    except EOFError:
        break