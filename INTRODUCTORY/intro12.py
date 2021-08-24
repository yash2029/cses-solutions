from itertools import permutations

s = str(input())
d = dict()
for ch in s:
	if ch in d.keys():
		d[ch] += 1
	else:
		d[ch] = 1
num_odd = 0
odd_char = ''
for ch in d.keys():
	if d[ch]%2 != 0:
		num_odd+=1
		odd_char = ch

if num_odd > 1:
	print('NO SOLUTION')
else:
	for ch in d.keys():
		if d[ch] %2 == 0:
			for j in range(int(d[ch]/2)):
				print(ch,end='')
	if num_odd > 0:
		for j in range(d[odd_char]):
			print(odd_char,end='')
	tmp = list(d.keys())
	for ch in tmp[::-1]:
		if d[ch] %2 == 0:
			for j in range(int(d[ch]/2)):
				print(ch,end='')
