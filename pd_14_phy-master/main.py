# class Person:
#
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#
#     def greet(self):
#         return f"Hello, my name is {self.name} and I am {self.age} years old"
#
#
# if __name__ == "__main__":
#     person1 = Person("Max Verstappen", 28)
#     print(person1.greet())
#
#     person2 = Person("Charles Leclerc", 28)
#     print(person2.greet())
#
#     person3 = Person("Kimi Antoneli", 19)
#     print(person3.greet())
#
#=============================================================================================
#
# class Circle:
#     pi = 3.14159265359
#
#     def __init__(self, radius):
#         self.radius = radius
#
#     def area(self):
#         return self.pi * (self.radius ** 2)
#
#     @classmethod
#     def set_pi(cls, value):
#         cls.pi = value
#
#
# if __name__ == '__main__':
#     circle1 = Circle(5)
#     circle2 = Circle(10)
#     print("Circle 1 Area:", circle1.area())
#     print("Circle 2 Area:", circle2.area())
#
#
#     Circle.set_pi(3.14)
#     print("Circle 1 Area:", circle1.area())
#     print("Circle 2 Area:", circle2.area())
#
#=============================================================================================
#
from abc import ABC, abstractmethod

class Shape(ABC):

    @abstractmethod
    def area(self):
        pass

class Rectangle(Shape):

    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

class Circle(Shape):

    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * (self.radius**2)

class Square(Shape):

    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side**2

class Triangle(Shape):

    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return 0.5 * self.base * self.height

class Trapezoid(Shape):

    def __init__(self, base1, base2, height):
        self.base1 = base1
        self.base2 = base2
        self.height = height

    def area(self):
        return 0.5 * (self.base1 + self.base2) * self.height

if __name__ == "__main__":
    shapes = [Rectangle(5, 4), Circle(3), Square(4), Triangle(6, 4), Trapezoid(6, 4, 3),]

    for shape in shapes:
        print(f"Area of {type(shape).__name__}: {shape.area()}")