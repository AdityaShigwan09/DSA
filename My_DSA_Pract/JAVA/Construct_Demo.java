
class Car{
    String brand;
    int year;
    Car(){
        brand="Unknown";
        year=0;
    }
}

class Employee{
    String name;
    int salary;

    Employee(String name,int salary){
        this.name=name;
        this.salary=salary;
    }

    void displayDetails(){
        System.out.println("Name : "+name+"\nSalary : "+salary+"Rs.");
    }
}

class Rectangle{
    double l;
    double b;
    
    Rectangle(double l,double b){
        this.l=l;
        this.b=b;
    }

    double calArea(){
        return l*b;
    }
}

class Construct_Demo{
    public static void main(String args[]){
        Car c=new Car();
        System.out.println("Brand : "+c.brand+"\nYear : "+c.year);

        Employee e=new Employee("AD",50000);
        e.displayDetails();

        Rectangle r=new Rectangle(20,30);
        double res=r.calArea();
        System.out.println("Area of Rectanngle : "+res);

        // Employee c1=null;
        // c1.displayDetails();     NullPointerException
    }
}

