# cook your dish here
''' Print the operator which gives the greatest number as a result '''
a=0
b=-1
result = []

result.append(a/b)
result.append(a-b)
result.append(a*b)
result.append(a+b)


cache=0
i=0
for i in range(len(result)):
    for j in range(1,len(result)):
        if result[i] > result[j]:
            cache = i

if result[0]>result[1] and result[0]>result[2]:
    return "/"
if result[1]>result[0] and result[1]>result[2]:
    return "-"
if result[2]>result[0] and result[2]>result[3]:
    return "*"
if result[3]>result[0] and result[3]>result[2]:
    return "+"


