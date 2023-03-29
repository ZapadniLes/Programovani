import random

print("Vítejte v hádací hře, kde musíte uhádnout číslo, které si program vybere.")
scislo=random.randint(0,100)
tip=int(input("Jaké si myslí číslo?: "))
while(True):
    
    print(scislo)
    if(tip>scislo):
        print("Menší")
        tip=int(input("Jaké si myslí číslo?: "))
    elif(tip<scislo):
        print("Větší")
        tip=int(input("Jaké si myslí číslo?: "))
    else:
        print("Gratuluji! Uhádl jste číslo")
        break
    
