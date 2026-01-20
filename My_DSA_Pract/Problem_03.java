// Reverse the String
class Problem_03{
    public static void main(String args[]){
        String str="Aditya";
        int n=str.length()-1;
        String rev=" ";
        for(int i=n;i>=0;i--){
            rev=rev+str.charAt(i);
        }
        System.out.print(rev);
    }
}