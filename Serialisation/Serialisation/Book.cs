namespace Serialisation;

public class  Book
{
    public string Name { get; set; } = "";
    public int Quantity  { get; set; } 
    public double Price  { get; set; } 
    public bool InShelf  { get; set; }
    public List<string> typeBook { get; set; } = [];

}