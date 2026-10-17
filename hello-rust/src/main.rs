// The greatest common divisor algorithm

use std::io::Write;
use std::str::FromStr;

fn gcd(mut m: u64, mut n: u64) -> u64{
    assert!(n != 0 && m != 0);
    while m != 0 {
        if m < n {
            let temp: u64 = m;
            m = n;
            n = temp;
        } // Swap the m and n, when m % n.
        m = m % n;
    }
    return n;
}

#[test]
fn test_gcd(){
    assert_eq!(gcd(14, 15), 1);
    assert_eq!(gcd(2 * 3 * 5 * 11 * 17,
            3 * 7 * 11 * 13 * 19),
            3 * 11);
}

fn main(){
    println!("Hello, world!");

    let age: u32 = 18;
    let name = "Lynn";
    let subject: &str = "English";
    let score = 80;
    println!("{name}'s age is {age} and her {subject} gets {score}!");

    let a: u64 = 255;
    let b: u64 = 65525;
    let results: u64 = gcd(a, b);
    println!("gcd's results of {a} and {b} is {results}");

    let mut numbers: Vec<u64> = Vec::new();
    for arg in std::env::args().skip(1){  // Iterator exclude one element (The first value)
                                          // `u64` in Rust also a `Format namespace`
        numbers.push(u64::from_str(&arg)  // Return a `Result` format
            .expect("error parsing argument"));
            }
    if numbers.len() == 0{
        writeln!(std::io::stderr(), "Usage: gcd NUMBER ...").unwrap();
        std::process::exit(1);
    }

    let mut d = numbers[0];
    for m in &numbers[1..]{
        d = gcd(d, *m);
    }

    println!("The greatest common divisor of {:?} is {}",
        numbers, d);

}
