from math import sqrt

case = int(input())

def prime(n):
    if n == 1:
        return False
    for i in range(2,int(sqrt(n)+1)):
        if n%i==0:
            return False
    return True
                   

for i in range(0,case):
    prime_num = int(input())
    for i in range(int(prime_num/2), prime_num):
        if prime(i):
            if prime(prime_num-i):
                print(prime_num-i,i)
                break
        
            
