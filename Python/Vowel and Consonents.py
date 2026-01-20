txt = "Python Programming"
vowel="aeiou"
count=0
n=0
for x in txt:
    if x in vowel:
        count+=1
    if x==' ':
        n+=1

print("Vowel :",count,"\nConsonant :",len(txt)-count-n)



sen = "Hello world this is Python"
list1=[]
y=0
for x in range(0,len(sen)):
    if sen[x]==' ':
        list1.append(sen[y:x])
        y=x+1
    if sen[x]==sen[-1]:
        list1.append(sen[y:x+1])
        
print(list1)

temp=list1[0]
list1[0]=list1[len(list1)-1]
list1[len(list1)-1]=temp

print(list1)
sen="" 
for x in list1:
    sen+=x+" "

print(sen)
