print("Toto je CRT test. Odpovězte vždy pouze číslem.")
vysledek=0
palka=(int (input("Pálka a míček stojí celkem 1,10 dolaru. Pálka stojí o dolar více než míček. Kolik stojí míček?: ")))
stroj=(int (input("Jestliže 5 strojů potřebuje 5 minut na výrobu 5 věcí, jak dlouho by trvalo 100 strojům vyrobit 100 věcí?: ")))
leknin=(int (input("Na jezeře se nachází plocha s lekníny. Každý den se velikost této plochy zdvojnásobí.Pokud trvá 48 dní, než lekníny pokryjí celé jezero, za jak dlouho by lekníny pokryly polovinu jezera?: ")))

if(palka==5):
    vysledek=vysledek+1
if(stroj==5):
    vysledek=vysledek+1
if(leknin==47):
    vysledek=vysledek+1
    
print("Váš výsledný počet správných odpovědí je:",vysledek)
print("Pouze 17% lidí odpovědělo správně na všechny 3 otázky. 33% lidí neodpovědělo správně ani na jednu z otázek(jednalo se o vysokoškoláky). Subjekty s lepšími výsledky v podobných CRT testech méně podléhají iluzi vědění a dezinformacím a většinou odmítají extremismus")
      
