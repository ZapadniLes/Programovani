import os
import random

class Postava:
    def __init__(self, jmeno ,zivoty, inteligence, sila, zbran, brneni):
        self.jmeno=jmeno
        self.zivoty=zivoty
        self.inteligence=inteligence
        self.sila=sila
        self.zbran=zbran
        self.brneni=brneni


os.system("cls")

#Funkce pro útok

def utok(hrac):

    #hod kostkou    
    zasah=random.randint(0,16)

    #hráč 2 útočí
    if(zasah>5 and hrac == 2):
        poskozeni=(hrac2.zbran+hrac2.sila)-hrac1.brneni
        if (poskozeni > 0):
            hrac1.zivoty=hrac1.zivoty-poskozeni
            print(hrac2.jmeno,"udělil",poskozeni,"poškození" )
            print(hrac1.jmeno,"zbývá",hrac1.zivoty,"životů")
        else:
            print(hrac2.jmeno,"neudělal nic")
    #hráč 1 útočí
    if(zasah>5 and hrac == 1):
        poskozeni=(hrac1.zbran+hrac1.inteligence)-hrac2.brneni
        if(poskozeni > 0):
            hrac2.zivoty=hrac2.zivoty-poskozeni
            print(hrac1.jmeno,"udělil",poskozeni,"poškození")
            print(hrac2.jmeno,"zbývá",hrac2.zivoty,"životů")
        else:
            print(hrac1.jmeno, "neudělal nic")

    #pokud hráč nehodil více než 5
    else:
        print("Nezasahl jsi")

#funkce na odpočívání
def odpocivat(hrac):

    #hod kostkou
    regen=random.randint(0,25)

    #hráč 1 se léčí
    if(hrac==1):
        
        hrac1.zivoty=hrac1.zivoty+regen
        print(hrac1.jmeno,"odpočinkem získal",regen,"životů")
        print(hrac1.jmeno,"má nyní",hrac1.zivoty)
    
    #hráč 2 se léčí
    else:

        hrac2.zivoty=hrac2.zivoty+regen
        print(hrac2.jmeno,"odpočinkem získal",regen,"životů")
        print(hrac2.jmeno,"má nyní",hrac2.zivoty)
        
        

    
        
    
#nastavování statistik postavy hráče 1
print("!!!NYNÍ KONFIGURUJETE POSTAVU HRÁČE 1 KTERÝ JE KOUZELNÍK = NA ÚTOK JE DŮLEŽITÁ INTELIGENCE!!!\n")
hrac1=Postava(
    
    input("Zadejte jméno vaší postavy:"),
    int(input("Zadejte počet životů:")),
    int(input("Zadejte počet bodů inteligence:")),    
    int(input("Zadejte počet bodů síly:")),
    int(input("Zadejte počet bodů poškození zbraně:")),
    int(input("Zadejte počet bodů ochrany brění:"))
    )


os.system("cls")

#nastavování statistik postavy hráče 2
print("!!!NYNÍ KONFIGURUJETE POSTAVU HRÁČE 2 KTERÝ JE VÁLEČNÍK = NA ÚTOK POTŘEBUJE SÍLU!!!\n")
hrac2=Postava(
    
    input("Zadejte jméno hráče 2:"),
    int(input("Zadejte počet životů:")),
    int(input("Zadejte počet bodů inteligence:")),    
    int(input("Zadejte počet bodů síly:")),
    int(input("Zadejte počet bodů poškození zbraně:")),
    int(input("Zadejte počet bodů ochrany brění:"))
    )

#cyklus pro souboj
while(hrac1.zivoty > 0 and hrac2.zivoty > 0):

    #hráč 1 začíná
    print("Teď hraje",hrac1.jmeno)
    cin=int(input("Co chceš dělat? (1 útok, 2 odpočívat)\n"))
    if(cin == 1):
        utok(1)
        if(hrac2.zivoty <= 0):
            break
    else:
        odpocivat(1)
    

    #hráč 2 pokračuje
    print("Teď hraje",hrac2.jmeno)
    cin=int(input("Co chceš dělat? (1 útok, 2 odpočívat)\n"))
    if(cin == 1):
        utok(2)
    else:
        odpocivat(2)

#výherní obrazovka
if(hrac1.zivoty > 0):
    print("\n",hrac1.jmeno,"vyhrál")
else:
    print("\n",hrac2.jmeno,"vyhrál")
    
    


