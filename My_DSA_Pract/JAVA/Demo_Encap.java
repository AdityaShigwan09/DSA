class Demo{
    private String name;
    private String no;

    public void setName(String name){
        this.name=name;
    }

    public void setNo(String no){
        this.no=no;
    }

    public String getName(){
        return name;
    }
    public String getNo(){
        return no;
    }

}

class Demo_Encap{
    public static void main(String args[]){
        Demo obj=new Demo();
        obj.setName("Aditya");
        obj.setNo("9011092914");

        System.out.println("Name "+obj.getName());
        System.out.println("No "+obj.getNo());

    }
}