use std::collections::HashMap;
use std::io;
use std::ptr::read_volatile;

#[derive(Hash, Eq, PartialEq, Debug)]
struct DataMitarbeit {
    name: String,
    rolle: String,
}

// build data
fn main() {
    let mut data_Mitarbeit = HashMap::new();
    loop {
        let mut name = String::new();
        let mut rolle = String::new();

        println!("Name:");
        io::stdin().read_line(&mut name).unwrap();

        println!("Rolle:");
        io::stdin().read_line(&mut rolle).unwrap();

        //check
        let person = DataMitarbeit {
            name: name.trim().to_string(),
            rolle: rolle.trim().to_string(),
        };

        if data_Mitarbeit.contains_key(&person) {
            println!(
                "You are {}! and your work is {}! Your data was recoding",
                name, rolle
            );
        } else {
            data_Mitarbeit.insert(person, 30);
            println!("You're new hier!");
        }
    }
    return;
}
