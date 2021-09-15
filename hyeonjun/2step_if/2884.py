hour, min=map(int, input().split())

if(hour<1):
    if(min<45):
        hour=23
        min+=15
    else:
        min-=45
else:
    if(min<45):
        hour-=1
        min+=15
    else:
        min-=45
print("{} {}".format(hour, min))