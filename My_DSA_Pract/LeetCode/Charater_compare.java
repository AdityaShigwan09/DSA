class Charater_compare{
    public static void reverseString(char[] s) {
        int n=s.length;
        char s1[]=new char[n];
        int j=0;
        for(int i=n-1;i>=0;i--){
            s1[j]=s[i];
            j++;
        }
        System.out.print("[");
        for(int i=0;i<n;i++){
            System.out.print("\"");
            System.out.print(s1[i]);
            System.out.print("\",");
        }
        System.out.print("]");

    }

    public static void main(String args[]){
        String a="hello";
        char c[]=a.toCharArray();
        reverseString(c);
    }
}