class Test <A, B, C>
{
    A set1; //An object of type A
    B set2; //An object of type B
    C set3; //An object of type C
    // constructor 
    Test(A set1, B set2, C set3)
    {
        this.set1 = set1;
        this.set2 = set2;
        this.set3 = set3;
    }
    // To print objects of A,B and C
    public void print()
    {
        System.out.println(set1 + "\t\t" + set2 + "\t\t" + set3);
    }
}
public class linkedlist {
    public static void main(String[] args) 
    {
        System.out.println("------------------------------------------------");
        Test <Integer, Integer, String> objA = new Test <Integer,Integer,String> (18,10861,"Virat");
        objA.print();
        Test <String, Integer, Integer> objB = new Test <String, Integer, Integer> ("Sachin",10,18426);
        objB.print();
        Test <Integer, String, Integer> objC = new Test <Integer, String, Integer> (7,"Dhoni",10534);
        objC.print();
        Test <Integer, Integer, String> objD = new Test <Integer, Integer, String> (10201,333,"Gayle");
        objD.print();
        Test <String, Integer, Integer> objE = new Test <String, Integer, Integer> ("ABD",9577,17);
        objE.print();
        System.out.println("------------------------------------------------");
    }
}
