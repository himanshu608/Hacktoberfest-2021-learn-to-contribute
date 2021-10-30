number = int(input("Enter a number: "))

sum = 0

# find the sum of the cube of each digit
t = number
while t > 0:
   digit = t % 10
   sum += digit ** 3
   t //= 10

# display the result
if number == sum:
   print(number,"is an Armstrong number")
else:
   print(number,"is not an Armstrong number")

#Let's try with for example=407(Yes),111(No)