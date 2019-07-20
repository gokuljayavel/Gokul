n,k=map(int,input().split(" "))
arr=list(map(int,input().split(" ")))
sor=[[abs(i-k),i]for i in arr]
sor=sorted(sor)
sor=sor[1:]
sor=[i[1] for i in sor[ :3]]
print(*sor)
