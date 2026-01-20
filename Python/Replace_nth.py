txt = "abcdefghijk"
n = 3
replace_with = "*"
txt1=""
list1=list(txt)
for x in range(0,len(txt)):
    if(x==n-1):
        list1[x]=replace_with
        n+=3
    txt1+=list1[x]

print(txt1)



keys = ['a', 'b', 'c', 'a']
values = [1, 2, 3, 4]
dict1={}

keys=set(keys)
keys=list(keys)
keys=sorted(keys)

for x in range(0,len(keys)):
    dict1[keys[x]]=values[x]

print(dict1)