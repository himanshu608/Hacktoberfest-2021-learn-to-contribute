n = int(input("Enter a number:"))
def Fibonacci(n): 
    if n<0: 
        print("Incorrect input") 
 
    elif n==0: 
        return (0) 

    elif n==1: 
        return (1)
    else: 
        return (Fibonacci(n-1)+Fibonacci(n-2)) 
print(str(n)+"th Fibonacci number is:"+ str(Fibonacci(n))) 
