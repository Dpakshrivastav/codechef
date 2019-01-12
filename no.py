from itertools import combinations as comb
a = []
mod = 100000007
def main():
	t = int(input())
	for i in range(0, t):
		lis = list(map(int,input().split()))
		n = lis[0]
		k = lis[1]
		pro = 1
		p = []
		x = [x for x in range(1, n)]
		if k*((k+1)/2) < n:
			a = comb(x, k)
			for j in list(a):
				if(sum(j)==n):
					for l in j:
						l = l%mod
						m=l*l
						pro = ((m - l)*pro)
					p.append(pro)
					pro = 1
		max = -1
		for j in p:
			if max < j:
				max = j
		if max >= 0:
			print(max)
		else:
			print(-1)


# def C(n, step, cnt, v, k):
#     if cnt > n or step > n:
#         return
#     if cnt == n:
#         if len(tuple(v)) == k:
#         	a.append(tuple(v)) 
#         	print(v)
#         return
#     else:
#         v.append(step)
#         temp = step
#         C(n, step+1, cnt + step, v, k)
#         v.pop()
#         for j in a:
#         	if j==v:
#         		step+=1
#         C(n, step + 1, cnt, v, k)


if __name__ == '__main__':
	main()