
#funkce kontroluje paliandrom
def palindrome(a):

    #deklarace a definice proměnné "mid", která spočítá počet písmen ve slově, odečte od něj jedna a vydělí výsledek dvěma 
    mid = (len(a)-1)//2

    #deklarace a definice proměnné start   
    start = 0

    #deklarace a definice proměnné "last" spočítá počet písmen ve slově a odečte něj 1               
    last = len(a)-1

    #deklarace a definice proměnné flag
    flag = 0
 
 #cyklus dokud "start" bude menší nebo roven "mid"
    while(start <= mid):
        
        #pokud je první písmeno stejné jako druhé písmeno 
        if (a[start]== a[last]):
             
            #přičte ke start 1 
            start += 1
            
            #odečte od start 1
            last -= 1

        #pokud neplatí if flag je 1   
        else:
            flag = 1
            break

    #pokud je flag 0      
    if flag == 0:
        
        #vytiskne 
        print("Zadaný řetězec je palindrome")
    #pokud je flag něco jinéh než 0 
    else:
        #vytiskne 
        print("Zadaný řetězec není palindrome")

#efinice funkce symmetry             
def symmetry(a):

    #deklarace a definice proměnné n která spočítí počet písmen ve slově
    n = len(a)

    #deklarace a definice proměnné flag
    flag = 0
    
    #pokud dělení n dvěma zůstane zbytek
    if n%2:

        #deklarace a definice proměnné mid která vydělí n dvěma a přičte 1
        mid = n//2 +1

    #jinak
    else:

        #mid bude n děleno dvěma
        mid = n//2

    #deklarace a definice proměnné start1     
    start1 = 0

    #deklarace a definice proměnné start2 která je mid
    start2 = mid

    #cyklus se bude opakovat dokud start1 bude menší než mid a zároveň start2 bude menší než n
    while(start1 < mid and start2 < n):

        #pokud je první písmeno slova stejné jako prostřední písmeno  
        if (a[start1]== a[start2]):
            #přičteme ke startu1 1
            start1 = start1 + 1

            #přičteme ke startu2 1
            start2 = start2 + 1

        #jinak 
        else:
            #flag je 1
            flag = 1
            
            #konec
            break
    
    #pokud je flag 0 
    if flag == 0:

        #vytiskne
        print("Zadaný řetězec je symetrický")
    #jinak 
    else:

        #vytiskne
        print("Zadaný řetězec není symetrický")

#deklarace a definice proměnné string
string = 'amaama'

#zavolání funkce palindrome a zadání proměnné string 
palindrome(string)

#zavolání funkce symmetry a zadání proměnné string 
symmetry(string)