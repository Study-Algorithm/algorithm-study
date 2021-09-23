a1=int(input())
a2=int(input())
a3=int(input())

Mul=a1*a2*a3

result=[0,0,0,0,0,0,0,0,0,0]

while(Mul>=10):
    
    mod=Mul%10
    result[mod]+=1
    Mul//=10
result[Mul]+=1
for i in range(0,10):
    print(result[i])
