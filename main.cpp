
#include <iostream>
using namespace std;

const string animals[]={"Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig"};
string getAnimal(int year)
{
    return animals[(year-4)%12];
}
int main () {
    int year;//[10];
   // int i;
    cout << " type the year !"<< endl;
    cin >> year;
    cout << getAnimal(year);
    return 0;


}