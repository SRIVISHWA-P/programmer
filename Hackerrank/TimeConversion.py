#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    if s[len(s)-2:len(s)]=="PM":
        if s[:2] == "12":
            return s[:len(s)-2]
        else:
            time = int(s[:2]) + 12
            return str(time)+s[2:len(s)-2]
    elif s[len(s)-2:len(s)]=="AM":
        if s[:2] == "12":
            return "00:"+s[3:len(s)-2]
        else:
            return s[:len(s)-2]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
