a=(input().split(" "))
a[0]=int(a[0])
a[1]=int(a[1])
s=[]
c=1
f=0
for i in range(a[0]):
    b=input()
    s.append(b)
for i in range(a[0]-1):
    if s[i]==s[i+1]:
        c=c+1
        if c==a[1]:
            f=1
    else:
        c=1
if f==0:
    print("no")
else:
    print("yes")
