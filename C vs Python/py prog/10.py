#this code gets a grade from user and displays a description accordingly

grade = input("input grade from A to F ")

d = {'a':'Excellent',
     'b':"Very Good",
     'c':"Good",
     'd': "Poor",
     'f':"Fail",
     'A':'Excellent',
     'B':"Very Good",
     'C':"Good",
     'D': "Poor",
     'F':"Fail"}
default = "Sorry, you did not enter from A to D or F"

d.get(grade,default)

