

def binpow(a,b,m):
    res=1
    while b>0:
        if b%2==1:
            res=(res*a)%m
        a=(a*a)%m
        b=b//2
    return res

m=1000000007
a=int(input())
print(binpow(a,m-2,m))
p=(2*500000004)%m
print(p)
    




