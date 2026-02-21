abstract class Abstract_Demo{
    abstract void Display();
}

class Encapsulation extends Abstract_Demo{
    private String name;

    public void setName(String name){
        this.name=name;
    }

    public void getName(){
        System.out.println("Name : "+name);
    }

    void Display(){
        System.out.println("Name Displayed Successfully");
    }
}


class Oops_pract{
    public static void main(String argap[]){
        Encapsulation e=new Encapsulation();
        Abstract_Demo e1=new Encapsulation();

        e.setName("AD");
        e.setName("Sammy");

        e.getName();
        e1.Display();
    }
}