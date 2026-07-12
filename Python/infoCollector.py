name = input("Please enter your name: ")
age = int(input("Please enter your age: "))
if age < 1 or age > 99 :
    print ("You entred an invalid information please retry \n")
    exit ()
else :
    state = -1
    state_values = ["Single", "Married"]
    while state != 1 and state != 2 :
        print ("what is your social state ? \n")
        print(state_values)
        print("1/Single 2/Married : ")
        state = int(input())

print ("Name : " + name + "\n Age : " + age + "Social state :" + state_values[state - 1])
