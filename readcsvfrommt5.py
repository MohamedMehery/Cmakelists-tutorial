import csv

openprices = list()
closedprices = list()
with open('GBPJPY_H1.csv' , 'r' ) as f:
    reader = csv.reader(f , delimiter = '\t' )
    items = list(reader)

items.reverse()

for i in items:
    openprices.append(i[2])
    closedprices.append(i[5])



for i in range (0,len(openprices)//10):
    print(f"Open price of {items[i][0]} = {openprices[i]}")