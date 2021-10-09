A, B = map(int, input().split())

result = (str(A//B)+".")
A = (A % B) * 10

for _ in range(1000): #계속 10씩 곱해주면서 몫을 뒤에 붙여줌
    result += str(A // B)
    A = (A % B) * 10
    
print(result)