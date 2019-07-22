n = int(input())
arr = list(map(int,input().split()))
r = []
for i in range(n):
	for j in range(i+1,n+1):
		s = sum(arr[i:j])
		r.append(s)
		s = 0
for i in l:
	r.append(i)
r.sort()
print(r[-1])
