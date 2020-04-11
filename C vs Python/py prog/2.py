#This does the age comparison of two person by first taking age as inputs from user

waqas = float(input("Please enter the age of Waqas "))
waqar = float(input("Please enter the age of Waqar "))


if (waqas > waqar):
    print ("Waqas is older than Waqar")
elif (waqas < waqar):
    print ("Waqas is younger than Waqar")
else:
    print ("Waqas is same as Waqar")