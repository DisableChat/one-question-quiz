#include <iostream>
#include <algorithm>
using namespace std;


void printQuestion();
void printChoices();
void getAnswer(istream& input);

int main()
{
  string answer;
  printQuestion();
  printChoices();
  getAnswer(cin);

  return(0);
}

void printQuestion()
{
  cout << "\nOne question Quiz ;) -- " << "(Enter ABCD key to answer)" << endl;
  cout << "A program that outputs 'Hello Word' is usually called a _______ ";
  cout << "program\n"<< endl;
}

void printChoices()
{
  cout << "A) A time machine program \nB) Hello World program";
  cout << "\nC) Calculator program \nD) None of the above" << endl;
}

void getAnswer(istream& input)
{

  string answer;
  cout << "Choice: ";
  input >> answer;

  // Using the transform func to uppercase string (from algorithms lib)
  transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
  cout << answer << endl;

  if(answer == "D")
  {
    cout << "Correct! get it? because it's Hello World not Hello Word ;)" << endl;
  }
  else if(answer == "A" || answer == "B" || answer == "C")
  {
    cout << "Incorrect try again!" << endl;
    getAnswer(cin);
  }
  else
  {
    cout << "Invalid choice!" << endl;
    getAnswer(cin);
  }
}

