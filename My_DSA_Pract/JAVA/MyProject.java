//STEP 1 — Create an Interface
interface Workable{
    // Add one abstract method called work.
    public void work();
}


// STEP 2 — Create Abstract Class (Person)
abstract class Person{
    private String name;            //Private variable: name
    protected int id;               // Protected Variable id
    static String company_name="Imperial Studio";     // Static variable : Company name


    Person(String name,int id){
        this.name=name;             //Constructor to initialize name and id
        this.id=id;
    }


    public String getName(){
        return name;                //Constructor to initialize name and id
    }
    abstract double calculateSalary();   //One abstract method: calculateSalary

    final public void info(){
        System.out.println(company_name);       // One abstract method: calculateSalary
    }
}


// STEP 2 — Create Abstract Class (Person)

abstract class Employee extends Person implements Workable{     // Inherit from Person & Implement Workable
    protected double base_sal;                                   // Add Protecte Variable  Base Salary
    static int emp_count=0;                                     // Add Static variabke employee count
    Employee(String name,int id,double base_sal){                //Create Consturctor
        super(name,id);                                                 // Calling Parent Constructor
        this.base_sal=base_sal;                                         // Initialize Base Salary
        emp_count++;                                                    //Increase Employee Count
    }
    static int totalEmpCount(){
        return emp_count;
    }

    double calculateSalary(){
        return base_sal;
    }

}

// STEP 4 — Create Developer Class

class Developer extends Employee{
    private int OverTimeHrs;
    Developer(String name,int id,double base_sal,int OverTimeHrs){
        super(name,id,base_sal);
        this.OverTimeHrs=OverTimeHrs;
    }
    public void work(){
        System.out.println("Developer is Working!");
    }

    double calculateSalary(){
        return base_sal+(OverTimeHrs*1000);
    }   

}

class Manager extends Employee {
    private int team_size;
    Manager(String name,int id,double base_sal,int team_size){
        super(name,id,base_sal);
        this.team_size=team_size;
    }
    public void work(){
        System.out.println("Manager is Working !!!");
    }
    double calculateSalary(){
        return base_sal+team_size*2000;
    }
}


class MyProject{
   public static void main(String args[]){
        Person pd=new Developer("Aditya",21,20000.0,48);
        Person pm=new Manager("Samiksha",9,30000.0,24);
        pm.info();
        System.out.println(pd.calculateSalary());
        System.out.println(pm.calculateSalary());

        System.out.println("Total Empployee : "+Employee.totalEmpCount());
   } 
}