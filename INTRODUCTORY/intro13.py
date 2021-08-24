class node:
	def __init__(self,s):
		self.s = s
 
n = int(input())
ans = []
count = 0
queue = []
queue.append('')
 
while len(queue) != 0:
	x = queue[0]
	queue.remove(queue[0])
	i = count
	count+=1
	if len(x) == n:
		ans.append(x)
		continue
	if i == 0:
		queue.append(str(x+'0'))
		queue.append(str(x+'1'))
	elif i%2 != 0:
		queue.append(str(x+'0'))
		queue.append(str(x+'1'))
	else:
		queue.append(str(x+'1'))
		queue.append(str(x+'0'))
 
for x in ans:
	print(x)