import sys

cnt=int(input())
for a in range(1,cnt+1):
    b, c=map(int, sys.stdin.readline().split())
    d=b+c
    print("Case #{}: {}".format(a, d))