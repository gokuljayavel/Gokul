x,y=input().split()
d=abs(len(x)-len(y))
for j in range(len(x)):
	if len(y)==1 and x[j] in x:
		break
	if x[j]!=b[j]:
		d+=1
print(d)
