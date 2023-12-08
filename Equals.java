

public class Equals {
    private int i;

    public Equals(int i) { this.i = i; }
    public void setI(int i) { this.i = i; }
    public String toString() { return "" + i; }
    public boolean equals(Equals o) {return i == o.i;}
    public static void main(String[] args) {

        int i=3;
        if (i == 3) { System.out.println("primitive ==\n"); }

        Equals e = new Equals(3);
        Equals f = new Equals(3);
        if (e == e ) { System.out.println("object e==e\n"); }
        if (e == f ) { System.out.println("object ==\n"); }
        if (e.equals(f)) { System.out.println("object equals()\n"); }

    }

}
