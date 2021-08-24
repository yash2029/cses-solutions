def toh(n,a,b,c):
	if(n > 0):
		toh(n-1,a,c,b)
		print(a,c)
		toh(n-1,b,a,c)


n = int(input())

a = 1
for i in range(2,n+1):
	a = a + 1 + a

print(a)
toh(n,1,2,3)