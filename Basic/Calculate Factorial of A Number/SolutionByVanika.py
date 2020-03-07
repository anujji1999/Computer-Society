# -*- coding: utf-8 -*-
"""
Created on Sat Mar  7 22:29:00 2020

@author: Vanika
"""
#factorial
N = int(input("Enter number"))
for i in range(1,N+1):
	if N>1:
		i*=i-1
print(i)
