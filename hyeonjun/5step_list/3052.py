result=[0 for i in range(0, 42)]

for i in range(0,10):
    num=int(input())
    result[num%42]+=1

count=0

for i in range(0,42):
    if(result[i]!=0):
        count+=1

print(count)