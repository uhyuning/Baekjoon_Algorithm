words = input().upper() #upper 함수로 문자열 모두 대문자로 변환
unique_words = list(set(words)) # set 함수로 입력받은 문자열에서 중복값을 제거

cnt_list = []

for x in unique_words :
    cnt = words.count(x) # count 함수로 특정 문자 갯수 카운트
    cnt_list.append(cnt) # 카운트한 갯수를 리스트에 append

if cnt_list.count(max(cnt_list)) > 1 : #cnt_list에서 max값 갯수가 2개 이상이면
    print('?') 
else :
    max_index = cnt_list.index(max(cnt_list)) # index 함수로 count 숫자 최대값 위치 찾기
    print(unique_words[max_index])