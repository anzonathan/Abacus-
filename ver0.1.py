#Author: Nathaniel Mugenyi
#Date: 01, Aug, 2024

#Description:\/ 0.1
#1.Convert decimal to hex
#2. Convert hex to decimal



ans = None

while (ans != 0):
    ans = int(input("\nTo convert HEX to DECIMAL enter '1'\nTo convert DECIMAL to HEX enter '2'\nTo exit enter '0'\n"))

    if(ans == 1): #convert hex to dec
        conv = str(input("Enter the HEXADECIMAL: \n"))
        print("Your Number in DECIMAL: ", int(conv,16)) #hex(dec) function

    elif (ans == 2): #convert dec to hex
        conv = int(input("Enter the DECIMAL: \n"))
        print("Your Number in HEXADECIMAL: " + hex(conv))
