class EmployeeSal{
    double calculateSal(){
        System.out.println("Value Not Found");
        return 0.0;
    }
}

class FullTimeEmp extends EmployeeSal{
    @Override
    double calculateSal(){
        return 20000.00;
    }

}

class PartTimeEmp extends EmployeeSal{
    @Override
    double calculateSal(){
        return 7000.00;
    }
   
}

class Polymorphism2{
    public static void main(String args[]){
        EmployeeSal s=new FullTimeEmp();
        EmployeeSal s1=new PartTimeEmp();

        System.out.println(s.calculateSal());
        System.out.println(s1.calculateSal());

    }
}