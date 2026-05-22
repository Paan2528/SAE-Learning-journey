



fn guss(){

let my_num: i32 = 59;
let guss_num: i32 = 59;

println!("Guss the Number is {}", guss_num);


if guss_num < 59 {
    println!("It's more then {}" , guss_num);
}else if guss_num > 59 {
    println!("It's less then {}" , guss_num);
}else if guss_num == 59 {
    println!("{} is correct!", guss_num);
}

}

 



fn main() {
 guss();   
}
