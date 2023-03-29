import random

cisla=[]
prumer=0
for i in range (10):
    cisla.append(random.randint(1,5))
    print (cisla)

for i in range (10):
    prumer= cisla[i]+prumer

"""print(prumer/10)
    


