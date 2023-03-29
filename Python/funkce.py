#funkce
def rovnice(a):
    vysledek = (a*a)+3*a-5
    return vysledek

#zadání čísla
x=int(input("Zadej číslo: "))

#poslání do funkce a tisk výsledku
print (rovnice(x))