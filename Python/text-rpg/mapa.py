class Mapa:
    def __init__(self, jmeno, popis):
        self.jmeno=jmeno
        self.popis=popis
        self.brana={}

    def __str__(self):
        return f"Místo: {self.jmeno}\n Popis: {self.popis}\n Vidíš:{self.brana}"
    
    def setbrana(self, brana):
        self.brana=brana

les=Mapa("Temný les","Jsi v temné lese. Máš pocit že na tebe ze tmy koukají blyštivě bílé oči.")
pevnost=Mapa("Opuštěná pevnost", "Vidíš již před věky zbudovanou vojenskou pevnost.")
jezero=Mapa("Jezero", "Vidíš kříšťálově modré jezero jehož vody čeří vítr.")
cesta=Mapa("Cesta", "Vídíš vyšlapanou a vyježděnou prašnou cestu")
farma=Mapa("Farma", "Kousek před sebou vidíš nejspíše obydlenou farmu.")


les.setbrana({"sever": pevnost, "jih":jezero, "zapad":cesta, "vychod": farma})
pevnost.setbrana({"sever":"Velká neviditelná zeď", "jih":les, "zapad":cesta, "vychod":"Velká neviditelná zeď"})
jezero.setbrana({"sever": farma, "jih":"Velká neviditelná zeď", "zapad":cesta, "vychod": "Velká neviditelná zeď"})
cesta.setbrana({"sever": pevnost, "jih":jezero, "zapad":"Velká neviditelná zeď", "vychod": les})
farma.setbrana({"sever": "Velká neviditelná zeď", "jih":jezero, "zapad":les, "vychod": "Velká neviditelná zeď"})



    

    
