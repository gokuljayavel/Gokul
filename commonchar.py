n=int(input())
arr=[]
for j in range(0,n):
 s=input()
 arr.append(s)
ans=[]
for j in zip(*arr):
    if(j.count(j[0])==len(j)):
        ans.append(j[0])
    else:
     break
print(''.join(ans))
