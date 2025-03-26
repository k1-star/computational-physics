class circle:
    def __init__(self, radius, location):
        self.radius = radius
        self.location=location
    def printarea(self):
        print( 3.14 * self.radius * self.radius)
    def printperimeter(self):
        print( 2 * 3.14 * self.radius)
    def printlocation(self):
        print(self.location)
    def printradius(self):
        print(self.radius) 

import numpy as np
def largestcommonfactor(a):
    if(len(a)==2):
        return np.gcd(a[0],a[1])
    else:
        return np.gcd(a[0],largestcommonfactor(a[1:]))
