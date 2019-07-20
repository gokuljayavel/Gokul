n,k=map(int,input().split(" "))
p=[]
for i in range(n):
	s=set(map(int,input().split()))
	p.append(s)
re=s.intersection(*p)
print(*re)
