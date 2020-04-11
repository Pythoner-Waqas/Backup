#this program gets salary input from user and calculates and displays the net payable 
#amount after deduction according the conditions using dict instead of if-else


salary = int(input("enter salary "))

logic = int(salary / 10000)

d = {0: salary,
     1: salary-1000}
default = salary-(salary*0.07)

d.get(logic,default)
