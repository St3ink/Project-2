//File Name: project2.cpp
#include <iostream>
#include <cmath>


using namespace std;
int main() { 

int choice;
double num1, num2, result;

cout << "Please select an Arithmitic operation: \n\n";
cout << "1. Addition\n"
  << "2. Subtraction\n"
  << "3. Multiplication\n"
  << "4. Division\n"
  << "5. Power\n";
cout << "Enter your choice: ";
cin >> choice;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

if (choice == 1){
  result = num1 + num2;
   cout << "The answer is: " << result << endl; 
}
else if (choice == 2){
  result = num1 - num2;
  cout << "The answer is: " << result << endl; 
}
else if (choice == 3){
  result = num1 * num2;
  cout << "The answer is: " << result << endl; 
}
else if (choice == 4){
  result = num1 / num2;
  cout << "The answer is: " << result << endl; 
}
else if (choice == 5){
  result = pow(num1,num2);
  cout << "The answer is: " << result << endl;
}
  else
  cout << "Invalid choice";

  
return 0;
}