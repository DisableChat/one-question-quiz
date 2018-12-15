#include <iostream>
#include <cctype>
using namespace std;


void printQuestion();
void printChoices();
char getAnswer(istream& input);
void printResult(char answer);

int main()
{
  char answer;
  printQuestion();
  printChoices();
  answer = getAnswer(cin);
  printResult(answer);

  return(0);
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

void printResult(char answer)
{
  if(answer == 'D')
  {
    cout << "Correct! get it? because it's Hello World not Hello Word ;)" << endl;
  }
  else
  {
    cout << "Incorrect try again!" << endl;
    answer = getAnswer(cin);
    printResult(answer);
  }
}
