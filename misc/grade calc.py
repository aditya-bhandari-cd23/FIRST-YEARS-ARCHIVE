#credit goes to Arya
print("ah shit here we go again")
while 1:
    print("====================================================")
    print("Enter which subject's grade point you want to know:\n1.Maths\n2.PHY/CHEM/PLC\n3.ESC/ETC/CORE\n4.Exit")
    choice=int(input("\nEnter your choice:"))
    match choice:
        case 1:
           print("-----------------------------")
           q1=float(input("Enter Quiz 1 marks:"))
           q2=float(input("Enter Quiz 2 marks:"))
           print("-----------------------------")
           t1=float(input("Enter Test 1 marks:"))
           t2=float(input("Enter Test 2 marks:"))
           print("-----------------------------")
           matl=float(input("Enter MATLAB marks(MAX=20):"))
           el=float(input("Enter EL marks(MAX=20):"))
           print("-----------------------------")
           see=float(input("Enter SEE marks:"))
           print("\n*****************************")
           CIEtotal=(q1+q2)+((t1+t2)/100*40)+matl+el
           total=(CIEtotal+see)/2
           print("your CIE total is: ",CIEtotal)
           print("Your Total(CIE+SEE) is: ",total)
           gradept=int(total/10)+1
           print("Your grade point is: ",gradept)
           print("\n*****************************")

        case 2:
           print("-----------------------------")
           q1=float(input("Enter Quiz 1 marks:"))
           q2=float(input("Enter Quiz 2 marks:"))
           print("-----------------------------")
           t1=float(input("Enter Test 1 marks:"))
           t2=float(input("Enter Test 2 marks:"))
           print("-----------------------------")
           lab=float(input("Enter Lab internals marks(MAX=30):"))
           print("-----------------------------")
           el=float(input("Enter EL marks(MAX=30):"))
           print("-----------------------------")
           see=float(input("Enter SEE marks:"))
           print("\n*****************************")
           CIEtotal=((q1+q2))/2+((t1+t2)/100*30)+lab+el
           total=(CIEtotal+see)/2
           print("your CIE total is: ",CIEtotal)
           print("Your Total(CIE+SEE) is: ",total)
           gradept=int(total/10)+1
           print("Your grade point is: ",gradept)
           print("\n*****************************")

        case 3:
           print("-----------------------------")
           q1=float(input("Enter Quiz 1 marks:"))
           q2=float(input("Enter Quiz 2 marks:"))
           print("-----------------------------")
           t1=float(input("Enter Test 1 marks:"))
           t2=float(input("Enter Test 2 marks:"))
           print("-----------------------------")
           el=float(input("Enter EL marks(MAX=40):"))
           print("-----------------------------")
           see=float(input("Enter SEE marks:"))
           print("\n*****************************")
           CIEtotal=(q1+q2)+((t1+t2)/100*40)+el
           total=(CIEtotal+see)/2
           print("your CIE total is: ",CIEtotal)
           print("Your Total(CIE+SEE) is: ",total)
           gradept=int(total/10)+1
           print("Your grade point is: ",gradept)
           print("\n*****************************")

        case 4:
           break

        case _:
           print("invalid choice...")
