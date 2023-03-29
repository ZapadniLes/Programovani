#deklarace a definice proměnné "test_str"
test_str = "Na blbosti mě užije"
 
#deklarace a definice proměnné "new_str"
new_str = ""

#cyklus spočítá písmena a tolikrát se bude opakovat
for i in range(len(test_str)):
    
    #pokud se nejdená o sedmé písmeno bude přidáno do "new_str"
    if i != 7:
        new_str = new_str + test_str[i]

#vytiskne větu bez sedmého písmene
print ("Řetězec po odstranění konkrétního znaku : " + new_str)