

use std::io;

fn guss(){

let my_num: i32 = 59;

let mut input =  String::new();

println!("Guss the Number is...?");

io::stdin()
    .read_line(&mut input)
    .expect("Failed to read line");
let guss_num: i32 = input
    .trim()
    .parse()
    .expect("Please enter a valid number");



if guss_num < 59 {
    println!("It's more then {}" , guss_num);
}else if guss_num > 59 {
    println!("It's less then {}" , guss_num);
}else if guss_num == 59 {
    println!("{} is correct!", guss_num);
}else{
    println!("Pleasse put the number only.")
}

}

 



fn main() {
 guss();   
}
