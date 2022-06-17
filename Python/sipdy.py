import turtle

t=turtle.Turtle()
s=turtle.Screen()
s.bgcolor('white')
t.speed(0)

for i in range(180):
    t.pencolor('black')
    t.circle(-i+10,200)
    t.rt(120)

turtle.done()