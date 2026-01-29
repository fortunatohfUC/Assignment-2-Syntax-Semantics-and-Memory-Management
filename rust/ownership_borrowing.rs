// Rust program demonstrating ownership and borrowing

fn main() {
    let s1 = String::from("Hello, Rust!"); // Ownership is moved
    let s2 = &s1; // Borrowing the string reference

    println!("Original: {}", s1); // s1 can no longer be used
    println!("Borrowed: {}", s2);
}
