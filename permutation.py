from itertools import permutations
str=input()
a=permutations(str)
for i in list(a):
	print("".join(i))
