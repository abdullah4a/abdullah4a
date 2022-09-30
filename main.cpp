/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string getContactMail(){
    return "abdullahkhan4a@gmail.com";
}

string getOneToOneLink(){
    return "https://calendly.com/abdullah4a/30min";
}
string getMeetLink(){
    return "https://calendly.com/d/dzc-2hm-86m/one-off-meeting";
}

void printAboutMe ()
{
  string skills[10] =
    { "Spring Boot", "Java", "VueJs", "JavaScript/TypeScript", "Python",
"C/C++" };
  string spokenLanguages[5] ={ "Urdu", "English", "Punjabi" };
  
  cout << "I'm Abdullah pronounce as Mr. " << endl;

  cout << endl << "Woking from Home" << endl;
  
  cout << "Country:" << "\t" << "Pakistan" << endl;
  
  cout << "One to one :" << "\t" <<
    "[Create Meet]("<<getOneToOneLink()<<")" << endl;
    
  cout << "One Off Meeting for freelance:" << "\t" <<
    "[Create Meet]("<<getMeetLink()<<")" <<
    endl;
    
  cout << "Working On:" << endl<<endl;

  int skillsLength = sizeof (skills) / sizeof (string);

  for (int i = 0; i < skillsLength; i++)
    {
      cout<< skills[i] << "\t";
    }
    cout <<"\nCommunication Skills:" << endl<<endl;
    
    int communicationLength = sizeof (spokenLanguages) / sizeof (string);
    
    for (int i = 0; i < communicationLength; i++)
    {
      cout<< spokenLanguages[i] << "\t";
    }
    
    cout <<endl<< "\nContact Me:" << "\t" << getContactMail() << endl;
    
}

int main ()
{
  cout << "World \n" << endl;
  printAboutMe ();
  return 0;
}
