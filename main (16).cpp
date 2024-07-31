#include <iostream>

using namespace std;

int main() {
char grade;

  cout << "Enter your grade from your Math Exam (A-F): ";
  cin >> grade;

  switch (grade) {
    case 'A':
      cout << "Excellent Lowkey" << endl;
      break;
    case 'B':
      cout << "Well Done: " << endl;
      break;
    case 'C':
      cout << "You passed, I guess :/ " << endl;
      break;
    case 'D':
      cout << "You suck bruh" << endl;
      break;
    case 'F':
      cout << "idk what to tell you." << endl;
      break;
    default:
      cout << "Invalid input." << endl;
      break;
  }

  
return 0;
}