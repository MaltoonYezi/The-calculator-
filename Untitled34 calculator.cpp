/*I invented new calculator!! Are you tired of all of these flashy ultra modern calculators? You want some old school? 
You really love text based MS DOS interface? You love the late 90's/early 00's dotcom bubble and Y2K ? 
Then this calculator is for you! Just copy the source code below into your IDE, compile and run!  */ 
//NOTE MODS: This is not a self promotion but just a quick joke 
#include <iostream>
using namespace std;
int main () {
char op;
int ex = 0;
int e;
cout << "Welcome to the calculator!" << endl; cout << "\n + addtion operator"; 
cout << "\n - subtraction operator"; cout << "\n / division operator";
cout << "\n * multiplication operator"; cout << "\n % getting remainder of division";
cout <<"\n ^ raising a number to an exponent " << endl;
do {
double num1, num2;
cout <<"\n";
cout  << "Enter firt number: ";
cin >> num1;
cout  << "Enter operator: ";
cin >> op;
cout  << "Enter second number: ";
cin >> num2;
double result;
if (op == '+'){

result = num1 + num2;
cout <<"\n"; cout << "The result: " << result;
} else if (op== '-'){
    result = num1 - num2;
    cout <<"\n"; cout << "The result: " << result;
}
else if (op == '/') {
    result = num1 / num2;
    cout <<"\n"; cout << "The result: " << result;
}
else if (op == '*') {
    result = num1 * num2;
    cout <<"\n"; cout << "The result: " << result;
}
else if (op == '%') {
    if (num1<0) {
    num1 = num1 - 0.5;}
    else {num1 = num1 + 0.5;
        
    }
    if (num2<0) {
    num2 = num2 - 0.5;}
    else {num2 = num2 + 0.5;
        
    }
    int x1 = (int) num1;
    int x2 = (int) num2;
    result = x1 % x2;
    cout <<"\n"; cout << "The result: " << result;
    
}
else if (op == '^') {
    if (num2<0) {
    double r1 = num1; 
    num2 = num2 - 0.5;
    int x2 = (int) num2;
    for (e=1; e<x2; e++) {
    num1 = r1*num1;
    }
    result = 1/num1;
    cout <<"\n"; cout << "The result: " << result;
    }
    else if (num2>0) {
    double r1 = num1; 
    num2 = num2 + 0.5;    
    int x2 = (int) num2;
    for (e=1; e<x2; e++) {
    num1 = r1*num1;
    }
    result = num1;
    cout <<"\n"; cout << "The result: " << result;
} 
else {cout <<"\n"; cout << "The result: " << "1";
}

}

else { cout << "\n invalid operator" << endl;
cout << "You can enter: "<< endl; cout <<"+ for addition"<< endl;
cout <<"- for subtraction"<< endl; cout <<"\ for division"<< endl;
cout <<"* for multiplication" << endl; cout <<"% getting remainder of division" << endl;
cout <<"^ raising a number to an exponent " << endl;
}
}
while (ex==0);
return 0;

}
