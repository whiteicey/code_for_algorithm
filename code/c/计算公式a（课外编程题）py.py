sum=1
jie=1
n=int(input())
for i in range(1,n+1):
    jie=jie*i;
    m=1/jie;
    round(m,10)
    sum+=m;
print(round(sum,10))
