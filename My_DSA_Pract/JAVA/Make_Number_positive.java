class Make_Number_positive{
    public static void main(String [] args){
        int num= -2000;
        int count=0;

        if(num<0){

            System.out.println("Number is Negative \nProceeding with Operation.... !!!");

            System.out.println("Negative Number : "+num);

            for(int i=num ;i<=-1;i++){
                count+=1;
            }
            System.out.println("Coverting.....");
            System.out.println("Positive Number : "+count);
        }
        else{
            System.out.println("Number is Positive No need any operation");
        }
    }
}