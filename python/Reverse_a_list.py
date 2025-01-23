# This is a very simple problem of reversing a list which has been asked in many companies.

def reverse_list(lst):
    n=len(lst)
    arr=[]
    for i in range(n-1,-1,-1):
       arr.append(lst[i])
    
    return arr