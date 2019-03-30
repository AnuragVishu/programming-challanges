# QUESTION - Longest Palindrome in a String

# Topic Tags    -     Accolite    Amazon    Groupon    Microsoft
# =====================================================================
# Given a string S, find the longest palindromic substring in S.

# Substring of string S:
# S[ i . . . . j ] where 0 ≤ i ≤ j < len(S)

# Palindrome string:
# A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S.
# Incase of conflict, return the substring which occurs first ( with the least starting index ).

# Input:
# The first line of input consists number of the test cases. The following T lines consist of a string each.

# Output:
# In each separate line print the longest palindrome of the string given in the respective test case.

# Constraints:
# 1 ≤T≤ 100
# 1 ≤ str≤ 100

# Example:

# Input:
# 1
# aaaabbaa

# Output:
# aabbaa

# SOURCE - http://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0

tt = int(input())
while tt>0:
    s = input()
    #print(s)
    cache = ''
    ans = ''
    s1 = ''
    s2=''
    lis = []
    temp=''
    if(s == s[::-1]):
        lis.append(s)
    
    for k in range(0,len(s)+1):
        for l in range(0,len(s)+1):
            cache = (s[k:l])
            #print(cache)
            if(cache == cache[::-1]):
                if(cache != ''):
                    lis.append(cache)
    #print(lis)
    lis = lis[::-1]
    for i in range((len(lis)-1)):
        s1=lis[i]
        s2=lis[i-1]
        #print("s1: ",s1," ",len(s1),",  s2: ",s2," ",len(s2))
        if len(s1) >= len(s2):
            if len(temp) <= len(s1):
                if len(s1) == 1:
                    temp=lis[len(lis)-1]
                else:
                    temp=s1
    
    print(temp)
    tt=tt-1
