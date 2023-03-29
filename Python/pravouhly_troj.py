a=input("Zadejte velikost strany trojúhelníka:")
b=input("Zadejte velikost strany trojúhelníka:")
c=input("Zadejte velikost strany trojúhelníka:")

def kontrolovat(cisla):
    a=int(cisla[0])*int(cisla[0])
    b=int(cisla[1])*int(cisla[1])
    c=int(cisla[2])*int(cisla[2])
    
    if (c == a+b):
        return True
    else:
        return False
    
cisla=[a,b,c]
cisla.sort()


print(kontrolovat(cisla))
