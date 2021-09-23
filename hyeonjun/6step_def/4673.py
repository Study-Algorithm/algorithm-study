def add_round(a):
    result=a
    while(a>10):
        mod=a%10
        result+=mod
        a=a//10
    if(a==10):
        return result+1        
    result+=a
    return result

for i in range(1, 10001):
    answer=1
    for j in range(1,i):
        if(i==add_round(j)):
            answer=0
    if(answer==1):
        print(i)
