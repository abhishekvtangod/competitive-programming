n = int(input())
power = list(map(int,input().split()))
cost = list(map(int,input().split()))
Z = [(x,y) for y,x in reversed(sorted(zip(cost,power)))]
dict={}
r=0
for i,j in Z:
	if i not in dict:
		dict[i]=1
	else:
	    k=i
	    print(k,end=' ')
	    while(k in dict):
	        k+=1
	    dict[k]=1
	    print(k)
	    r+=j*(k-i)
print(r)