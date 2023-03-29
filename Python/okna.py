import tkinter as tk
import random
okno=tk.Tk()
tip_var=tk.IntVar()
scislo=random.randint(0,100)
while(True):
    
    lable=tk.Label(okno,text=scislo)
    lable.pack()
    tip_label=tk.Label(text="Jaké čílo si myslím?")
    tip_entry=tk.Entry()
    if(tip_entry>scislo):
        lable=tk.Label(okno,text="Menší")
        lable.pack()
        tip_label=tk.Label(text="Jaké čílo si myslím?")
    elif(tip_entry<scislo):
        lable=tk.Label(okno,text="Větší")
        lable.pack()
        tip_label=tk.Label(text="Jaké čílo si myslím?")
    else:
        lable=tk.Label(okno,text="Gratuluji! Uhádl jste číslo")
        lable.pack()
    okno.mainloop()
    break

