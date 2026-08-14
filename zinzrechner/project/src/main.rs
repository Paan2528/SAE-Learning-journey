use std::fs;
use std::io;

fn main() {
    fn zinsen_calculate(prinzip: f64, period: f64, _Zin_Cal: f64) -> f64 {
        // Calculate witn simple Interest

        let total_zin: f64 = prinzip * (_Zin_Cal / 100.0) * (period / 12.0);
        let total_debet: f64 = prinzip + total_zin;

        println!("{}", total_debet);

        total_debet
    }

    println!("Zinzrechner");
    println!("A: 5% Zinsen ");
    println!("B: 10% Zinsen ");
    println!("C: 15% Zinsen ");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("can't get input data");

    let mut input: char = 'A';

    if matches!(input, 'A' | 'B' | 'C') {
        println!("Amount required (euro): ");
        let mut input_principle_need = String::new();
        io::stdin()
            .read_line(&mut input_principle_need)
            .expect("Can't get principla need for calculate");

        println!("Required payment period (monthly): ");

        let mut input_payment_period = String::new();
        io::stdin().read_line(&mut input_payment_period).expect("Can't get payment period");

        let prinzip: f64 = input_principle_need.trim().parse().expect("Please input only number!");
        let period: f64 = input_payment_period.trim().parse().expect("Please input only number! ");

        let _Zin_Cal: f64 = if input == 'A' { 5.0 } else if input == 'B' { 10.0 } else { 15.0 };

        let total = zinsen_calculate(prinzip, period, _Zin_Cal);
        let montly_payment = total / period;

        println!("------------------------------------------");
        println!(" ");
        println!("Principle: {} €", prinzip);
        println!("Period: {} month", period);
        println!("Total amount: {} €", total);
        println!("Mountly Payment: {:.0} €/mont", montly_payment);
        println!(" ");
        println!("------------------------------------------");
    }
}
