// Mean Calculator (5 Numbers)

int main()
{
   int num1, num2, num3, num4, num5;

    cout << "Enter your first number: " << endl;
    cin >> num1;

    cout << "Enter your second number: " << endl;
    cin >> num2;

    cout << "Enter your third number: " << endl;
    cin >> num3;

    cout << "Enter your fourth number: " << endl;
    cin >> num4;

    cout << "Enter your fifth number: " << endl;
    cin >> num5;

    double mean = (num1 + num2 + num3 + num4 + num5)/5;

    cout << "Your mean is " << mean << endl;


    return 0;
}

// Program that creates a short MADLIB.

int main()
{
    string loc;
    string adj;
    string noun;
    string surface;
    string verb;
    int num;

    cout << "Enter location: " << endl;
    getline(cin, loc);

    cout << "Enter adjective: " << endl;
    getline(cin, adj);

    cout << "Enter noun: " << endl;
    getline(cin, noun);

    cout << "Enter surface area: " << endl;
    getline(cin, surface);

     cout << "Enter verb" << endl;
    getline (cin, verb);

    cout << "Enter num: " << endl;
    cin >> num;

    cout << "" << endl;
    cout << "" << endl;
    cout << "**YOUR MADLIB IS READY**" << endl;
    cout << "" << endl;
    cout << " Today I went to the " << loc << "." << endl;
    cout << " I saw a "<< adj << " " << noun << " jumping up and down on the " << surface << "." << endl;
    cout << " If this story did not get " << num << " ratings then go "<< verb << " yourself." << endl;

    return 0; 
}

//Arrays 

int main()
{
  int nums[10];
  int a = nums[8] = 20;

  cout << a << endl;

  int listofnum[] = {2,4,6,3,64,43};
  int b = listofnum[5];
  cout << b << endl;

  return 0;
}



// Functions
void greet(string name, int num) //Creating new function
{
    cout << "" << endl;
    cout << "Thank you " << name << "." << endl;
    cout << "You have entered " << num << "." <<endl;
}

int main()
{
  string a;
  int b;

  cout << "Enter your name: " << endl;
  getline(cin, a);

  cout << "Enter your number: ";
  cin >> b;

  greet (a, b); //Calling function greet() w/ two  parameters

  return 0;
}



// Program that calculates the cube of num (User input)
double cube(double num)
{
    double cub = num * num * num;
    return cub;
}

int main()
{
    double a;
    cout << "Enter any number: " << endl;
    cin >> a;

    double c = cube(a);
    cout << "Cube of " << a << " is " << c << endl;

    return 0;
}


// If Else Statement
int main()
{
    bool isMale = true;

    if(isMale){
        cout << "You are a male." << endl;
    }else{
        cout << " You are not a male." << endl;
    }

    return 0;
}


// If Statement (part - 2)
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    bool isMale = true;

    if(isMale && age < 25){
        cout << "You are a male and young." << endl;
    }else if (isMale && 26 < age < 45){
        cout << " You are middle aged male." << endl;
    }else if (isMale && 46 < age ){
        cout << " You are old male." << endl;
    }else{
        cout << "You are not a male." << endl;
    }

    return 0;
}


// Program that compares Max and Min from inputs
#include <iostream>

using namespace std;

int getMin(int num1, int num2, int num3)
{
    int result;

    if (num1 <= num2 && num1 <= num3){
        result = num1;
    }else if (num2 <= num1 && num2 <= num3){
        result = num1;
    }else {
        result = num3;
    }

    return result;


}

int getMax(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3){
        result = num1;
    }else if (num2 >= num1 && num2 >= num3){
        result = num1;
    }else {
        result = num3;
    }

    return result;


}

int main()
{
    int a,b,c;

    cout << "Enter your first number: " << endl;
    cin >> a;

    cout << " Enter your second number: " << endl;
    cin >> b;

    cout << " Enter your third number: " << endl;
    cin >> c;

    int Min = getMin(a,b,c);
    int Max = getMax (a,b,c);
    cout << " " << endl;
    cout << "Numbers entered: " << a << "," << b << "," << c << "." << endl;
    cout << "" << endl;
    cout << "Minimum number entered was: " << Min << endl;
    cout << "Max number entered was: " << Max << endl;

    return 0;
}

// 4Function CPP Calculator (for 2 Nums)
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char sign;
    int result;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter operator: " << endl;
    cin >> sign;

    cout << "Enter second number: " << endl;
    cin >> num2;


    if (sign == '+')
    {
        result = num1 + num2;
        cout << num1 << " Plus " << num2 << " Equals " << result << endl;
    }else if (sign == '-'){
        result = num1 - num2;
        cout << num1 << " Minus " << num2 << " Equals " << result << endl;
    }else if (sign == '/'){
        result = num1 / num2;
        cout << num1 << " Divide By " << num2 << " Equals " << result << endl;
    }else if (sign == '*'){
        result = num1 * num2;
        cout << num1 << " Multiply By " << num2 << " Equals " << result << endl;
    }else {
        cout << "Invalid Operator." << endl;
    }
    cout << " Final Calculation = " << result<<endl;


}

//Program takes number inputs and tells you the day of the week.

using namespace std;

string getWeekDays(int dayNum){
    string dayName;
    switch(dayNum){
    case 0:
        dayName = "It is Sunday.";
        break;

    case 1:
        dayName = "It is Monday.";
        break;

    case 2:
        dayName = "It is Tuesday.";
        break;

    case 3:
        dayName = "It is Wednesday.";
        break;

    case 4:
        dayName = "It is Thursday.";
        break;

    case 5:
        dayName = "It is Friday.";
        break;

    case 6:
        dayName = "It is Saturday.";
        break;
    default:
        dayName = " Wrong Input (0-6 only).";
        break;

    }

    return dayName;

}

