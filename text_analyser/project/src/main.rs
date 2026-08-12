use std::fs;
use std::io;

fn main() {
    loop {
        println!("Words to search for ....");
        let content = fs::read_to_string("text.txt").expect("can't read file");

        //input word

        let mut search_text = String::new();
        io::stdin().read_line(&mut search_text).expect("Can't read input");
        let search_text = search_text.trim();

        //search every single word

        let words: Vec<&str> = content.split_whitespace().collect();
        let mut result_words: Vec<String> = Vec::new();
        let mut found_count = 0;

        for word in &words {
            let word = word.trim_matches(|c: char| !c.is_alphanumeric());
            if word.eq_ignore_ascii_case(&search_text) {
                result_words.push(format!("[{}]", word));
                found_count += 1;
            } else {
                result_words.push(word.to_string());
            }
        }

        let result_text = result_words.join(" ");
        println!("{}", result_text);

        if found_count == 0 {
            println!(" ");
            println!("Not found that word **{}**", search_text);
        } else {
            println!(" ");
            println!("Fount {}", found_count);
        }

        println!("**** {} ****", &search_text);
        println!(" ");
    }
}
