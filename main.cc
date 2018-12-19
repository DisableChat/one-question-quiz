#include <iostream>
#include <algorithm>
using namespace std;

// Function declarations, more info can be found in the function definition
void printQuestion();
void printChoices();
void getAnswer(istream& input, int inputCounter);


//*********************************************************************************
// Func:        main
// Param:       None
// Description: run the program and call nessary functions
//*********************************************************************************
int main()
{
  int inputCounter = 0;
  string answer;
  printQuestion();
  printChoices();
  getAnswer(cin, inputCounter);

  return(0);
}


//*********************************************************************************
// Func:        printQuestion
// Param:       None
// Description: Prints the question
//*********************************************************************************
void printQuestion()
{
  cout << "\nOne question Quiz ;) -- " << "(Enter ABCD key to answer)" << endl;
  cout << "A program that outputs 'Hello Word' is usually called a _______ ";
  cout << "program\n"<< endl;
}

//*********************************************************************************
// Func:        printChoices
// Param:       None
// Description: Prints the avaliable options to choose from in this case A, B, C
//              or D.
//*********************************************************************************
void printChoices()
{
  cout << "A) A time machine program \nB) Hello World program";
  cout << "\nC) Calculator program \nD) None of the above" << endl;
}

//*********************************************************************************
// Func:        getAnswer
// Param:       input, from user
//              inputCounter, makes sure that user doesn't keep entering too many
//              incorrect answers due to recursion and the stack
// Description: Take inputed choice from user, based on that choice tell the user
//              if they are correct
//*********************************************************************************
void getAnswer(istream& input, int inputCounter)
{
  string answer;
  cout << "Choice: ";
  input >> answer;

  // Using the transform func to uppercase string (from algorithms lib)
  transform(answer.begin(), answer.end(), answer.begin(), ::toupper);

  // Depending on input do the following
  if(answer == "D")
  {
    cout << "Correct! get it? because it's Hello World not Hello Word ;)" << endl;
  }
  else if(inputCounter >= 10)
  {
    cout << "\nInvalid/incorrect choice 10 times now, we are done here. Big Yikes!" << endl;
  }
  else if(answer == "A" || answer == "B" || answer == "C")
  {
    cout << "Incorrect try again!" << endl;
    inputCounter++;
    getAnswer(cin, inputCounter);
  }
  else
  {
    cout << "Invalid choice!" << endl;
    inputCounter++;
    getAnswer(cin, inputCounter);
  }
}
