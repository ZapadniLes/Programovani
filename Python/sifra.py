sifra= input("Zadej šifru: ")
sifra2=sifra.upper()
ascii_values = []
y=0
x=0
for character in sifra2:
    ascii_values.append(ord(character)
    
print(ascii_values)

for i in range(30):
    
    y=y+1
    new_list= [x+y for x in ascii_values]
    #print (new_list)
    
    #if x in new_list > 122:
        #x-122+ x in ascii_values
    bagr=''.join(chr(i) for i in new_list)
    print(bagr)
    
    
