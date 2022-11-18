#1) Get the three sides of a triangle and check if it is equilateral, isosceles or scalene.
x=int(input("Enter the first side(in cms):"))
y=int(input("Enter the second number(in cms) :"))
z=int(input("Enter the third number(in cms) :"))
if(x==y and y==z):
    print("\nThe triangle formed by the given sides is equilateral")
elif(x==y or y==z or z==x):
    print("\nThe triangle formed by the given sides is isosceles")
else:
    print("\nThe triangle formed by the given sides is scalene")