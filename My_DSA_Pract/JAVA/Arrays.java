class Arrays{
    public static void main(String args[]){
        int num[]={0};
        int num2[]={1};
        int num3[]=new int[1];
        int k=0;

        for(int i=0;i<num.length;i++){
            if(num[i]!=0){
                num3[k]=num[i];
                k+=1;
            }
        }

        for(int i=0;i<num2.length;i++){
            if(num2[i]!=0){
                num3[k]=num2[i];
                k+=1;
            }
        }

// Bubble Sort Array

         for(int i=0;i<num3.length;i++){
            for(int j=0;j<num3.length;j++){
                if(num3[i]<num3[j]){
                    int temp=num3[i];
                    num3[i]=num3[j];
                    num3[j]=temp;
                }
            }
         }   


        for(int i=0;i<num3.length;i++){
            System.out.print(num3[i]+" ");
        }
    }
}