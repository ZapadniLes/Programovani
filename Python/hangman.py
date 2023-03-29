slovo=input("Vložte slovo: ")

vyhra=0
prohra=0
def rozdelit(kkt): 
    return [char for char in kkt] 
RozdelSlovo=rozdelit(slovo)



print(RozdelSlovo)
pomlcky=int(len (slovo))
zapis=(["_ "]*pomlcky)
print(zapis)

while(vyhra!=pomlcky):
    pismeno=(input("Zadejte písmeno: "))
    if (pismeno in RozdelSlovo):
        pozice=RozdelSlovo.index(pismeno)
        zapis[pozice]=pismeno
        print(zapis)
    
    #if (pismeno in RozdelSlovo):   
