import re
import os
import numpy as np
import pandas as pnd

arr = np.array([1, 2, 3])
print("Array with Rank 1: \n",arr)
data = {'Name':['Tom', 'nick', 'krish', 'jack'],
        'Age':[20, 21, 19, 18]}
df = pnd.DataFrame(data)
print(df)
print("shubham pandey")

name = input("Enter first name")
date = input("Enter birth date")
print(name+date)