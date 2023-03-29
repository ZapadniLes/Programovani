import time
vyber= int(input("Vybete zbůsob prohození 1(), 2(), 3() 4(): "))

x=1
y=2

if(vyber==1):
    zacatek=time.time()
    x,y=y,x
    time.sleep(1)
    konec=time.time()
    print(konec-zacatek)
    print("x=",x)
    print("y=",y)

elif(vyber==2):
    zacatek=time.time()
    z = x
    x = y
    y = z
    time.sleep(1)
    konec=time.time()

    print(konec-zacatek)
    print("x=",x)
    print("y=",y)

elif(vyber==3):
    zacatek=time.time()
    x = x + y       
    y = x - y       
    x = x - y 
    time.sleep(1)
    konec=time.time()

    print(konec-zacatek)
    print("x=",x)
    print("y=",y)

else:
    zacatek=time.time()
    list = [x, y]
    y, x = list
    time.sleep(1)
    konec=time.time()

    print(konec-zacatek)
    print("x=",x)
    print("y=",y)
