class If_Else{
    public static void main(String []args){
        int num=-21;

        if((num/2)*2==num){
            System.out.println(num+" is Even Number");
        }
        else{
            System.out.println(num+" is Odd Number");

        }

        if(num>0){
            System.out.println(num+" is Positive Number");
        }
        else if(num<0){
            System.out.println(num+" is Negative Number");
        }
        else{
            System.out.println("THe Given Value is Zero ( 0 )");
        }
    }
}