#deklarace a definice proměnné seznam    
seznam = [10, 21, 4, 45, 66, 93]

#cyklus na prohledání seznamu
for cislo in seznam:
    #pokud má číslo po dělení 2 v seznamu zbytek nula (je sudé)
    if cislo % 2 == 0:
        #vypíše na novou řádku
        print(cislo, end=" ")