print('Hello world')
print('Aliman lololo')
n = int(input())
cnt = 0
def isPrime(ll n):
    if n < 2:
        return False
    for i in range(2, sqrt(n)):
        if n % i == 0:
            return False
    return True


