// Remove the Duplicate Element From Element

class Problem_04{
    public static void main(String [] args){
        int arr[]={12,32,21,45,12,23,45};
        int count=0;

        int n=arr.length;

        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[i]!=arr[j]){
                    arr[i]=arr[j];
                }else{
                    
                }
            }
        }

        for(int i=0;i<count;i++ ){
            System.out.println(arr[i]);
        }
    }
}