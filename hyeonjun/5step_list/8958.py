cnt=int(input())

for i in range(0,cnt):
    a=list(input())
    Len=len(a)
    answer=[]
    Add=0
    for j in range(0, Len):
        
        if(a[j]=='X'):
            answer.append(0)
            Add=0
        else:
            Add+=1
            answer.append(Add)
    result=0
    for j in range(0,Len):
        result+=answer[j]
    print(result)

