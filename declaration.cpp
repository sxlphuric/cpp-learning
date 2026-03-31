#include <iostream> // allows us to use the stream of io!!!!!!!!!!
using namespace std;


int main() {
    
    int age = 13;
    
    double litersOfWaterDrankToday = 83.21;
    
    const float fsmall = 0.01, fbig = 0.02;
    const double dsmall = 0.01, dbig = 0.02;
    
    const char completed = '☒', not_completed = '☐';
    
    string name, pronoun = "He";
    
    bool minor;
    bool cantvote;
    
    cantvote = minor = age < 18;
    

    
    name = "Effectivement";
    
    cout << name;
    cout << " is " << age << ". \n";
    cout << pronoun << " has drank " << litersOfWaterDrankToday << " liters of water today. \n";
    cout << "Minor: " << minor << "\n";
    cout << "Can vote: " << not cantvote << "\n";
    cout << "f0.01 + f0.02: " << fsmall + fbig << endl;
    cout << "d0.01 + d0.02: " << dsmall + dbig << endl;
    
    cout << "\n------- TASKS -------\n\n";
    
    cout << completed << " Code in C++" << endl;
    cout << completed << " Drink water" << endl;
    cout << not_completed << " Math homework" << endl;
    
    
    return 0;
  
}
