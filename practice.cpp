#include <iostream>
#include <cmath>

using namespace std;

// void sayHi(string name, int age) {
//     cout << "Hello " << name << " you are " << age << endl;
// }

// double cube(double, num) {
//     double result = num*num*num;

//     return result;
// }

string getDayOfTheWeek(int dayNum){
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Sunday";
            break;

        default:
         dayName = "Invalid Day Number";
    }

    return dayName;
}

// Power function
// int power(int baseNum, int powNum){
//     int result = 1;
//     for(int i = 0; i < powNum; i++){
//         result = result * baseNum
//     }
//     return result;
// }

class Book {
    public:
        string title;
        string author;
        int pages;
        // constructor: special function
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            //cout << Book.title << endl;

        }
};

class Student {
    string name;
    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors(){
        if(aGpa >= 3.5){
            return true;
        }
        else {
            return false;
        }
    }
};

int main() 
{
    // string characterName = "John";
    // int characterAge;
    // characterAge = 35;
    // cout << "Hello World!" << endl;
    // cout << "There once was a man named " << characterName << endl;
    
    // string phrase = "hello world Academy";
    // phrase[0] = 'B';
    // cout << phrase.find("Academy", 0) << endl;
    // cout << phrase.substr(8, 3); // starting position index: 8, will take 3 characters

    // cout << 40 << endl;
    // cout << pow(2, 5) << endl; // 2 raised to the power 5
    // cout << sqrt(25) << endl;

    // string name;
    // cout << "Enter your name: ";
    // getline(cin, name); // get the whole line of text
    // cout << "Hello " << name;

    // int luckyNums[] = {4, 89, 57, 23, 3};
    // cout << luckyNums[2];

    // cout << "Top ";
    // sayHi("Shara", 19);
    // cout << "bottom";

    // double answer = cube(5.0);
    // cout << answer;

    // bool isMale = true;
    // bool isTall = true;

    // if(isMale && isTall) {
    //     cout << "You are a tall male";
    // }
    // else if (isMale && !isTall) {
    //     cout << "You are a short male";
    // }
    // else if (!isMale && isTall) {
    //     cout << "You are tall but not male";
    // }
    // else {
    //     cout << "You are not a male";
    // }

    // int num1, num2;
    // char op;

    // cout << "Enter first number: ";
    // cin >> num1;

    // cout << "Enter second number: ";
    // cin >> num2;

    // cout << "Enter operator: ";
    // cin >> op;

    // int result;

    // if (op == '+') {
    //     result = num1 + num2;
    // } else if (op == '-'){
    //     result = num1 - num2;
    //  }

    // cout << power(2, 4);

    // int numberGrid[3][2] = {
    //                     {1, 2}, {3, 4}, {5, 6}
    // }; // total no. of elements = 3, no. of elements in each element = 2

    // cout << numberGrid[0][1];

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << numberGrid[i][j];
    //     }
    //     cout << endl;
    // }
    // int age = 19;
    // double gpa = 2.7;
    // string name = "Mike";
    // int *pAge = &age;
    // double *pGpa = &gpa;
    // string *pName = &name;

    // cout << &age;
    // cout << "Age: " << &age << endl;
    // cout << "GPA: " << &gpa << endl;

    // Book book1("Harry Potter", "JK Rowling", 500);
    // book1.title = "Harry Potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;

    // cout << book1.title << endl;

    Student student1("Jim", "Business", 3);
    cout << student1.hasHonors();


    
    return 0;
} 