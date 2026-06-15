use std::collections::HashMap;

#[derive(Hash, Eq, PartialEq, Debug)]
struct DataMitarbeit {
    name: String,
    rolle: String,
}
// build data

let dataMitarbeit = HashMap::from([
    (
        DataMitarbeit{
            name: "Janjira".to_string(),
            rolle: "marketing".to_string(),
        },
        30,
    )
])

//check
let check_data = dataMitarbeit{
    name: "Janjira".to_string(),
    rolle: "marketing".to_string(),
    if DataMitarbeit.contains_key(&check_data){
        println!("{}", DataMitarbeit.get(&check_data));
    }else {
        println!("Not Found")
    }
};
println!("{}", DataMitarbeit.contains_key(&check_data));