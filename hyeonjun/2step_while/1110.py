a=int(input())

if(a<10):
    a*=10
answer=0
cnt=1
div=a//10
mod=a%10
add=div+mod
add%=10
answer=mod*10+add
while answer!=a:
    div=answer//10
    mod=answer%10
    add=div+mod
    add%=10
    answer=mod*10+add
    cnt+=1
print(cnt)