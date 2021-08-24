def swap(arr,i,j):
	temp = arr[i]
	arr[i] = arr[j]
	arr[j] = temp

def bubbleSort(arr,n):
	for i in range(0,n-1):
		for j in range(0,n-i-1):
			if arr[j] > arr[j+1]:
				swap(arr,j,j+1)
	return arr

arr = list(map(lambda x: int(x), input().split(' ')))
print(bubbleSort(arr,len(arr)))
