MAXSIZE = 8
stack = [0] * MAXSIZE
top = -1

def isfull():
    if(top == MAXSIZE):
        return 1
    else:
        return 0

def push(data):
    global top
    if(isfull() != 1):
        top = top + 1
        stack[top] = data
    else:
        print("Stacl is Full")
    return data


def isEmpty():
    if(top==-1):
        return 1
    else:
        return 0


def pop():
    global top
    if(isEmpty()!=1):
        data=stack[top]
        top=top-1
        return data
    else:
        print("Stack is Empty")


def peek():
    global top
    return stack[top]


push(44)



for i in range (MAXSIZE):
    print(stack[i])
print("\nElements popped: ",pop())


print("Stack is Full :","true" if isEmpty() else "false")
print("\nPeek ",peek())
