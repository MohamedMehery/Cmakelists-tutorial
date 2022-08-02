"""
#size 3

----c----
--c-b-c--
c-b-a-b-c
--c-b-c--
----c----

#size 5

--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------

#size 10

------------------j------------------
----------------j-i-j----------------
--------------j-i-h-i-j--------------
------------j-i-h-g-h-i-j------------
----------j-i-h-g-f-g-h-i-j----------
--------j-i-h-g-f-e-f-g-h-i-j--------
------j-i-h-g-f-e-d-e-f-g-h-i-j------
----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
--j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j
--j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
------j-i-h-g-f-e-d-e-f-g-h-i-j------
--------j-i-h-g-f-e-f-g-h-i-j--------
----------j-i-h-g-f-g-h-i-j----------
------------j-i-h-g-h-i-j------------
--------------j-i-h-i-j--------------
----------------j-i-j----------------
------------------j------------------
"""

def print_rangoli(size):
    # your code goes here
    l = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    for rownum in range(size):
        for colmnum in range(size - rownum - 1):
            print("--",end='')
            #   --
        for colmnum in range(rownum+1):
            print(f"{l[size-1 - (colmnum)]}-",end='')
            #   a-z
        for colmnum in range(rownum):
            print(f"{l[size-1 - (rownum - colmnum-1)]}",end='')
            if ((colmnum < (rownum - 1)) and (rownum > 0)):
                print(f"-",end='')

        if(rownum > 0):
            for colmnum in range(size - rownum - 1):
                print("--",end='')     
        else:
            for colmnum in range(size - rownum - 1):
                if colmnum > 0:
                    print("--",end='')  
                else:
                    print("-",end='')           
        print('\t')


    for rownum in range(size, size * 2 - 1):
        for colmnum in range(size, (rownum +1) ):
            print("--",end='')
            #   --
        for colmnum in range(size, 3*size - rownum - 1):
            print(f"{l[size - 2 -(colmnum-size)]}-",end='')
            #   a-z        
        for colmnum in reversed(range(size, 3*size - rownum - 2)):
            print(f"{l[size - 2 - (colmnum-size)]}",end='')
            if ((colmnum < (2*size-1)) and (rownum > 0)):
                print(f"-",end='')

        print("-",end='')

        if(rownum < (size*2-1)):
            for colmnum in range(rownum - size):
                print("--",end='')            
        print('\t')


        

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)