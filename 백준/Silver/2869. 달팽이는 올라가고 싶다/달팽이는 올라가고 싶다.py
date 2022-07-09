import math

A, B, V = input().split()

A = int(A)
B = int(B)
V = int(V)

V-=A

Date = V/(A-B)


    
Date+=1




print(math.ceil(Date))
