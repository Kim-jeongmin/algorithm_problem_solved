fibo = list(range(10001))
n = input()
n = int(n)
     
for i in range(2, n+1):
    fibo[i] = fibo[i-1] + fibo[i-2]
    
print(fibo[n])

