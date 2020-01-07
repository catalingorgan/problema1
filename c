lungime_saritura = input('introduceti lungimea initiala a sariturii:')
numar_secunde = input('introduceti numarul de secunde dupa care iepurele isi injumatateste drumul:')
timp_total = input('introduceti durata totala a deplasarii iepurelui:')
distanta_totala = 0
if int(lungime_saritura) <= 0 or int(numar_secunde) <= 0 or int(timp_total) <= 0:
    print("Dati numai valori pozitive")
if int(timp_total)<int(numar_secunde):
    print('numarul total de secunde trebuie sa fie mai mare decat cel de injumatatire')

i = 0
for i in range(int(timp_total)):
    if i >= int(numar_secunde):
        distanta_totala = distanta_totala + int(lungime_saritura)/2
    else:
        distanta_totala = distanta_totala + int(lungime_saritura)
print(distanta_totala)
