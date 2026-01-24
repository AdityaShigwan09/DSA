class Method_Demo{

    static void Hello(){
        System.out.println("Hello Java!!!");
    }

    static void SayHello(String name){
        System.out.println("Hello "+name);
    }

    static int Add(int a,int b){
        return a+b;
    }

    static void Even_odd(int num){
        if(num%2==0){
            System.out.println(num+" is Even Number");
        }
        else{
            System.out.println(num+" is odd Number");
        }
    }


    static int reverseNumber(int num){
        int temp=num; //1234
        int rev=0;
        while(temp!=0){
            rev=rev*10+(temp%10);
            temp=temp/10;
        }
        return rev;
    }

    public static void main(String args[]){
        Hello();
        SayHello("King");
        int res=Add(0,12345);
        System.out.println("Addition is "+res);

        Even_odd(res);

        System.out.println("Number is "+res);
        System.out.println(reverseNumber(res));
    }
}