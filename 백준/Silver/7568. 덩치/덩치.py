case = int(input())

a = [[0 for col in range(3)] for row in range(51)]



for i in range(0,case):
    w,h = input().split()
    w = int(w)
    h = int(h)

    a[i][0] = w
    a[i][1] = h
    a[i][2] = 1


for i in range(0, case):
    for j in range(0, case):
        if a[j][0]<a[i][0]:
            if a[j][1]<a[i][1]:
                a[j][2]+=1

for i in range(0, case):
    print(a[i][2], end=' ')

