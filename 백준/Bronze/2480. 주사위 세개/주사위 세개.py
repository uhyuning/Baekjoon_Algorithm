a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)

d = [a, b, c]

if a==b:
    if b==c:
        reward = 10000+(a*1000)
    else:
        reward = 1000+(a*100)
elif a==c:
    if c==b:
        reward = 10000+(a*1000)
    else:
        reward = 1000+(a*100)
elif b==c:
    if b==a:
        reward = 10000+(b*1000)
    else:
        reward = 1000+(b*100)
else:
    reward = max(d)*100

print(reward)
