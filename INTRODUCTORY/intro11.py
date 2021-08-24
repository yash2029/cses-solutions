#arr = list(map(lambda x: int(x), input().split(' ')))
t = int(input())
while(t):
	t-=1
	s = str(input())
	a = int(s.split(' ')[0])
	b = int(s.split(' ')[1])
	if a > 2*b or b > 2*a:
		print('NO')
		continue
	if (a+b)%3 == 0:
		print('YES')
	else:
		print('NO')
