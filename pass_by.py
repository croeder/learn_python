

def f(x):
    print(f"{x}, {id(x)}")
    x = 99
    print(f"{x}, {id(x)}")


i = 3
print(f"{i}, {id(i)}")
f(i)
print(f"{i}, {id(i)}")
