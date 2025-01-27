def reverse_string(s):
    n=len(s)
    
    string=""
    
    
    for i in range(n):
        string=string+str(s[n-1-i])
        
    return string
