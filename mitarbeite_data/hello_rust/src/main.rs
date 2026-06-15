use std::collections::HashMap;

#[derive(Hash, Eq, PartialEq, Debug)]
struct DataMitarbeit {
    name: String,
    rolle: String,
}
// build data
fn main(){
    let data_Mitarbeit = HashMap::from([
    (
        DataMitarbeit{
            name: "Janjira".to_string(),
            rolle: "marketing".to_string(),
        },
        30,
    ),
]);



//check
let check_data = DataMitarbeit{
    name: "Janjira".to_string(),
    rolle: "marketing".to_string(),
}; 
    if data_Mitarbeit.contains_key(&check_data){
        println!("{:?}", data_Mitarbeit.get(&check_data));
    }else {
        println!("Not Found")
    }
println!("{:?}", data_Mitarbeit.contains_key(&check_data));
}