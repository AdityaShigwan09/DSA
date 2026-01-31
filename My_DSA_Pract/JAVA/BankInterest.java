Create abstract class Bank with method getInterestRate()
Create child classes:

SBI

HDFC

ICICI
Each returns different interest rate.

abstract class Bank{
    abstract void getInterestRate();
}

class SBI extends Bank{
    void getInterestRate(){
        System.out.println("Interest Rate : 17%");
    }
}
class HDFC extends Bank{
    void getInterestRate(){
        System.out.println("Interest Rate : 21%");
    }
}
class ICIC extends Bank{
    void getInterestRate(){
        System.out.println("Interest Rate : 50%");
    }
}

class BankInterest{
   public static void main(String args[]) {
        Bank b=new SBI();
        Bank b1=new HDFC();
        Bank b2=new ICIC();

        b.getInterestRate();
        b1.getInterestRate();
        b2.getInterestRate();

   }
}