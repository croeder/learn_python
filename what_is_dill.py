#!/usr/bin/env python3

from dill.source import getsource

my_short_dict = {"a":1}
print(my_short_dict)
#getsource(my_short_dict)
#print(getsource(my_short_dict))

my_short_dict = {"a": lambda xcol:xcol}
print(my_short_dict)
#getsource(my_short_dict)
#print(getsource(my_short_dict))

#my_dict = {"a":1, "b":2, "c":3}
#print(my_dict)


import dill.source as source
obj = {"a": lambda x : x}

x = source.wrap(obj)



