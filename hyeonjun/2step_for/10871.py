cnt, pivot=map(int, input().split())

a=[int(x) for x in input().split()]

for b in range(0,cnt):
    if (a[b]<pivot):
        print("{} ".format(a[b]),end="")