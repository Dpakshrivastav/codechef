t = int(input())
l = 0
c = []
for i in range(0, t):
	n, k = int(input().split)
	k = int(input())
	a = []
	for j in range(0, n):
		x = int(input())
		a.append(x)
	a.sort(reverse=True)
	count = 0
	d = a[k-1]
	for j in range(0, n):
		if a[j] == d or a[j] > d :
			count=count+1
	c.append(count)
	l = l+1

for i in range(0, t):
	print(c[i])
