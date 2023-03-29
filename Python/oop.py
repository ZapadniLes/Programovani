class Subjekt:
    def __init__(self, iq, body, rasa, oblast_narozeni):
        self.iq=iq
        self.body=body
        self.rasa=rasa
        self.oblast_narozeni=oblast_narozeni

petr=Subjekt("160","200","bílá","Česká republika")
print(petr.iq,petr.body,petr.rasa, petr.oblast_narozeni)
