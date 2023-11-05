def find_lowest_int(k):
    for n in range(1,100000000000):
        list1=[]
        list2=[]
        sum_digits1 = 0
        sum_digits2 = 0
        k1 = k
        k2 = k1 + 1
        k1=k1*n
        k2=k2*n
        for digit in str(k1):
            list1.append(int(digit))
            sum_digits1+=int(digit)
        for digit2 in str(k2):
            list2.append(int(digit2))
            sum_digits2 += int(digit2)
        if sorted(list1)==sorted(list2):
            return n
            break

    pass
