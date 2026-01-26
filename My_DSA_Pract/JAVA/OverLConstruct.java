class OverLConstruct{
    OverLConstruct(){
        System.out.println("Constructor Without Arguments");
    }

    OverLConstruct(String word){
        System.out.println("\nConstructor with One Argument");
        System.out.println("Hello "+word);
    }

    OverLConstruct(String word, int n){
        System.out.println("\nConstructor with Two Argument");
        System.out.println("Hello "+word+"\nNumber "+n);
    }

    public static void main(String args[]){
        new OverLConstruct();
        new OverLConstruct("Samiksha");
        new OverLConstruct("Samiksha",9561);
    }
}

