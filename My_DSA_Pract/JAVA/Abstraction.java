abstract class KeyBoard{
    abstract void KeyPressed();
}

class PressA extends KeyBoard{
    void KeyPressed(){
        System.out.println("KeyPressed A");
    }
}

class PressS extends KeyBoard{
    void KeyPressed(){
        System.out.println("KeyPressed S");
    }
}

class Abstraction{
public static void main(String args[]){
        KeyBoard ka=new PressA();
    KeyBoard ks=new PressS();

    ka.KeyPressed();
    ks.KeyPressed();
}
}