int main()
{
    int inpNum;
    cout << "Enter your number (0-6 only): " << endl;
    cin >> inpNum;
    string a = getWeekDays(inpNum);

    cout << a << endl;

}

// Guessing game with while loop
int main()
{
    int secretNum = 7;
    int guess;

    while(secretNum != guess){
        cout << "Guess number to win: " << endl;
        cin >> guess;

        if(guess==secretNum){
            cout << "You Win." << endl;
        } else{
            cout << "Wrong Answer. Guess Again. " << endl;
        }

        }
}


// Guessing game with do while loop

int main()
{
    int secretNum = 7;
    int guess;

    do{
        cout << "Guess number to win: " << endl;
        cin >> guess;

        if(guess==secretNum){
            cout << "You Win." << endl;
        } else{
            cout << "Wrong Answer. Guess Again. " << endl;
        }

        } while(secretNum != guess);
}

// Guessing game with limited guesses
int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuess = false;

    while(secretNum != guess){
        if(guessCount < guessLimit){
            cout << "" << endl;
            cout << "Guess number to win: " << endl;
            cin >> guess;
            guessCount++;

        }else{
            cout << "" << endl;
            cout << "Out of Guesses! you lost.";
            break;
        }


        if(guess==secretNum){
            cout << "" << endl;
            cout << "You Win." << endl;
        } else{
            cout << "" << endl;
            cout << "Wrong Answer. Guess Again. " << endl;
        }

        }
        return 0;
}

// For loop

int main()
{
    int nums[] = {2,4,64,3,5,33,48,34};
    for(int i = 0; i < 5; i++){
        cout << "Your result: " << nums[i] << endl;
    }


    return 0;
}


// Exponent function using for loops

int getPower(int baseNum, int powNum)
{
    int result = 1;

    for( int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }

    return result;
}


int main()
{
    cout << getPower(2,4) << endl;

    return 0;
}

// Nested For Loop
int main()
{
    int d2array[3][2] = {
                        {4,2},
                        {3,8},
                        {5,6},
                        };
    for(int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            cout << d2array[i][j] << "  " ;
        }
        cout << endl;
    }

    return 0;
}

// 2D Arrays

int main()
{
    int d2array[3][2] = {
                        {4,2},
                        {3,8},
                        {5,6},
                        };
    cout << d2array[1][1] << endl;

    return 0;
}

// Pointers

int main()
{
    int a = 12;
    int *pA = &a;

    cout << a << endl;
    cout << *pA << endl;
    cout << &a << endl;
    cout << *&a<< endl;
    cout << &*&a<< endl;

    return 0;
}

// Classes and objects 

class car
{
    public:
        string make;
        int year;
        int milage;
};

int main()
{
    car c1;
    c1.make = "Honda";
    c1.year = 2014;
    c1.milage = 100110;

    cout << "Make: " << c1.make << endl;
    cout << "Year: " << c1.year << endl;
    cout << "Mileage: " << c1.milage << endl;

    return 0;
}

// Car buying app w/ C++
class car
{
    public:
        string make;
        int year;
        int milage;
};

int main()
{
    car c1;

    cout << "Enter car make you want to sell: " << endl;
    getline (cin, c1.make);

    cout << "Enter year of a car: " << endl;
    cin >> c1.year;

    cout << "Enter mileage: " << endl;
    cin >> c1.milage;


    cout << "" << endl;
    cout << "" << endl;
    cout << "The car you want to sell." <<endl;
    cout << "Make: " << c1.make << endl;
    cout << "Year: " << c1.year << endl;
    cout << "Mileage: " << c1.milage << endl;
    cout << "" << endl;
    cout << "" << endl;

    if(c1.year > 2010 && c1.milage < 100000) {
        cout << "Hurry up! Buyers are waiting." << endl;
    }else if(c1.year < 2010 || c1.milage > 100000){
        cout << "Your car is old with high mileage. No buyers." << endl;
    }
    else{
        cout << "Your car is in bad shape. No buyers." << endl;
    }

    return 0;
}

// Constructor Function
class phone{
public:
    phone(string name, string color, int capacity){
        cout << "" << endl;
        cout << "Phone's Information." << endl;
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Capacity in Gb: " << capacity << endl;

    }
};

int main()
{
    phone p1("Samsung", "White", 128);
    phone p2("Apple", "Rose Gold", 512);

    return 0;
}


// Getter and setter for the type of phone (used, new, refurbished)

class phone{
private:
    string condition;
public:
    string make;
    string color;
    phone(string aMake, string aColor, string aCondition){
        make == aMake;
        color == aColor;
        setCondition(aCondition);
    }

    void setCondition(string aCondition){
        if(aCondition == "Used" || aCondition == "New" || aCondition == "Refurbished"){
             condition = aCondition;
        }else {
            aCondition == "Not Available";
        }
    }

    string getCondition()
    {
        return condition;
    }
};

int main()
{
    phone p1("Samsung", "White", "New");
    p1.setCondition ("Never");
    phone p2("Apple", "Rose Gold", "New");
    p2.setCondition ("Used");

    cout << p1.getCondition();

    return 0;
}

// Inheritance


class Chef
{
public:

    void cookChicken()
    {
        cout << "Chef just finished cooking the chicken." << endl;
    }
    void cookPasta()
    {
        cout << "Chef just finished cooking rice." << endl;
    }
};

class NepaliChef : public Chef
{
public:

    void cookDalvat()
    {
        cout << "Nepali chef just finished cooking Daal Vaat." << endl;
    }
};

int main()
{
    Chef chef;
    chef.cookChicken();

    NepaliChef nepalichef;
    nepalichef.cookDalvat();

    return 0;
}



