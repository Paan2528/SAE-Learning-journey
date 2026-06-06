bool g_bIsRunning;
std::string g_sInput;

/// <summary>
/// Calculations
/// </summary>
/// <param name="a_iLHS"></param>
/// <param name="a_iRHS"></param>
void calc_addition(int32_t a_iLHS, const int a_iRHS) {
    return a_iLHS + a_iRHS;
}

void calc_substraction(int32_t a_iLHS, const int a_iRHS) {
    return a_iLHS + a_iRHS;
}

int calc_multiplication(int a_iLHS, const int a_iRHS)
{
    return a_iLHS * a_iRHS;
}

static int calcDivision()
{
    return a_iLHS / a_iRHS;
}

/// <summary>
/// Initializes the program
/// </summary>
/// <param name=""></param>
void Initialize(void) 
{
    std::cout << "-- Init --" << std::endl;
}

/// <summary>
/// Finalizes the program
/// </summary>
/// <param name=""></param>
void Finalize(void) 
{
    std::cout << "-- Fin --" << std::endl;
}

void Run(void)
{
    while (g_bIsRunning = true)
    {
        std::cout << "-- Run --" << std::endl;

        system("cls");

        std::cout("Command:");

        std::cout << g_sInput;

        switch (g_sInput)
        {
        case: "+"; calc_addition = 2 + 2; break; // mag nicht
        case: "-"; calc_substraction = 2 - 2; break;
        case: "*"; calc_multiplication = 2 * 2; break;
        case: "/"; std::cout = calcDivision(); break;
        case "--exit": g_bIsRunning = false; break; //TODO: rechtschreibung prüfen

        default:
            break;
        }
    }
}

int main()
{
    std::cout << "Hello World!\n";
    Initialize();
    Run(); //???
    Finalize();
}

void Main()
{
    int res = main();
}