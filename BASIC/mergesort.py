def merge(a,l,m,u):
	x = []
	y = []
	for i in range(l,m+1):
		x.append(a[i])
	for j in range(m+1,u+1):
		y.append(a[j])
	i = j = 0
	k = l
	while i < len(x) and j < len(y):
		if x[i] <= y[j]:
			a[k] = x[i]
			i+=1
			k+=1
		else:
			a[k] = y[j]
			j+=1
			k+=1
	while i < len(x):
		a[k] = x[i]
		i+=1
		k+=1
	while j < len(y):
		a[k] = y[j]
		j+=1
		k+=1

def mergesort(a,l,u):
	m = int(((l+u)/2))
	if l<u:
		mergesort(a,l,m)
		mergesort(a,m+1,u)
		merge(a,l,m,u)


n = int(input())
arr = list(map(lambda x: int(x), input().split(' ')))
mergesort(arr,0,n-1)
print(arr)