

public class PassByReference {
    private int i;

    public PassByReference(int i) { this.i = i; }
    public void setI(int i) { this.i = i; }
    public String toString() { return "" + i; }

    public static void main(String[] args) {
        int j=3;
        System.out.println("" + j) ;
        PassByReference.f(j);
        System.out.println("" + j) ;

        System.out.println("==================================");

        PassByReference pbr = new PassByReference(3);
        System.out.println(pbr.toString());
        g(pbr);
        System.out.println(pbr.toString());

        
        System.out.println("==================================");
        //Integer intObj = new Integer(3); // deprecated, used cached object
        Integer intObj = Integer.valueOf(3);
        System.out.println("" +  intObj) ;
        intObj = 99;
        System.out.println("" + intObj) ;
        h(intObj);
        System.out.println("" + intObj) ;
                    
    }

    public static void f(int i) { 
        System.out.println("f:" + i) ;
        i = 99;
        System.out.println("f:" + i) ;
    }

    public static void g(PassByReference pbr) { 
        System.out.println("g:" + pbr) ;
        pbr.setI(99);
        System.out.println("g:" + pbr) ;
    }

    public static void h(Integer intObjectReference) {
        System.out.println("h:" + intObjectReference) ;
        intObjectReference = 3;
        System.out.println("h:" + intObjectReference) ;
        //intObjectReference = new Integer(3); // deprecated
        intObjectReference = Integer.valueOf(3);
        System.out.println("h:" + intObjectReference) ;
    }
    
}
