from homework7func1 import circle
class cylinder(circle):
    def __init__(self, radius, location, height):
        super().__init__(radius, location)
        self.height = height
    def printvolume(self):
        print(3.14 * self.radius * self.radius * self.height)