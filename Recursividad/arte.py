import turtle

myTurtle = turtle.Turtle()

myWin = turtle.Screen()

def Draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(90)
        Draw(myTurtle,length-10)

Draw(myTurtle,100)
myWin.exitonclick()