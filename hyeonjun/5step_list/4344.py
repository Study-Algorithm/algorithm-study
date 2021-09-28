cnt=int(input())
for b in range(0, cnt):
    a=list(map(int,input().split()))
    Add=0
    for i in range(1,a[0]+1):
        Add+=a[i]
    Add/=a[0]
    molecure=0
    for i in range(1,a[0]+1):
        if(a[i]>Add):
            molecure+=1
    print("{:0.3f}%".format(molecure/a[0]*100,3))
