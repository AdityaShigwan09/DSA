//Write a program to find the second largest element in an array.

class Problem_02{
    public static void main(String args[]){
        int arr[]={20,55,21,30,46};
        int n=arr.length;
        int j=0;
        int max=arr[0];
        System.out.print("Array List : ");
        for(int i=0;i<n;i++){
            System.out.print(" "+arr[i]);
        }

        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
                j=i;
            }
        }
        
        arr[j]=0;
        max=arr[0];

        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        System.out.print("\n2nd Largest Number : "+max);
        
    }
}