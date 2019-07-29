r=int(input())
s=list(map(int,input().split()))
a1=0
v=[]
for i in range(0,x):
	if(y[i]==i):
		temp=y[i]
		a1=1
		v.append(temp)
		v=sorted(v)
print(*v)
if(a1==0):
	print(-1)
