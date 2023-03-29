os=["Windows","Void","Ubuntu","Artix"]

#vypíše Void ze seznamu
print (os[1])

#vytiskne celý seznam os
print(os)

#vymění Ubuntu za Arch a vytiskne celý seznam
os[2]="Arch"
print(os)

#přidá Fedoru do seznamu a vytiskne seznam
os.append("Fedora")
print(os)

#odstarní Artix se sezanmu a vytiskne seznam
os.remove("Artix")
print(os)
