#include <iostream>
#include <cctype>
using namespace std;


char getAnswer(istream& input);
void printResult(answer);
void printChoices();
void printQuestion();

int main()
{
  printQuestion();
  printChoices();
  getAnswer(cin);

  return(0);
}

char getAnswer(istream& input)
{
  char answer;
  cout << "Choice: ";
  input >> answer;
  answer = toupper(answer);
  if(answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D')
  {
    return answer;
  }
  else
  {
    cout << "Invalid choice!" << endl;
    getAnswer(cin);
  }
}

void printQuestion()
{
  cout << "One question Quiz ;) -- " << "(Enter ABCD key to answer)" << endl;
  cout << "A program that outputs 'Hello Word' is usually called a _______ ";
  cout << "program\n"<< endl;
}

void printChoices()
{
  cout << "A) A time machine program \nB) Hello World program";
  cout << "\nC) Calculator program \nD) None of the above" << endl;
}
