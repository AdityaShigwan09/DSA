
class B{

    B(This_used a){
        a.sayHello();
    }
}

class This_used{
    This_used(){
        B obj=new B(this);
    }
    void sayHello(){
        System.out.println("Said Heyllo!!");
    }
    public static void main(String args[]){
        This_used t=new This_used();
    }
}


