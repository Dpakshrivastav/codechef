t = int(input())
h = [2010, 2015, 2016, 2017, 2019]
flag = []
for i in range(0, t):
	k = int(input())
	for j in h:
		if k==j:
			flag.insert(i, True)
			break
		else:
			flag.insert(i, False)

for i in range(0, t):
	if flag[i]:
		print('HOSTED')
	else:
		print('NOT HOSTED')