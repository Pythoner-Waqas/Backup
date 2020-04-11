#if user enter 7531, 
#it displays 7,5,3,1 separately. 

number = int(input("Please enter 4 digit integer "))

fourth_int = number%10
number = int(number/10)
third_int = number%10
number = int(number/10)
second_int = number%10
number = int(number/10)
first_int = number

print (first_int, "," , second_int, "," , third_int , "," , fourth_int)