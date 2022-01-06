#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 bool
 int
 float
 unsigned int
 char 
 double
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int month = 1;
    int day = 6;
    int year = 2022;

    unsigned int a = 5;
    unsigned int b = 6;
    unsigned int c = 7;

    float typingAngle = 6.5f;
    float degreesFarenheit = 45.5f;
    float degreesCelcius = 7.5f;

    bool isRaining = false;
    bool isWeekday = true;
    bool isWeekend = false;

    double priceOfCandy = 0.99;
    double priceOfGas = 3.48;
    double testScore = 83.50;

    char firstInitial = 'L';
    char middleInitial = 'L';
    char lastInitial = 'H';
    
    ignoreUnused(number, month, day, year, typingAngle, degreesFarenheit, degreesCelcius, isRaining, isWeekday, isWeekend, priceOfCandy, priceOfGas, testScore, a, b, c, firstInitial, middleInitial, lastInitial); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int checkWeather(bool isMetricUnit, std::string location = "USA")
{
    ignoreUnused(isMetricUnit, location);
    return {};
}
/*
 2)
 */
double calculatePrice(double price, int amount = 1)
{
    ignoreUnused(price, amount);
    return {};
}
/*
 3)
 */
bool respondToInvitation(int numberOfPeople)
{
    ignoreUnused(numberOfPeople);
    return {};
}
/*
 4)
 */
void run()
{
    ignoreUnused();
}
/*
 5)
 */
char changeKey(char key = 'C', int intervalChange = 0)
{
    ignoreUnused(key, intervalChange);
    return {};
}
/*
 6)
 */
void enterInitials(char firstInitial, char middleInitial, char lastInitial)
{
    ignoreUnused(firstInitial, middleInitial, lastInitial);
}
/*
 7)
 */
unsigned int calcAbsoluteValue(int integer)
{
    ignoreUnused(integer);
    return {};
}
/*
 8)
 */
float findDigitsOfPi(unsigned int numberOfDigits = 5)
{
    ignoreUnused(numberOfDigits);
    return {};
}
/*
 9)
 */
int findKeyboardLayout(bool useNumpad = false, bool useNavigationKeys = true, bool useFunctionKeys = true, bool useArrowKeys = true)
{
    ignoreUnused(useNumpad, useNavigationKeys, useFunctionKeys, useArrowKeys);
    return {};
}
/*
 10)
 */
void performDailyActivities(int hoursToExercise = 1, int hoursToWork = 8, int hoursToLaze = 8)
{
    ignoreUnused(hoursToExercise, hoursToWork, hoursToLaze);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto localWeather = checkWeather(false, "New York");
    //2)
    auto totalPrice = calculatePrice(25.99, 3);
    //3)
    auto response = respondToInvitation(10);
    //4)
    run();
    //5)
    auto newKey = changeKey(-4);
    //6)
    enterInitials('L','L','H');
    //7)
    auto absoluteValue = calcAbsoluteValue(-5);
    //8)
    auto threeDigitsOfPi = findDigitsOfPi(3);
    //9)
    auto idealLayout = findKeyboardLayout(false, false, false);
    //10)
    performDailyActivities(2, 8, 3);
    
    ignoreUnused(carRented, localWeather, totalPrice, response, newKey, absoluteValue, threeDigitsOfPi, idealLayout);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
