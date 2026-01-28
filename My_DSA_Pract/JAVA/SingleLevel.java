class Vehicle{
    Vehicle(){
        System.out.println("Vehicle");
    }
    void start(){
        System.out.println("Starting....");
    }
}

class Bike extends Vehicle{
    void ride(){
        System.out.println("Riding.....");
    }
}


class SingleLevel{
    public static void main(String args[]){
        Bike b=new Bike();
        b.start();
        b.ride();
    }
}