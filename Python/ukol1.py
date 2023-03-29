a=int(input("Zadejte stranu a: "))
b=int(input("Zadejte stranu b: "))
c=int(input("Zadejte stranu c: "))
if(a+b > c) and (a+c > b)and(b+c > a):
      print("Trojúhelník lze sestrojit! Hurá!")
else:
    print("Trojůhelník nelze sestrojit. :(")
