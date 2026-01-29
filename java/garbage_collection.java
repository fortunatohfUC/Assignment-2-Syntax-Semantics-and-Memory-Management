// Java program demonstrating garbage collection

public class GarbageCollectionExample {
    public static void main(String[] args) {
        String s1 = new String("Hello, Java!");  // Object creation
        s1 = null;  // Dereferencing the object, making it eligible for garbage collection

        System.gc();  // Suggesting garbage collection (may not run immediately)
    }
}
