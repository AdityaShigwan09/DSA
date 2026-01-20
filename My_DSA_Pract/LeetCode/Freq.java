import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
class Freq{
    public static void main(String args[]){
        HashMap <Character,Integer> hm=new HashMap<>();
        String str;
        int count=1;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter The String : ");
        str=sc.next();
        char chr[]=str.toCharArray();

        for(int i=0;i<chr.length;i++){
            count=1;
            for(int j=0;j<chr.length;j++){
                if(chr[i]==chr[j]){
                    hm.put(chr[i],count);
                    count++;
                }
            }
        }
  
        for(Map.Entry<Character,Integer> e:hm.entrySet()){
            System.out.println(e.getKey()+" "+e.getValue());
        }   
    }
}