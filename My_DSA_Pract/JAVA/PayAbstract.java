abstract class Payment {
    abstract void pay(double amount);

    void msg(String msg){
        System.out.println(msg);
    }
}


class CreditCardPayment extends Payment {
    void pay(double amount){
        if(amount > 0){
            msg("₹" + amount + " payment is processing through Credit Card");
        } else {
            msg("Invalid amount for Credit Card payment");
        }
    }
}

class UPIPayment extends Payment {
    void pay(double amount){
        if(amount > 0){
            msg("₹" + amount + " payment is processing through UPI");
        } else {
            msg("Invalid amount for UPI payment");
        }
    }
}

class CashPayment extends Payment {
    void pay(double amount){
        if(amount > 0){
            msg("₹" + amount + " payment received in Cash");
        } else {
            msg("Invalid cash amount");
        }
    }
}

public class PayAbstract {
    public static void main(String[] args) {

        Payment p1 = new CreditCardPayment();
        Payment p2 = new UPIPayment();
        Payment p3 = new CashPayment();

        double amount = 0.00;

        p1.pay(amount);
        p2.pay(amount);
        p3.pay(amount);
    }
}
