import re

#1
# pattern=r"\d+"
# txt="Cost is 150 rupees and tax is 18%."
# print(re.findall(pattern,txt))


#2

pattern=r"\b[A-Z][A-Z|a-z]*"
txt="India is My Country and AD is My Name."
print(re.findall(pattern,txt))


#3

# txt="A_D#21@python!"
# pattern=r"[\_\W]"
# print(re.findall(pattern,txt))

#4
# txt="a,b,c,d,e"
# print(re.sub(","," ",txt))

#5
# txt="Regular Expressions Are Powerful"
# pattern="[aeiouAEIOU]"
# print(re.findall(pattern,txt))

#6
# txt=["test@gmail.com"," wrong@gmail.com", "user_09@yahoo.in","@nope.com"]
# res=[]

# pattern=r"^[\w\.-]+@[\w\.-]+\.\w+$"


# for x in txt:
#     if re.findall(pattern,x):
#         res.append("true")
#     else:
#         res.append("false")

# print(txt,"\n",res)


txt="1#python, #coding, #AI2025, and ##invalid."
pattern=r"(?<!#)#[A-Za-z0-9]+"
print(re.findall(pattern,txt))
