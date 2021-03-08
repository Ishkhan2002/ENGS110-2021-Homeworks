def Is_Prime(Number):
    Check = 0
    i = 2

    while(i <= Number//2):
        if(Number % i == 0):
            Check = Check + 1
            break
        i = i + 1

    if(Check == 0 and Number != 1):
        print("%d is a prime number" %Number)
        return Number
    else:
        print("%d is not a prime number"%Number)
        return False

def main():
    Number = int(input("Please enter your number:"))
    Is_Prime(Number)

    F1 = 0
    F2 = 1
    F3 = 0
    Sum = 0

    while F3 + F1 < Number:
        F3 = F1 + F2
        Sum = Sum +F3
        F1 = F2
        F2 = F3

    if(1 <= Sum):
        OverallSum = bin(Sum + 1)[2 : ]
        print("Overall Sum is %s " %OverallSum)
    else:
        print("The input is not correct")


main()

