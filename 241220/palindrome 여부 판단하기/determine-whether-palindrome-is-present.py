def is_palindrome(s):
    # 문자열을 뒤집어서 비교
    return s == s[::-1]

# 입력 받기
A = input().strip()

# palindrome 여부 확인
if is_palindrome(A):
    print("Yes")
else:
    print("No")