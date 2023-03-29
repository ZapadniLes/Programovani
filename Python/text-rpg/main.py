
import os
import mapa
import postava
volba=""
pozice=mapa.les

print("Právě jsi se probudil uprostřed temného lesa a nevíš co se stalo.\nTeď si můžeš nastavit svoje staty.")
hrac=postava.Postava(
    input("Jméno:"),
    input("Počet životů:"),
    input("Počet síly:"),
    pozice
)
print("Pokud budeš chtít hru ukončit napiš: konec")


while(volba!="konec"):
    print(hrac.misto)
    pozice=hrac.misto
    volba=input("Kam chceš jít?\n")
    hrac.misto=pozice.brana[volba]

