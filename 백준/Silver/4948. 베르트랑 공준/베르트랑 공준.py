from math import sqrt

def prime_num(n):
    if n == 1:
        return False
    for i in range(2,int(sqrt(n)+1)):
        if n%i==0:
            return False
    return True


while(1):
    a = int(input())
    if a==0:
        break
    cnt = 0
    for i in range(a+1,a*2+1):
        if prime_num(i):
            cnt+=1
    print(cnt,sep='\n')
