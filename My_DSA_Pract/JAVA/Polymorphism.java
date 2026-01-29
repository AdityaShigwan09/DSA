//Compile-Time Polymorphism (Method Overloading)

class LoginSystem{
    void login(String user,String pass){
        System.out.println("Username : "+user+"\nPassword : "+pass);
    }

    void login(String no,int otp){
        System.out.println("\nPhone No : "+no+"\nOTP : "+otp);
    }
}


class Polymorphism{
    public static void main(String args[]){
        LoginSystem l=new LoginSystem();
        l.login("Aditya","ADs@2003");
        l.login("9011092914",9112003);

    }
}