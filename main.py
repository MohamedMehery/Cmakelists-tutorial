from item import Item

from phone import phone

item10 = phone("__Main__" , 1 , 1)
item10.price = 90

#set and attribute
item10.name = "Mohammed"
print(f"\t{item10.name}")
item10.priceincreament(0.2 * item10.price)
print(f"\t{item10.price}")

