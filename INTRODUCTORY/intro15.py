from itertools import permutations

s = str(input())
s = list(s)
s.sort()
s = ''.join(s)
ans = set(permutations(s))
ans = list(ans)
ans.sort()
print(len(ans))
for s in ans:
	print(''.join(s))