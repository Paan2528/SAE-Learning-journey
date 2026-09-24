namespace ConsoleApp1;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Welcome to the Cafe!");
        ourMenuInCafe myMenu = new ourMenuInCafe();         // Create a ourMenuInCafe object
        ourMenuInCafe myCoffeeMenu = new coffeeMenu();      // Create a coffeeMenu object
        ourMenuInCafe myIcedCoffeeMenu = new icedCoffee();      // Creat a icedCoffee object
        ourMenuInCafe myTeeAndNonCoffee = new teeNonCoffee();   // Creat a teeNonCoffee object
        ourMenuInCafe myPastriesAndSnacks = new pastriesSnacks(); // Creat a pastriesSnacks object
        
        myMenu.menu();
        myCoffeeMenu.menu();
        myIcedCoffeeMenu.menu();
        myTeeAndNonCoffee.menu();
        myPastriesAndSnacks.menu();

    }
}