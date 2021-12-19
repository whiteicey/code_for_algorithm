a=input()
alen=len(a)
if alen!=5:
    print("error")
else:
    if (a[0]==a[4] and a[1]==a[3]):
        print("YES")
    else:
        print("NO")
