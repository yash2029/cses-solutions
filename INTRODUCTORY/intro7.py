n = int(input())

for k in range(1,n+1):
	sq = k*k
	cu = k*k*k
	a = int((sq*sq - sq)/2)
	b = 4*(k-1)*(k-2)
	print(a-b)