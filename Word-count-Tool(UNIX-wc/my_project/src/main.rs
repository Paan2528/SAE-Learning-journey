use std::fs;

fn main() {
    let path = "text.txt";

    let content = fs::read_to_string(path).expect("Hi");

    let world_count = content.split_ascii_whitespace().count();

    println!("Anzahl der Wörter: {}", world_count);
}
