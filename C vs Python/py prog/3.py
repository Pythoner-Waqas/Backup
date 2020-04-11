#This program takes input the bill, calculates discount based on conditions,
#and then finally outputs final amount payable 

bill = float(input("Enter amount of bill "))

if (bill <= 5000):
    discount = bill*0.10
    payable = bill - discount
else:
    discount = bill*0.15
    payable = bill - discount
    
print ("Please pay " , payable)

