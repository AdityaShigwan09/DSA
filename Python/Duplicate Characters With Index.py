# Duplicate Characters With Index Given a string, 
# print all characters that appear more than once along with their indices.

txt="programming"
key=set(txt)
l=[]
key=list(key)
index=[]
index2=[]
print(txt)
for x in range(0,len(txt)):
    count=0
    for y in range(1,len(txt)):
        if(txt[x] == txt[y]):
            count+=1
            
    index.append(count)
    if(index[x]>1):
        l.append(x)
        index2.append(txt[x])
        

print(index2,"\n",l)