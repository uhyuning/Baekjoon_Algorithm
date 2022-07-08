N = int(input())
cnt = N

for i in range(N):
    word = input()
    for j in range(0, len(word)-1):
        if word[j] == word[j+1]:
            pass
        elif word[j] in word[j+1:]: #j+1 부터 끝까지 중복 체크
            cnt -= 1
            break

print(cnt)