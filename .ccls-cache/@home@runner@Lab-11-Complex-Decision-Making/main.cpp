// Name: Edna Manriquez
// Date: 3/24/2023
// Class: CSCI 1470.02
// Semester: Spring 2023
// CSCI 1470 Instructor: Askar Nurbekov
// // Program Description:
// 
//
/////////////////////////////////////////////////////////////////////

#include <iostream>				// to use cin and cout
#include <typeinfo>				// to be able to use operator typeid

// Include here the libraries that your program needs to compile
using namespace std;


// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Insert here the prototypes of the functions

//Part A
char letter2digitA(char letter);

//Part B 
char letter2digitB(char letter);


int main()
{
  // declare a variable named letter to hold the letter entered by the user
  char letter;
  
  // declare a variable named digit to hold the digit returned by the functions
  char digit;
  
  // display the title "Converts a capital letter to a digit on the telephone"
  cout << "Converts a capital letter to a digit on the telephone\n"<< endl;
  
  // prompt the user to enter a single capital letter
  cout << "Enter a single capital letter: ";
  
  // get the value from the keyboard and store it in the corresponding variable
  cin >> letter;
  
  // display "Solution A"
  cout << "\nSolution A" << endl;
  
  // call letter2digitA() to get the corresponding digit for the given letter and assign it digit
  digit = letter2digitA(letter);
  
  // if there is a matching digit for the letter entered
  if (digit != '?'){
  //  display the message	"Letter ", letter, " corresponds to digit ", digit, " on the telephone"
    cout << "\nLetter " << letter << " corresponds to digit " << digit << " on the telephone" << endl;
    
  }
  // otherwise
  else {
  //  display the message "There is no matching digit for the letter ", letter, " entered"
  cout << "\nThere iis no matching digit for the letter " << letter << " entered" << endl;
  
  }
    
  // display "Solution B"
  cout << "\nSolution B" << endl;
  
  // call letter2digitB() to get the corresponding digit for the given letter and assign it digit
  digit = letter2digitB(letter);
  
  // if there is a matching digit for the letter entered
  if(digit != '?'){
  
    //  display the message	"Letter ", letter, " corresponds to digit ", digit, " on the telephone"
    cout << "\nLetter " << letter << " corresponds to digit " << digit << " on the telephone" << endl;
    
  }
    
  // otherwise
  else{
    
    //  display the message "There is no matching digit for the letter ", letter, " entered"
    cout << "\nThere is no matching digit for the letter " << letter << " entered" << endl;
    
  }


  // Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;

	test(letter2digitA('A') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('B') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('C') == '2');				// Incorrect letter to digit correlation
	test(letter2digitA('D') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('E') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('F') == '3');				// Incorrect letter to digit correlation
	test(letter2digitA('G') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('H') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('I') == '4');				// Incorrect letter to digit correlation
	test(letter2digitA('J') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('K') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('L') == '5');				// Incorrect letter to digit correlation
	test(letter2digitA('M') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('N') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('O') == '6');				// Incorrect letter to digit correlation
	test(letter2digitA('P') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('Q') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('R') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('S') == '7');				// Incorrect letter to digit correlation
	test(letter2digitA('T') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('U') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('V') == '8');				// Incorrect letter to digit correlation
	test(letter2digitA('W') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('X') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('Y') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('Z') == '9');				// Incorrect letter to digit correlation
	test(letter2digitA('a') == '?');				// Incorrect letter to digit correlation
	test(letter2digitA('#') == '?');				// Incorrect letter to digit correlation
	test(letter2digitA('1') == '?');				// Incorrect letter to digit correlation

	test(letter2digitB('A') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('B') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('C') == '2');				// Incorrect letter to digit correlation
	test(letter2digitB('D') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('E') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('F') == '3');				// Incorrect letter to digit correlation
	test(letter2digitB('G') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('H') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('I') == '4');				// Incorrect letter to digit correlation
	test(letter2digitB('J') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('K') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('L') == '5');				// Incorrect letter to digit correlation
	test(letter2digitB('M') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('N') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('O') == '6');				// Incorrect letter to digit correlation
	test(letter2digitB('P') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('Q') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('R') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('S') == '7');				// Incorrect letter to digit correlation
	test(letter2digitB('T') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('U') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('V') == '8');				// Incorrect letter to digit correlation
	test(letter2digitB('W') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('X') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('Y') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('Z') == '9');				// Incorrect letter to digit correlation
	test(letter2digitB('a') == '?');				// Incorrect letter to digit correlation
	test(letter2digitB('#') == '?');				// Incorrect letter to digit correlation
	test(letter2digitB('1') == '?');				// Incorrect letter to digit correlation

  // To pause the execution of the program
	cout << "Press Enter to continue ...";
	cin.ignore(100, '\n');
	cin.get();;

	return 0;                               // Indicate successful
}                                           //   completion


//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// This function receives a character. If the character corresponds to any capital letter of the English
// alphabet it returns the corresponding telephone digit as a character; otherwise, it returns character
// '?' to indicate that an invalid character has been entered.
// This function uses COMPLEX CONDITIONAL EXPRESSIONS to determine the matching digit for the letter entered
char letter2digitA(char letter){
  char dig;

  if(letter == 'A' || letter == 'B' || letter == 'C'){
    dig = '2';
  } 
  else if(letter == 'D' || letter == 'E' || letter == 'F'){
    dig = '3';
  } 
  else if(letter == 'G' || letter == 'H' || letter == 'I'){
    dig = '4';
  }
  else if(letter == 'J' || letter == 'K' || letter == 'L'){
    dig = '5';
  }
  else if(letter == 'M' || letter == 'N' || letter == 'O'){
    dig = '6';
  }
  else if(letter == 'P' || letter == 'Q' || letter == 'R' || letter == 'S'){
    dig = '7';
  }
  else if(letter == 'T' || letter == 'U' || letter == 'V'){
    dig = '8';
  }
  else if(letter == 'W' || letter == 'X' || letter == 'Y' || letter == 'Z'){
    dig = '9';
  }
  else {
    dig = '?';
  }
  
  return dig;
}


// This function receives a character. If the character corresponds to any capital letter of the English
// alphabet it returns the corresponding telephone digit as a character; otherwise, it returns character
// '?' to indicate that an invalid character has been entered.
// This function uses MULTI-BRANCH IF-ELSE STATEMENTS to determine the matching digit for the letter entered
char letter2digitB(char letter){
  char dig;

if (letter >= 'A'){
  if (letter <= 'Z'){
    if (letter <= 'C'){
      dig = '2';
      } else if (letter <='F'){
        dig = '3';
        } else if (letter <= 'I'){
          dig = '4';
          }  else if(letter <= 'L'){
            dig = '5';
            } else if(letter <= 'O'){
              dig = '6';
              } else if(letter <= 'S'){
                 dig = '7';
                } else if(letter <= 'V'){
                  dig = '8';
                  } else if(letter <= 'Z'){
                    dig = '9';
                    } else {
                      dig = '?';
                      } 
  }
  else {
    dig = '?';
  }
}  
  
  else {
    dig ='?';
  }

  
  return dig;
}