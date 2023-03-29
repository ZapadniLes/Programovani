#funkce najde největší číslo

def nejvetsi(pole, n):
    
    #deklarace max na první číslo z pole
    max = pole[0]
    #cyklus 1 až zadané číslo n
    for i in range(1, n):

        #pokud je číslo ze seznamu na pozici "i" větší než předchozí největší číslo změní se proměnná "max"
        if pole[i] > max:
            max = pole[i]
    #cyklus ukončen, vrátí max
    return max

#deklarace a definice promněnné "arr"
arr = [10, 324, 45, 90, 9808]

#deklarace a definice fproměnné "n" která spočítá kolik čísel je v "arr"
n = len(arr)

#deklarace a definice proměnné vysledek která volá funkci nejvetsi a zadává do ní "arr" a "n"
vysledek = nejvetsi(arr, n)

#vytiskne výsledek s popisem
print("Největší v daném poli ", vysledek)