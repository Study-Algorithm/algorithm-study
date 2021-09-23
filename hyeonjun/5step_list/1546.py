cnt=int(input())

ans=[]
result=0

ans=list(map(int, input().split()))

Max=max(ans)
for i in range(0,cnt):
    ans[i]=ans[i]/Max*100

for i in range(0, cnt):
    result+=ans[i]
result/=cnt
print(result)
