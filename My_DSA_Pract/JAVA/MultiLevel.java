class Person{
    Person(){
        System.out.println("Im Person");
    }
}
class Employee extends Person{
    Employee(){
        System.out.println("Im Employee");
    }
}
class Manager extends Employee{
    Manager(){
        System.out.println("Im Manager");
    }
}

class MultiLevel{
    public static void main(String args[]){
        Manager m=new  Manager();
    }
}