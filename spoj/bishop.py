while(1):
	try:
		x = int(input())
		if(x==1):
			print(1)
		elif x==0:
			print(0)
		else:
			print(x*2-2)
	except:
		break
