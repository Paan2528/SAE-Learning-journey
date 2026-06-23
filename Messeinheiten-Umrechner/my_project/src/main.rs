use std::io;

fn main() {
    loop {
        println!("Hello what do you want to do?");
        println!("1: millimeter -> Zentimeter");
        println!("2: Zentimeter -> Dezimeter");
        println!("3: Dezimeter -> Meter");
        println!("4: Beenden");

        let mut choice = String::new();
        io::stdin().read_line(&mut choice).unwrap();
        let choice = choice.trim();

        if choice == "--back" {
            break;
        }

        println!("Enter number:");

        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        let input = input.trim();
        let number: f64 = input.parse().unwrap();

        let result = match choice {
            "1" => number * 0.5,
            "2" => number * 0.5,
            "3" => number * 0.5,
            "4" => break,

            _ => 0.0,
        };
        println!("{}", result);
    }
}
