class StackOperation{
    int MAXSIZE=8;
    int stack[]=new int[8];
    int top=-1;

    StackOperation(){
        for(int i=0;i<stack.length;i++){
            stack[i]=0;
        }
    }

    int isFull(){
        if(top<MAXSIZE){
            return 1;
        }
        else{
            return 0;
        }
    }

    void push(int num){
        if(isFull()==1){
            top++;
            stack[top]=num;
            System.out.println("Element is Pushed to Stack :"+num);
        }
        else{
            System.out.println("Stack is Full can't Perform push() Operation");
        }
    }


    int isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    void pop(){
        if(isEmpty()==0){
            System.out.println("Element is Popped from Stack :"+stack[top]);
            stack[top]=0;
            top--;
        }
        else{
            System.out.println("Stack is Empty Can't Perform pop() Operation");
        }
        
    }
    void peek(){
        if(isEmpty()!=1){
            System.out.println("Peek : "+stack[top]);
        }
        else{
            System.out.println("Stact is Empty can't Perform peek() Operation");
        }
    }
}


class Stack{
    public static void main(String args[]){
        StackOperation s=new StackOperation();
        s.push(21);
        s.push(11);
        s.push(12);
        s.pop();
        s.peek();



        System.out.println("\nFinal Stack -");
        for(int i=s.MAXSIZE-1;i>=0;i--){
            if(s.stack[i]!=0){
                System.out.println(s.stack[i]+" ");
            }
        }
    }
}