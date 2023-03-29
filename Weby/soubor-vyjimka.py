try:
    file = open("pokus.txt","r") 
    print(file.read()) 
    file.close()
except:
    print("Chyba v otevírání souboru pokus.txt")
finally:
    print("Otevírali jste soubor pro čtení")

file = open("pokus.txt", "w")
file.write("Italy\n") 
file.write("Germany\n") 
file.write("Spain\n") 
file.close() 

file = open("pokus.txt","r") 
print(file.read()) 
file.close() 

file = open("pokus.txt","a") 
file.write("France\n") 
file.close() 