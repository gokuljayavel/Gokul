from itertools import combinations
n,k=map(int,input().split())
l=len(str(n))
ans=list(combinations(str(n),l-k))
ans=sorted(ans)
print(''.join(ans[0]))
