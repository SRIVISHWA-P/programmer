#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    count_dict = {0:0,1:0,2:0}
    for i in arr:
        if i>0:
            count_dict[0]+=1
        elif i<0:
            count_dict[1]+=1
        elif i==0:
            count_dict[2]+=1
    for j in count_dict.values():
        print(j/len(arr))
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
