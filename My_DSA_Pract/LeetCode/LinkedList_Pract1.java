import java.util.LinkedList;
class LinkedList_Pract1{
    public static void main(String args[]){

        //Q1) Linked List With 4 Element using add()
        LinkedList <String> lkd=new LinkedList<String>();
        lkd.add("A");
        lkd.add("B");
        lkd.add("C");
        lkd.add("D");
        System.out.println(lkd);

        //Q2 Insert the Node at the end
        lkd.addLast("S");

        //Q3 Display all element of all
        System.out.println(lkd);

        //Q4 Count Element Using Loop
        int count=lkd.size();
        System.out.println("Count : "+count);

        //Q5Search a Element in LinkedList

        String srch="D";
        for( String x : lkd){
          if(x==srch){
                System.out.println("Character Found");
            }
        }

        //Q6 Program to Delete Firstr and Last Node

        lkd.removeFirst();
        lkd.removeLast();
        System.out.println(lkd);

        //Delete a node with given value

        lkd.remove("C");
        System.out.println(lkd);

    }
}