def solve(i,cur_sum,arr_sum,arr,n,ans):
	if i == n-1:
		ans = min(ans,abs(2*cur_sum-arr_sum))
		cur_sum += arr[i]
		ans = min(ans,abs(2*cur_sum-arr_sum))
		return ans
	else:
		return min(solve(i+1,cur_sum+arr[i],arr_sum,arr,n,ans),solve(i+1,cur_sum,arr_sum,arr,n,ans))


n = int(input())
arr = list(map(lambda x: int(x),input().split(' ')))
arr_sum = 0
for i in range(n):
	arr_sum+=arr[i]
ans = arr_sum
print(solve(0,0,arr_sum,arr,n,arr_sum))
