def reverse_number(num):
    l = []
    num_to_list = list(map(int, str(num)))
    for i in num_to_list:
        l.append(str(i))
    l.reverse()
    print (''.join(l))
num = int(input("Enter any positive integer!"))
reverse_number(num)
