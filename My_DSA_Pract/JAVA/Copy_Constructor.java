class Copy_Constructor{
    String name;
    int num;
    Copy_Constructor(String name,int num){
            this.name=name;
            this.num=num;
    }

    Copy_Constructor(Copy_Constructor c){
        this.name=c.name;
        this.num=c.num;
    }
    void display(){
        System.out.println(name+" "+num);
    }

    public static void main(String [] args){
        Copy_Constructor c1=new Copy_Constructor("AD",21);   // Parameterised Constructor
        Copy_Constructor c2=new Copy_Constructor(c1);       //Copy Constructor

        c1.display();
        c2.display();
    }
}