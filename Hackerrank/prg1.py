#Find the Runner-Up Score!
'''Given the participants' score sheet for your University Sports Day, you are required to 
find the runner-up score. You are given n scores. 
Store them in a list and find the score of the runner-up.'''


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int,input().split()))
    arr.sort(reverse=True)
    large=arr[0]
    flag=0
    for i in arr:
        if(i<large):
            print(i)
            flag=1
            break
    if(flag==0):
        print(large)