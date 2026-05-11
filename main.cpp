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
 int
 float
 double
 char
 bool
 unsigned int 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

// 1)
void playSong(int trackNumber, float volumeLevel);

// 2)
int calculateScore(int enemiesDefeated, int bonusPoints);

// 3)
bool connectToServer(char serverRegion, int timeoutSeconds);

// 4)
double measureTemperature(double sensorVoltage);

// 5)
void sendEmail(char recipientInitial, int messageSize);

// 6)
float mixAudioTracks(float drumLevel, float bassLevel, float guitarLevel);

// 7)
int generateInvoice(int customerId, int productQuantity, float taxRate);

// 8)
bool detectCollision(float playerPositionX, float enemyPositionX);

// 9)
void scheduleTask(int delayMilliseconds, bool repeatTask);

// 10)
double convertCurrency(double exchangeRate, int amountToConvert);

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
// 1)
void playSong(int trackNumber, float volumeLevel)
{
    ignoreUnused(trackNumber, volumeLevel);
}

// 2)
int calculateScore(int enemiesDefeated, int bonusPoints)
{
    ignoreUnused(enemiesDefeated, bonusPoints);
    return 0;
}

// 3)
bool connectToServer(char serverRegion, int timeoutSeconds)
{
    ignoreUnused(serverRegion, timeoutSeconds);
    return false;
}

// 4)
double measureTemperature(double sensorVoltage)
{
    ignoreUnused(sensorVoltage);
    return 0.0;
}

// 5)
void sendEmail(char recipientInitial, int messageSize)
{
    ignoreUnused(recipientInitial, messageSize);
}

// 6)
float mixAudioTracks(float drumLevel, float bassLevel, float guitarLevel)
{
    ignoreUnused(drumLevel, bassLevel, guitarLevel);
    return 0.0f;
}

// 7)
int generateInvoice(int customerId, int productQuantity, float taxRate)
{
    ignoreUnused(customerId, productQuantity, taxRate);
    return 0;
}

// 8)
bool detectCollision(float playerPositionX, float enemyPositionX)
{
    ignoreUnused(playerPositionX, enemyPositionX);
    return false;
}

// 9)
void scheduleTask(int delayMilliseconds, bool repeatTask)
{
    ignoreUnused(delayMilliseconds, repeatTask);
}

// 10)
double convertCurrency(double exchangeRate, int amountToConvert)
{
    ignoreUnused(exchangeRate, amountToConvert);
    return 0.0;
}

5) pass each of your function parameters to the ignoreUnused function like you did in b)
did it on step 4

6) if your function returns something other than void, add 'return { };' at the end of it.
// 2)
int calculateScore(int enemiesDefeated, int bonusPoints)
{
    ignoreUnused(enemiesDefeated, bonusPoints);
    return { };
}

// 3)
bool connectToServer(char serverRegion, int timeoutSeconds)
{
    ignoreUnused(serverRegion, timeoutSeconds);
    return { };
}

// 4)
double measureTemperature(double sensorVoltage)
{
    ignoreUnused(sensorVoltage);
    return { };
}

// 6)
float mixAudioTracks(float drumLevel, float bassLevel, float guitarLevel)
{
    ignoreUnused(drumLevel, bassLevel, guitarLevel);
    return { };
}

// 7)
int generateInvoice(int customerId, int productQuantity, float taxRate)
{
    ignoreUnused(customerId, productQuantity, taxRate);
    return { };
}

// 8)
bool detectCollision(float playerPositionX, float enemyPositionX)
{
    ignoreUnused(playerPositionX, enemyPositionX);
    return { };
}

// 10)
double convertCurrency(double exchangeRate, int amountToConvert)
{
    ignoreUnused(exchangeRate, amountToConvert);
    return { };
}

7) provide default values for an arbitrary number of parameters in the function parameter list.
// 1)
void playSong(int trackNumber = 1, float volumeLevel = 0.5f)
{
    ignoreUnused(trackNumber, volumeLevel);
}

// 2)
int calculateScore(int enemiesDefeated = 0, int bonusPoints = 100)
{
    ignoreUnused(enemiesDefeated, bonusPoints);
    return { };
}

// 3)
bool connectToServer(char serverRegion = 'A', int timeoutSeconds = 30)
{
    ignoreUnused(serverRegion, timeoutSeconds);
    return { };
}

// 4)
double measureTemperature(double sensorVoltage = 2.5)
{
    ignoreUnused(sensorVoltage);
    return { };
}

// 5)
void sendEmail(char recipientInitial = 'J', int messageSize = 256)
{
    ignoreUnused(recipientInitial, messageSize);
}

// 6)
float mixAudioTracks(
    float drumLevel = 0.8f,
    float bassLevel = 0.7f,
    float guitarLevel = 0.6f)
{
    ignoreUnused(drumLevel, bassLevel, guitarLevel);
    return { };
}

