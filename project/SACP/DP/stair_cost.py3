ip = int(input())
ip_list = [int(x) for x in input().split()]

#print(ip)
#print(ip_list)


dp = []
dp.append(ip_list[0])
dp.append(ip_list[1])

for i in range(2,ip):
	dp.append(min(dp[i-1],dp[i-2])+ip_list[i])
	
print(dp[ip-1])
