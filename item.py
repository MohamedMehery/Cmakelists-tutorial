import csv
#to make .exe from this file i used pyinstaller from anaconda cmd cd: C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial>pyinstaller --onefile oop.py
class Item:
    #class attribute
    pay_rate = 0.8
    All = []
    def __init__(self, st:str ,p = 100,qunt = 1):

        self.__do_secret_habit()
        assert p > 0  ,  print(f"invalid price = {p}")
        assert qunt >0 , print(f"invalid quantity = {qunt}")
        self.__price = p
        self.quantity = qunt
        self.__name = st
        print(f"\tItem name is {self.__name}\n", end = '')
        Item.All.append(self)

    @property #make the getname as read only attribute
    def name(self):
        return self.__name

    @name.setter
    def name(self,value):
        if len(value) > 10:
            raise Exception("The name is too long!")
        print(f"You are trying to set {self.__name}")
        self.__name = value

    #apply abstraction concept, where this function in hiden from user
    def __do_secret_habit(self):
        pass

    @property
    def price(self):
        return self.__price

    @price.setter
    def price(self , value):
        self.__price = value

    def priceincreament(self , value):
        self.__price =  self.__price + value

    def calculateprice(self):

        return self.__price * self.quantity

    def printall(self):
        print(f"{self.All}\n")

    def countof(self):
        print(f"\tNumber of items = {Item.All.__len__()}")
    
    #magic method overloading
    def __repr__(self): ##self.__class__.__name__ print the class name

        return f"item({self.__class__.__name__},{self.__name},{self.__price} , {self.quantity} )"

    #diff betn class method and instance method is that instance methor dedicated to the object but class method related to hole class
    @classmethod    ### to use this method without crearing object
    def instantiate_from_csv(cls):
        with open('items.csv' , 'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)

        for i in items:
            print(i)
            Item(
                st = str(i.get('name')),
                p = float(i.get('price')),
                qunt = int(i.get('quantity'))
            )
    
    #static method

    def is_int(num):   #it takes no parameter, unlike the normal class method
        #this function count integers in list prices
        #this function is static method which is applyed to all class no just a signal item
        if isinstance(num, float):
            return num.is_integer()
        elif isinstance(num, int):
            return True
        else:
            return false

#csv file is a great option to store larg amount of class items


"""


for instances in item.All:
    print(instances.__repr__)



Item.instantiate_from_csv()



#print("Print all")


Item.printall(Item)

Item.countof(Item)

print(Item.is_int(Item.All[0].price)) #show if the price of item at All[] list is integer number

"""



