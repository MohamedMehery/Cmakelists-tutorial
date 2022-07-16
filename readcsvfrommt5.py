import csv
import numpy as np

openprices = list()
closedprices = list()
with open('GBPJPY_H1.csv' , 'r' ) as f:
    reader = csv.reader(f , delimiter = '\t')   #make notice if there is any change to GBPJPY_H1.csv
    items = list(reader)

types = items[0]
print(types)
items.reverse()
items.remove(items[-1]) #remove types
for i in items:
    openprices.append(i[2])
    closedprices.append(i[5])


least = min(openprices)
most = max(closedprices)
print(least)
print(most)


"""
for i in range (0,len(openprices)//10):
    
    print(f"Open price of {items[i][0]} = {openprices[i]}")
"""

