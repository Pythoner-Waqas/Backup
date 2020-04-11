#This calculates sum of even numbers for a given upper limit of integers

number = int(input("Please enter the upper limit for sum "))

n = 0
result = 0

while (n<=number):
    result+=n
    n +=2

print ("sum of upto ", number , " is ",result)
