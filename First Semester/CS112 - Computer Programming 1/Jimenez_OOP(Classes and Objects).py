# Draw the UML diagram for the class, and then implement the class.
# Develop a test program that generates two Rectangle objects - one with width 4 and height 40 
# and the other with width 3.5 and height 35.7.
# Display the width, height, area, and perimeter of each rectangle in this order.

class rectangle:
    def __init__(self, w=1, h=2):
        self.length = h
        self.width = w

    def getArea(self):
        return self.length * self.width
    def getParamiter(self):
        return 2*(self.length + self.width)

def rect1():
    h = 40
    w = 4
    v = rectangle(w,h)
    return("Rectangle 1, has the height and width of " + str(h), str(w),
            "The Area of the chosen rectangle is: ", v.getArea(),
            "And the Parameter is: ", v.getParamiter())

def rect2():
    h = 35.7
    w = 3.5
    r = int(float(h))
    s = int(float(w))
    v = rectangle(r,s)
    return ("Rectangle 2, has the height and width of " + str(h), str(w),
            "the Area of the chosen rectangle is: ", v.getArea(),
            "and the Parameter is: ", v.getParamiter())

def comp():
    x = int(input("Choose an option between: rectangle 1 = '1', rectangle 2 = '2': "))
    if x == 1:
        return(rect1())
    elif x == 2:
        return(rect2())
    else:
        return("invalid")

i = comp()
print(i)