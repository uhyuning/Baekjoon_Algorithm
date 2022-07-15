a = int(input())

for i in range(1,a+1):
    b = list(map(int, str(i)))
    c = i + sum(b)
    if c==a:
        result = i
        print(result)
        break
    if i==a:
        print(0)
