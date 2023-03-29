import os

print("Pište prosím bez háčků a čárek a s velkými písmeny (CAU JA JSEM PETR SPRIMAR)")
print(" ")
rozhodnuti=int(input("Jak chcete převádět?(abeceda do morseovky soubor[1], morseovka do abecedy soubor[2], abeceda do morseovky konzole[3], morseovka do abecedy konzole[4])"))
morseovka = {'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.', 'G': '--.', 'H': '....',
                    'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---', 'P': '.--.',
                    'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-',
                    'Y': '-.--', 'Z': '--..', '0': '-----', '1': '.----', '2': '..---', '3': '...--', '4': '....-',
                    '5': '.....', '6': '-....', '7': '--...', '8': '---..', '9': '----.'}
otoceni={value:key for key,value in morseovka.items()}
def sifrace(zprava):
    sifra=""
    for pismeno in zprava:
        if pismeno != " ":
            sifra+= morseovka[pismeno]+" "
        else:
            sifra+=" "
    return sifra

def desifrace(zasifrovano):
 
    zasifrovano += ' '
 
    desifra = ''
    citext = ''
    for pismeno in zasifrovano:
 
        if (pismeno != ' '):
            
            i = 0
            citext += pismeno
        
        else:
            
            i += 1
            if i == 2 :
                desifra += ' '
            
            else:
 
                desifra += list(morseovka.keys())[list(morseovka
                .values()).index(citext)]
                citext = ''
 
    return desifra
    
if (rozhodnuti==1):
    cesta=input("Zadejte cestu k souboru: ")
    
    data=open(cesta,"r")
    sifra1=data.read()
    data.close()
    
    cesta2=input("Zadejte kam chcete uložit soubor i s názvem souboru a koncovkou .txt: ")
    zapis=open(cesta2,"x")
    zapis2=open(cesta2,"w")
    
    vysledek=sifrace(sifra1)
    desifrovano=zapis.write(vysledek)
    zapis.close()

if(rozhodnuti==2):
    cesta=input("Zadejte cestu k souboru: ")
    
    data=open(cesta,"r")
    sifra2=data.read()
    data.close()
    
    cesta2=input("Zadejte kam chcete uložit soubor i s názvem souboru a koncovkou .txt: ")
    zapis=open(cesta2,"x")
    zapis2=open(cesta2,"w")
    
    vysledek=desifrace(sifra2)
    desifrovano=zapis.write(vysledek)
    zapis.close()
    
    
#sifrování do konzole
if (rozhodnuti==3):
    sifra3= input("Zadejte text: ")
    vysledek=sifrace(sifra3)
    print(vysledek)
    
#dešifrce do konzole
if (rozhodnuti==4):
    sifra4= input("Zadejte šifru: ")
    vysledek=desifrace(sifra4)
    
    print(vysledek)





#if rozhodnuti=1:
 #   cesta=input ("zadejte cestu k souboru:")
  #  soubor=open(cesta,r)
        
       
