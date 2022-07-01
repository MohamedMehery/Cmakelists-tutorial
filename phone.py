
from item import Item
############################################################################

#Class inheritance

# in python -> _var1 is a protected member by adding '_', while __var2 is a private member by adding "__"
class phone (Item):

    def __init__(self, _st:str ,p = 100,qunt = 1,isbroken = 0):
        
        #call to super function t0 have access to all attributes (price, quantity , name)
        self.__name = _st
        super().__init__(
            _st , p , qunt
        )

    @property #property is readonly attribute , MAKE NOTICE IT'S ATTRIBUTES NOT METHOD FUNCTION
    def name(self):
        return self.__name
    
    @name.setter
    def name(self,value):
        self.__name = value 

phone1 = phone("Nokia9" , 500, 5,1)
print(f"\t{phone1.calculateprice()}")

print(f"{phone.All}")
print(f"{phone1.name}")


