using System.Reflection.Metadata;
using System.Text.Json;
namespace Serialisation;
using System.Text.Json;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Bookshelf A");
        Book myBook = new Book();
        myBook.Name = "We used to live here";
        myBook.Price = 250.0;
        myBook.Quantity = 15;
        myBook.InShelf = true;
        myBook.typeBook = ["Dark", "Investigate", "Fantasy"];

        Book myBook2 = new Book();
        myBook2.Name = "Before sunset";
        myBook2.Price = 275;
        myBook2.Quantity = 18;
        myBook2.InShelf = true;
        myBook2.typeBook = ["Romantic, Drama, Love"];
        
        
        Console.WriteLine($"Name: {myBook.Name}");
        Console.WriteLine($"Price: {myBook.Price}");
        Console.WriteLine($"Quantity: {myBook.Quantity}");
        Console.WriteLine($"Shelf: {myBook.InShelf}");
        Console.WriteLine($"Type: {string.Join(", ", myBook.typeBook)}");// string.join make all allay in one line and squeeze with ","

        var option = new JsonSerializerOptions { WriteIndented = true};   // Object to String (JSON)
        string json = JsonSerializer.Serialize(myBook, option);
        Console.WriteLine(json);

        //Save Jso  file
        string path = "book.json";
        File.WriteAllText(path, json);
        Console.WriteLine("Save JSON Succsses!");
    }  
    
        
        
    
}