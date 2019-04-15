''' 
    QUESTION: increment alphabet if letter repet even times lese decrement by 1
'''
    
    def solve(self, A, B):
        chars = "abcdefghijklmnopqrstuvwxyz"
        TEMP_A=[]
        Answer=""
        count=0
            
        for j in chars:
            for i in A:
                count = A.count(i)
                if count%2==0:
                    c = 122-ord(i)
                    #print(c," ",ord(a))
                    
                    
                    if(ord(i)+B <=122):
                        TEMP_A.append(chr(ord(i) + B))
                    
                    else:
                        if(B>c):
                            d = B-c-5
                            TEMP_A.append(chr(ord('a') + d))
                elif count%2 > 0:
                    c = 122-ord(i)
                    #print(c," ",ord(a))
                    
                    
                    if(ord(i)+B <=122):
                        TEMP_A.append(chr(ord(i) +B))
                    
                    else:
                        if(B>c):
                            d = B-c-5
                            TEMP_A.append(chr(ord('a') +d))
        
            return Answer.join(TEMP_A)
        