

class Foo:
    i=0
    def __init__(self, value):
        self.i = value
    def __str__(self):
        return f"Foo: {self.i} i:{id(self.i)} self:{id(self)}"
    def mod(self, value):
        self.i = value
    def __eq__(self, value):
        return self.i == value.i

i=3
j=3
if (i == j):
    print("primitive ==")


f= Foo(3)
g= Foo(3)
if (f == f):
    print("object f == f")
if (f == g):
    print("object f == g")
