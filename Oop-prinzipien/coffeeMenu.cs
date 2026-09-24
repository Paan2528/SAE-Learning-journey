namespace ConsoleApp1;

public class ourMenuInCafe()    //Base Class (Parent) 
{
    public virtual void  menu()
    {
        Console.WriteLine("Cafe Menu");
    }
}

public class coffeeMenu : ourMenuInCafe // Derived class (child)
{
    private string coffee1 = "Capucino";
    private string coffee2 = "Espresso";
    private string coffee3 = "Americano";
    private string coffee4 = "Flat White";
    private string coffee5 = "Mocha";

    public override void menu()
    {
        Console.WriteLine(coffee1);
        Console.WriteLine(coffee2);
        Console.WriteLine(coffee3);
        Console.WriteLine(coffee4);
        Console.WriteLine(coffee5);
        
        
    }
}
public class icedCoffee : ourMenuInCafe   // Derived class (child)
{
    private string iced_Coffee1 = "Iced Americano";
    private string iced_Coffee2 = "Iced Latte";
    private string iced_Coffee3 = "Iced Mocha";
    private string iced_Coffee4 = "Caramel Macchiato";
    private string iced_Coffee5 = "Code Brew";

    public override void menu()
    {
        Console.WriteLine(iced_Coffee1);
        Console.WriteLine(iced_Coffee2);
        Console.WriteLine(iced_Coffee3);
        Console.WriteLine(iced_Coffee4);
        Console.WriteLine(iced_Coffee5);
    }
}

public class teeNonCoffee : ourMenuInCafe  // Derived class (child)
{
    private string nonCoffee1 = "Thai Tea";
    private string nonCoffee2 = "Chat Tea";
    private string nonCoffee3 = "Matcha Latte";
    private string nonCoffee4 = "Hot Chocolate";
    private string nonCoffee5 = "Herbal Tea";

    public override void menu()
    {
        Console.WriteLine(nonCoffee1);
        Console.WriteLine(nonCoffee2);
        Console.WriteLine(nonCoffee3);
        Console.WriteLine(nonCoffee4);
        Console.WriteLine(nonCoffee5);
    }
    
}

public class pastriesSnacks : ourMenuInCafe   // Derived class (child)
{
    private string snack1 = "Croissant";
    private string snack2 = "Blueberry muffin";
    private string snack3 = "Chocolate Cookie";
    private string snack4 = "Avocado Toast";

    public override void menu()
    {
        Console.WriteLine(snack1);
        Console.WriteLine(snack2);
        Console.WriteLine(snack3);
        Console.WriteLine(snack4);
    }
    
}