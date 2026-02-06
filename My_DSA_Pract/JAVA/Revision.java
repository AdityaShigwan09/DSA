
abstract class Emp{
    String name;
    Emp(String name){
        this.name=name;
    }
    abstract double calculate();
    void displayName(){
        System.out.println("Name : "+name);
    }
}

class FullTimeEmp extends Emp{
    double monthsal;
    FullTimeEmp(String name,double sal){
        super(name);
        this.monthsal=sal;
    }
    double calculate(){
        return monthsal;
    }
}

class PartTimeEmp extends Emp{
    int hourswork;
    double rateperhour;
    PartTimeEmp(String name,int hourswork,double rateperhour){
        super(name);
        this.hourswork=hourswork;
        this.rateperhour=rateperhour;
    }
    double calculate(){
        return hourswork*rateperhour;
    }
}

class Revision{
    public static void main(String args[]){
        Emp e1=new FullTimeEmp("AD",2000);
        Emp e2=new PartTimeEmp("King",40,200);

        e1.displayName();
        System.out.println("Salary"+e1.calculate());

        e2.displayName();
        System.out.println("Salary"+e2.calculate());

    }
}