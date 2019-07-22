n=int(input())
arr=list(map(int,input().split()))
r=[]
for i in range(n):
	d=arr[i:]
	r.append(sum(d))
print(max(r))
