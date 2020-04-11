#this program displays the sum of squares of integers from 1 to n

n = int(input("enter the integer you want to find sum upto "))

result = 0
for i in range(1,n+1,1):
    square = i*i
    result += square

print ("sum is ", result)
