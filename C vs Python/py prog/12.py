#Function to calculate the square of a number
def square(number):
    return (number*number)
  
number = int(input("Please enter the number to calculate the square "))
#Calling the function square(int number)
result = square(number)

print ("The square of ", number, " is ", result)