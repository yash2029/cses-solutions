#arr = list(map(lambda x: int(x), input().split(' ')))
def findMinDistance(start_i,start_j,end_i,end_j,visited,a,n,m):
	queue = []
	visited[start_i][start_j] = 1
	queue.append([start_i,start_j,''])
	while len(queue) != 0:
		x = queue[0]
		if x[0] == end_i and x[1] == end_j:
			break
		queue.remove(queue[0])
		i = x[0]
		j = x[1]
		if i-1 >= 0 and visited[i-1][j] == 0 and a[i-1][j] != '#':
			visited[i-1][j] = 1
			queue.append([i-1,j,str(x[2]+'U')])
		if j-1 >= 0 and visited[i][j-1] == 0 and a[i][j-1] != '#':
			visited[i][j-1] = 1
			queue.append([i,j-1,str(x[2]+'L')])
		if i+1 < n and visited[i+1][j] == 0 and a[i+1][j] != '#':
			visited[i+1][j] = 1
			queue.append([i+1,j,str(x[2]+'D')])
		if j+1 < m and visited[i][j+1] == 0 and a[i][j+1] != '#':
			visited[i][j+1] = 1
			queue.append([i,j+1,str(x[2]+'R')])

	if visited[end_i][end_j] == 1:
		print('YES')
		print(len(queue[0][2]))
		print(queue[0][2])
	else:
		print('NO')



s = str(input())
n = int(s.split(' ')[0])
m = int(s.split(' ')[1])

a = []
for i in range(n):
	s = str(input())
	a.append(s)

start_i = start_j = 0
end_i = end_j = 0
for i in range(n):
	for j in range(m):
		if a[i][j] == 'A':
			start_i = i
			start_j = j
		elif a[i][j] == 'B':
			end_i = i
			end_j = j

visited = []
for i in range(n):
	visited.append([0]*m)

findMinDistance(start_i,start_j,end_i,end_j,visited,a,n,m)
