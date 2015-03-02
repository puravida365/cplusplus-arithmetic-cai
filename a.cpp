/*

Programmer: Josué Mora
Course: CS 301
Description: The use of computers in education is referred to as CAI (Computer Assisted
Instruction). This program helps an elementary school student to learn to
multiply. It uses a random function to produce two positive one-digit #s.

*/

#include <iostream>

#include <ctime>

using namespace std;

class ARITHMETIC{

    private:
        int p, q, x1, x2, x3, x4, y;
        bool loop;

    public:

    // constructor

    ARITHMETIC(){

        p = rand() % 10;

        q = rand() % 10;

        x1 = p * q;

        x2 = p / q;

        x3 = p + q;

        x4 = p - q;


        loop = true;

        }

    void selection(){

        int x;

        cout << "*******************************************************\n";

        cout << "Welcome. Please select one of the following options\n\n";

        cout << "1: Addition\n";

        cout << "2: Subtraction\n";

        cout << "3: Multiplication\n";

        cout << "4: Division\n";

        cout << "5: Random\n";


        cin >> x;


        if(x == 1){

        add();

        }

        else if(x == 2){

        subtract();

        }

        else if(x == 3){

        multiply();

        }

        else if(x == 4){

        divide();

        }

        else if(x == 5){

        mixed(); 

        }

        else{

        cout << "error";

        }



        cin.clear();


        }

// =============================== multiply ========================

    void multiply(){

        while(loop){

            // get user input
            cout << "What is " << p <<  " X " << q << "?" << endl;
            cin >> y;

            if(y == x1){

            cout << "Very good!" << endl;
            loop = false;

        }

        else{

            cout << "Wrong answer, please try again." << endl;

        }

        };

    }

// ============================== divide ===========================

    void divide(){

        while(loop){
            // get user input
            cout << "What is " << p <<  " % " << q << "?" << endl;
            cin >> y;

        if(y == x2){
            cout << "Very good!" << endl;
            loop = false;
        }

        else {
            cout << "Wrong answer, please try again." << endl;
        }

        };

    }

// ==============================  sum  ============================

    void add(){

        while(loop){

            // get user input
            cout << "What is " << p <<  " + " << q << "?" << endl;
            cin >> y;


            if(y == x3){
                cout << "Very good!" << endl;
                loop = false;
            }

            else{
                cout << "Wrong answer, please try again." << endl;
            }
        };
    }

// ========================= subtraction ===========================

    void subtract(){

        while(loop){

            // get user input
            cout << "What is " << p <<  " - " << q << "?" << endl;
            cin >> y;

            if(y == x4){
            cout << "Very good!" << endl;
            loop = false;
            }

            else {
                cout << "Wrong answer, please try again." << endl;
            }
        };
    }

    void mixed(){

        srand(time(NULL));

        int r = rand() % 3;

        switch(r) {

            case 0: multiply();
            break;
            case 1: divide();
            break;
            case 2: add();
            break;
            case 3: subtract();
            break;
        }

    }

    ~ARITHMETIC(){}

};

int main(){

    char answer = 'y';

    while(answer == 'y'){
        ARITHMETIC A;
        A.selection();
        cout << "Try again (y/n) ";
        cin >> answer;
    };

    return(0);

}

/*

SAMPLE OUTPUT

$./a.out
*******************************************************
Welcome. Please select one of the following options

1: Addition
2: Subtraction
3: Multiplication
4: Division
5: Random
1
What is 7 + 9?
2
Wrong answer, please try again.
What is 7 + 9?
4
Wrong answer, please try again.
What is 7 + 9?
11
Wrong answer, please try again.
What is 7 + 9?
16
Very good!
Try again (y/n) y
*******************************************************
Welcome. Please select one of the following options

1: Addition
2: Subtraction
3: Multiplication
4: Division
5: Random
4
What is 3 % 8?
0
Very good!
Try again (y/n) y
*******************************************************
Welcome. Please select one of the following options

1: Addition
2: Subtraction
3: Multiplication
4: Division
5: Random
5
What is 0 % 2?
0
Very good!
Try again (y/n) y
*******************************************************
Welcome. Please select one of the following options

1: Addition
2: Subtraction
3: Multiplication
4: Division
5: Random
5
What is 3 + 7?
2
Wrong answer, please try again.
What is 3 + 7?
10
Very good!
Try again (y/n)

*/