#include <iostream>
using namespace std;


int getAnswer(istream& input);
void printChoices();
void printQuestion();

int main()
{
  printQuestion();
  printChoices();
  //getAnswer(cin);

  return(0);
}

int getAnswer(istream& input)
{
  string answer;
  input >> answer;
  cout << answer;
}

void printQuestion()
{
  cout << "One question Quiz ;) -- " << "(Enter ABCD key to answer)" << endl;
  cout << "A program that outputs 'Hello Word' is usually called a _______";
  cout << "program\n"<< endl;
}

void printChoices()
{
  cout << "A) A time machine program \nB) Hello World program";
  cout << "\nC) Calculator program \nD) None of the above" << endl;
}
