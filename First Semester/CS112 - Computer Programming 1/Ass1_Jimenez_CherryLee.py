# Write a program that displays the area and perimeter of a rectangle with the width of 4.5 and height of 7.9.

width = 4.5
height = 7.9

area = width * height
perimeter = 2 * (height + width)

print("The area of rectangle is: ",(round(area,2)))
print("The perimeter of rectangle is: ",(round(perimeter,2)))


# Create a program that places a CROSS in the center of the screen as shown below

import turtle

turtle.fd(100)

turtle.bk(200)
turtle.fd(100)

turtle.lt(90)
turtle.fd(100)

turtle.rt(180)
turtle.fd(200)

turtle.done()