

class Foo:
    i=0
    def __init__(self, value):
        self.i = value
    def __str__(self):
        return f"Foo: {self.i} i:{id(self.i)} self:{id(self)}"
    def mod(self, value):
        self.i = value

def f(x):
    print(x)
    x.mod(99)
    print(x)


i= Foo(3)
print(i)
f(i)
print(i)
