import random
import string
a=int(input("Enter length of Password:"))

char = string.ascii_letters + string.digits + string.punctuation
passw = ''.join(random.choice(char) for i in range(a))

print("The Password generated randomly is:", passw)