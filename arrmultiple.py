n=int(input())
arr=list(map(int,input().split()))
res=[]
for i in range(n):
	s=1
	for j in range(n):
		if i!=j:
			s*=arr[j]
	res.append(s)
for i in res:
	print(i,end=" ")
