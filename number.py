# Write a program numbers.cpp that defines a function
# nextPrime(n)
# If n is divisible by d, the function should return true, otherwise return false.
# then print out the next prime number

# def isDivisibleBy(n, m):

#     if  m == 0:
#         return False
    
#     if n % m == 0:
#         return True
    
#     else:
#         return False
    
def isPrime(n):
    if n <= 1:
        return True
 
    for i in range (2 , n):
        if (n % i == 0):
            return False
 
    return True

def nextPrime(n):
    prime = n + 1

    while not isPrime(prime):
        prime = prime + 1

    return prime
    

def main():

    num_1 = int(input("Enter the first number: "))
    # num_2 = int(input("Enter the second number: "))

    print(nextPrime(num_1))

main()


