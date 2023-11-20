#!/usr/bin/env python3

#-------------------------
print("primitive integer")
def f(x):
    x = 99

a = 3
print(type(a))
print(a) # 3
f(a)
print(a) # 3, no chnage b/c pass-by-value

#-------------------------


print("\nstring")
def f(x):
    x = "boo"
a = "hello"
print(type(a))
print(a) # hello
f(a)
print(a) # hello, no change  b/c immutable BUT NO EXCEPTION????

#-------------------------
print("\nlist (array)")
def f(x):
    x[0] = 99
a = [0,1,2,3]
print(type(a))
print(a) # [0, 1, 2, 3]
f(a)
print(a) # [99, 1, 2, 3] changed b/c pass-by-reference, mutable

#-------------------------
print("\ntuple")
def f(x):
    try:
        x[0] = 99
    except:
        print("Error, tuple doesn't do mutation")
a = (1, "boo", 3.333)
print(type(a))
print(a)
f(a) # throws, immutable
print(a)

#-------------------------
print("\ndict")
def f(x):
    x["name"] = "Bob"
a = {'name': "Al", 'city': "Denver", 'state':"Colorado"}
print(type(a))
print(a) # {'name': 'Al', 'city': 'Denver', 'state': 'Colorado'}
f(a)
print(a) # {'name': 'Bob', 'city': 'Denver', 'state': 'Colorado'} # pass-by-reference, mutable

#-------------------------
print("\nset")
def f(x):
    x.add('apple')
    x.add('date')
a = {'apple', 'banana', 'cherry'}
print(type(a))
print(a)   #  {'apple', 'cherry', 'banana'}
f(a)
print(a) #  {'date', 'apple', 'cherry', 'banana'} # pass-by-referencel, mutable


#-------------------------
print("\nfrozenset")
def f(x):
    try:
        x.add('apple')
        x.add('date')
    except:
        print("Error, frozenset doesn't do mutation")
a = frozenset({'apple', 'banana', 'cherry'})
print(type(a))
print(a)
f(a)
print(a)


#-------------------------
# one step beyond: keys  in sets and hashes must be immutable ??
print("\nadding iterable to set")
a = set(["foo", "bar"])
print(type(a))
print(a) #  {'bar', 'foo'}
a.add("reeberslobber")
a.add((1,2,3))
a |= set((4,5,6))
print(a) #  {4, 5, 6, 'reeberslobber', (1, 2, 3), 'bar', 'foo'} 



#-------------------------
# another one step beyond: keys  in sets and hashes must be immutable, two ways to add iterables to a set
print("\nadding unhashable/mutable to set")
a = set(["foo"])
a.add("bar")
try:
    a.add([1,2,3])
except:
    print("Error, can't add list to set")
print(a)


