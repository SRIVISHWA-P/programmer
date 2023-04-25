#Value equal to index value

class Solution:

	def valueEqualToIndex(self,arr, n):
	    l=len(arr)
	    temp=[]
	    for i in range(l):
	        if arr[i]==i+1:
	            temp.append(i+1)
	    return temp
	           
