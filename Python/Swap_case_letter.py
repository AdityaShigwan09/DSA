txt="PythonRocks"
txt=txt.lower()
list1=list(txt)

for x in range(0,len(txt)):
    if(x%2==1):
        list1[x]=list1[x].upper()

txt=""
for x in list1:
    txt+=x; 
print(txt)



num=15
list1=[]
for x in range(1,15):
    if(x%3==0 or x%5==0):
        list1.append(x)

print(list1)


list2=[1,2,3,4,5]
k=1

list3=list2[k+1:]+list2[:k+1]
print(list3)
