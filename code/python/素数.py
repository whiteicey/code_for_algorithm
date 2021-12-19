m=int(input())
n=int(input())
i=m
for i in range(m,n):
    j=1;
    for k in range(2,i):
        if i%k==0:
            j=0;
            break;
        else:
            j=1;
    if j==1:
        print(i);
