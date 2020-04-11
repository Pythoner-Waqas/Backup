#This program calculates the factorial 

number = int(input("Please enter number to calculate factorial "))

result = 1
while (number>1):
    result *= number
    number -= 1

print ("Factorial is ", result)