// 7)
int generateInvoice(
    int customerId = 1001,
    int productQuantity = 1,
    float taxRate = 0.15f)
{
    ignoreUnused(customerId, productQuantity, taxRate);
    return { };
}

// 8)
bool detectCollision(
    float playerPositionX = 0.0f,
    float enemyPositionX = 10.0f)
{
    ignoreUnused(playerPositionX, enemyPositionX);
    return { };
}

// 9)
void scheduleTask(
    int delayMilliseconds = 1000,
    bool repeatTask = false)
{
    ignoreUnused(delayMilliseconds, repeatTask);
}

// 10)
double convertCurrency(
    double exchangeRate = 5.25,
    int amountToConvert = 100)
{
    ignoreUnused(exchangeRate, amountToConvert);
    return { };
}

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected

float someFunc2(bool yes, int bar=2) 
{ 
    ignoreUnused(yes, bar); 
    return { }; 
}

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
    
    // int
    int age = 25;
    int score = 100;
    int lives = 3;

    // float
    float temperature = 23.5f;
    float speed = 88.2f;
    float volume = 0.75f;

    // double
    double pi = 3.1415926535;
    double distance = 1520.45;
    double frequency = 440.0;

    // char
    char grade = 'A';
    char initial = 'J';
    char symbol = '#';

    // bool
    bool isRunning = true;
    bool isVisible = false;
    bool hasFinished = true;

    // unsigned int = values should never be negative
    unsigned int fileCount = 12;
    unsigned int playerScore = 5000;
    unsigned int itemQuantity = 42;

    
    ignoreUnused(number,
        age,
        score,
        lives,
        temperature,
        speed,
        volume,
        pi,
        distance,
        frequency,
        grade,
        initial,
        symbol,
        isRunning,
        isVisible,
        hasFinished,
        fileCount,
        playerScore,
        itemQuantity
    ); //passing each variable declared to the ignoreUnused() function
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
void playSong(int trackNumber = 1, float volumeLevel = 0.5f)
{
    ignoreUnused(trackNumber, volumeLevel);
}

/*
 2)
 */
int calculateScore(int enemiesDefeated = 0, int bonusPoints = 100)
{
    ignoreUnused(enemiesDefeated, bonusPoints);
    return { };
}

/*
 3)
 */
bool connectToServer(char serverRegion = 'A', int timeoutSeconds = 30)
{
    ignoreUnused(serverRegion, timeoutSeconds);
    return { };
}

/*
 4)
 */
double measureTemperature(double sensorVoltage = 2.5)
{
    ignoreUnused(sensorVoltage);
    return { };
}

/*
 5)
 */
void sendEmail(char recipientInitial = 'J', int messageSize = 256)
{
    ignoreUnused(recipientInitial, messageSize);
}

/*
 6)
 */
float mixAudioTracks(
    float drumLevel = 0.8f,
    float bassLevel = 0.7f,
    float guitarLevel = 0.6f)
{
    ignoreUnused(drumLevel, bassLevel, guitarLevel);
    return { };
}

/*
 7)
 */
int generateInvoice(
    int customerId = 1001,
    int productQuantity = 1,
    float taxRate = 0.15f)
{
    ignoreUnused(customerId, productQuantity, taxRate);
    return { };
}

/*
 8)
 */
bool detectCollision(
    float playerPositionX = 0.0f,
    float enemyPositionX = 10.0f)
{
    ignoreUnused(playerPositionX, enemyPositionX);
    return { };
}

/*
 9)
 */
void scheduleTask(
    int delayMilliseconds = 1000,
    bool repeatTask = false)
{
    ignoreUnused(delayMilliseconds, repeatTask);
}
/*
 10)
 */
double convertCurrency(
    double exchangeRate = 5.25,
    int amountToConvert = 100)
{
    ignoreUnused(exchangeRate, amountToConvert);
    return { };
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
    playSong(3, 0.8f);
    //2)
    auto score = calculateScore(15, 200);
    //3)
    auto connected = connectToServer('B', 60);
    //4)
    auto temperature = measureTemperature(3.7);
    //5)
    sendEmail('A', 512);
    //6)
    auto mixedAudio = mixAudioTracks(0.9f, 0.7f, 0.6f);
    //7)
    auto invoice = generateInvoice(1002, 4, 0.12f);
    //8)
    auto collisionDetected = detectCollision(25.0f, 30.0f);
    //9)
    scheduleTask(5000, true);
    //10)
    auto convertedAmount = convertCurrency(5.42, 250);
    
    ignoreUnused(carRented,
                score,
                connected,
                temperature,
                mixedAudio,
                invoice,
                collisionDetected,
                convertedAmount
        );
    std::cout << "good to go!" << std::endl;
    return 0;    
}
