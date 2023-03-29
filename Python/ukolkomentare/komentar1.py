
#definice a deklarace proměnné "n"
n="Toto je programovací jazyk Python"

#rozdělí větu po slovech do řádků
slova = n.split(" ")

#cyklus dlouhý podle počtu slov ve větě
for i in slova:  
  #pokud má slovo sudý počet písmen bude vypasáno na řádku
  if len(i)%2==0:
    print(i)