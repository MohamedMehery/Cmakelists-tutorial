
college_years = ["‘Freshman’", "‘Sophomore’", "‘Junior’", "‘Senior’"]

print(list(enumerate(college_years,2015)))



"""tuples in python:
the lists are mutable, Python needs to allocate an extra memory block 
in case there is a need to extend the size of the list object after it is created. 
In contrary, as tuples are immutable and fixed size, Python allocates 
just the minimum memory block required for the data.
As a result, tuples are more memory efficient than the lists."""
import sys, platform, time
a_list = list()
a_tuple = tuple()
a_list = [1,2,3,4,5]
a_tuple = (1,2,3,4,5)
print(sys.getsizeof(a_list))
print(sys.getsizeof(a_tuple))
start_time = time.time()
b_list = list(range(10000000))
end_time = time.time()
print("Instantiation time for LIST:", end_time - start_time)
start_time = time.time()
b_tuple = tuple(range(10000000))
end_time = time.time()
print("Instantiation time for TUPLE:", end_time - start_time)
start_time = time.time()
for item in b_list:
  aa = b_list[20000]
end_time = time.time()
print("Lookup time for LIST: ", end_time - start_time)
start_time = time.time()
for item in b_tuple:
  aa = b_tuple[20000]
end_time = time.time()
print("Lookup time for TUPLE: ", end_time - start_time)

"""As you can see from the output of the above code snippet, 
the memory required for the identical list and tuple objects is different.
When it comes to the time efficiency, again tuples have a slight advantage 
over the lists especially when lookup to a value is considered."""

"""When to use Tuples over Lists:
Well, obviously this depends on your needs.
There may be some occasions you specifically do not what data to be changed. 
If you have data which is not meant to be changed in the first place, 
you should choose tuple data type over lists.
But if you know that the data will grow and shrink during the runtime of the application, 
you need to go with the list data type."""

# A Python program to demonstrate inheritance
  
# Base or Super class. Note object in bracket.
# (Generally, object is made ancestor of all classes)
# In Python 3.x "class Person" is
# equivalent to "class Person(object)"
class Person(object):
      
    # Constructor
    def __init__(self, name):
        self.name = name
  
    # To get name
    def getName(self):
        return self.name
  
    # To check if this person is an employee
    def isEmployee(self):
        return False
  
  
# Inherited or Subclass (Note Person in bracket)
class Employee(Person):
  
    # Here we return true
    def isEmployee(self):
        return True
  
# Driver code
emp = Person("Geek1")  # An Object of Person
print(emp.getName(), emp.isEmployee())
  
emp = Employee("Geek2") # An Object of Employee
print(emp.getName(), emp.isEmployee())