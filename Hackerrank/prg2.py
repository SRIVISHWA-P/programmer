#Nested Lists
'''Given the names and grades for each student in a class of  students, 
store them in a nested list and print the name(s) of any student(s) having the second lowest grade.

Note: If there are multiple students with the second lowest grade,
 order their names alphabetically and print each name on a new line.'''

#code
if __name__ == '__main__':
    lst=[];index=0;temp_list=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lst.append(list((name,score)))
        temp_list.append(score)
        index+=1
    temp_list.sort()
    large=temp_list[0]
    for i in temp_list:
        if(i>large):
            large=i
            break
    t=[]
    for i in range(index-1,-1,-1):
            if lst[i][1]==large:
                t.append(lst[i][0])
    t.sort()
    for i in t:
        print(i,end="\n")