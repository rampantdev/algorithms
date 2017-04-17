#an efficient implementation of the GCD from the following stack overflow post: 
#http://stackoverflow.com/questions/16628088/euclidean-algorithm-gcd-with-multiple-numbers

from math import gcd

lis = (35,40,60,70)

res = gcd(*lis[:2])  #get the gcd of first two numbers

for x in lis[2:]:    #now iterate over the list starting from the 3rd element
    res = gcd(res,x)

print(res)
