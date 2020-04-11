#This allows the user to guess a character from a to z
#do-while construct is used to allow five tries for guessing
	
letter = input("guess from a-z ")
correct = 'n'
n = 1

if correct == letter:
    print("guessed correct")

while ((n <= 5) & (correct!=letter)):
    if (correct == letter):
        print ("guessed correct")
    else:
        print("Remember that this is your " , n , " (th) chance to try ")
        letter = input("please guess ")
    n+=1
