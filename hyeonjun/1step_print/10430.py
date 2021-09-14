A,B,C=map(int, input("").split())
d=(A+B)%C
e=((A%C) + (B%C))%C
f= (A*B)%C
g= ((A%C) * (B%C))%C
print(d)
print(e)
print(f)
print(g)