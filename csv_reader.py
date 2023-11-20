#!/usr/bin/env python3

import csv
from csv import Sniffer

# comma delimited
#text = '''"AAA", "BBB", "Test, Test", "CCC", "111", "222, 333", "XXX", "YYY, ZZZ"'''

# simple pipe delimited
#text = '''"AAA"|"BBB"|"Test, Test"|"CCC"|"111"|"222, 333"|"XXX"|"YYY| ZZZ"'''

# messed up pipes and commas
#text = '''"AAA"|"BBB"|"Test, Test"|"C|C|C"|"111"|"222,333"|"XXX"|"YYY, ZZZ"|a|b|c|"p,q,r"'''

# messed up pipes and commas, with header
text = '''",b,t,c,1,2,x,y,a,b,c,list\nAAA"|"BBB"|"Test, Test"|"C|C|C"|"111"|"222,333"|"XXX"|"YYY, ZZZ"|a|b|c|"p,q,r"'''

dialect =  csv.Sniffer().sniff(sample=text)
print(str(dialect))
print(dialect.doublequote)
print(dialect.quotechar)
print(dialect.quoting)
print(dialect.delimiter)

print("---------------")
print("Default")
for l in  csv.reader(text):
    print(l)

print("---------------")
print("Dialect")
for l in  csv.reader(text, dialect):
    print(l)

print("---------------")
print("With params")
for l in  csv.reader(text, quotechar='"', delimiter=',',
                     quoting=csv.QUOTE_ALL, skipinitialspace=True):
    print(l)

