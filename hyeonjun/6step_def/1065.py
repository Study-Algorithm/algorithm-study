def sequence(a): #1이면 맞고 0이면 틀림
    if(a==1000):
        return 0
    elif(a>99):
        a1=a//100
        a%=100
        a2=a//10
        a3=a%10
        if((a3-a2)==(a2-a1)):
            return 1
        else:
            return 0
    else:
        return 1

cnt=int(input())

answer=0
for i in range(1,cnt+1):
    if(sequence(i)==1):
        answer+=1

print(answer)
