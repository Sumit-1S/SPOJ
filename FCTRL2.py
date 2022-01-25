def solve(n):
  if(n==1):
    return n
  return n*solve(n-1)

t = int(input())
while(t>0):
	t=t-1
	n = int(input())
	print(solve(n))