n = int(input())
arr = list(map(lambda x: int(x),input().split(' ')))
s = set()

for i in range(n):
	s.add(arr[i])

print(len(s))