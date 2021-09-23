a=[]
for i in range(0, 9):
    a.append(int(input()))
Max=max(a)
for i in range(0, 9):
    if(Max==a[i]):
        print(Max)
        print(i+1)