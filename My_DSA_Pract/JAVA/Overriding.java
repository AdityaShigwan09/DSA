class Noname{
    public String getName(){
        return "Name is Not Entered";
    }
}


class Name extends Noname{
    private String name;

    public void setName(String name){
        this.name=name;
    }

    @Override
    public String getName(){
        if(name==null || name.isEmpty()){
            return super.getName();
        }
        return "Name : "+name;
    }
}



class Overriding{
    public static void main(String args[]){
        Name n=new Name();
        n.setName("");
        System.out.println(n.getName());
    }
}