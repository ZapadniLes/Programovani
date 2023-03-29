cisla1=open("hodnoty.txt","r")
cisla2 = cisla1.read()
print (cisla2)
seznam = cisla2.split(",")
seznam = [int(x) for x in seznam]
seznam.sort()
print(seznam)
cisla1.close()

cisla1= open("hodnoty1.txt", "a")
#seznam = [str(x) for x in seznam]
print(seznam)
x=0
for x in range(0, len(seznam)):
    
    cisla1.write = (seznam[x])
     print(seznam[x])
    x=x+1
    
cisla1.close()












