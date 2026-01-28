class Shape{
    void Area(){
        System.out.println("Enter Value to find Area!!");
    }
}

class Circle extends Shape{
    @Override
    void Area(){
        System.out.println("calculating Area of Circle");
    }
}

class Rect extends Shape{
    @Override
    void Area(){
        System.out.println("calculating Area of Rectangle");
    }
}

class MethodOverriding{
    public static void main(String args[]){

        Shape c=new Circle();
        Shape r=new Rect();

        c.Area();
        r.Area();
    }
}