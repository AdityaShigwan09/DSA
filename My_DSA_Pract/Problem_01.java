//Write a program to find the largest element in an array.

class Problem_01{
    public static void main(String args[]){
        int arr[]={20,55,21,30,46};
        int n=arr.length;
        int max=arr[0];
        System.out.print("Array List : ");
        for(int i=0;i<n;i++){
            System.out.print(" "+arr[i]);
        }

        for(int i=1;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        System.out.print("\nLargest Number : "+max);
        
    }
}