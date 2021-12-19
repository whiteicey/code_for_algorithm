import math
x=float(input())
n=int(input())
cosx=1
for i in range(2,2*n+2,2):
    temp=(math.pow(x,i)*math.pow(-1,i//2))/math.factorial(i)
    cosx=cosx+temp
print(round(cosx,8))
