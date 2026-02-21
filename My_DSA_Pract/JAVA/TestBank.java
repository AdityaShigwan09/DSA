interface Loanable {
    void applyLoan(double amount);
}

abstract class BankAccount {

    String holderName;
    static double bankBalance = 0;

    final void bankInfo() {
        System.out.println("Welcome to ABC Bank");
    }

    BankAccount(String name) {
        this.holderName = name;
    }

    abstract void withdraw(double amount);

    void showHolder() {
        System.out.println(this.holderName);   // BUG 1
    }
}

class SavingsAccount extends BankAccount implements Loanable {

    final double minBalance = 1000;

    SavingsAccount(String name) {
        super(name);
    }

    void withdraw(double amount) {
        if (bankBalance - amount >= minBalance) {
            bankBalance -= amount;
            System.out.println("Withdraw success");
        }
    }

    public void applyLoan(double amount) {   // BUG 3
        System.out.println("Loan applied: " + amount);
    }
}

public class TestBank {

    public static void main(String[] args) {

        BankAccount acc = new SavingsAccount("AD");

        acc.bankInfo();

        acc.withdraw(500);

        Loanable l = new SavingsAccount("Sammy");
        l.applyLoan(20000);

        acc.showHolder();   // BUG 4
    }
}
