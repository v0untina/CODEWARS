def digital_root(numbers):
    list=[]
    while numbers>9:
        for number in str(numbers):
            list.append(int(number))
        numbers=sum(list)
        list.clear()
    return numbers
