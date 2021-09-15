import sys

cnt=int(input())
for a in range(0,cnt):
    b, c=map(int, sys.stdin.readline().split())
    d=b+c
    print(d)