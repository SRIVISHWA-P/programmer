# Two sum
"""Given an array of integers nums and an integer target, return indices 
of the two numbers such that they add up to target."""


nums = []


# populating the array
n = int(input("How many elements will you enter :"))
for i in range(n):
    e = eval(input("Enter the element %d :" % (i + 1)))
    nums.append(e)
print("The elements of the array :")
for j in nums:
    print(j, end=" ")


target = int(input("\nEnter tour target:"))
d = {}
for i, j in enumerate(nums):
    r = target - j
    if r in d:
        print([d[r], i])
        break
    d[j] = i
else:
    print("No match found")
