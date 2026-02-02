def Fact(n):
    if(n==0):
        return 1
    return n*Fact(n-1) 

num=int(input("Enter the Value : "))
print(f"Factorial of {num} is {Fact(num)}")