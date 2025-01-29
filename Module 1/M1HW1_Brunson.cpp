// CSC 134
// M1T2
// Ricky Brunson
// 1/26/25

#include <iostream>

using namespace std;
  
int main()
{
    string movieName = "\"WALL-E\"";
    string publishYear = "2008";
    double movieGross = 521.3;

    cout << "The movie " << movieName;
    cout << " came out in " << publishYear;
    cout << ", and had a worldwide gross of around $" << movieGross;
    cout << "million dollars." << endl;
    cout << endl; 

    //need to add facts, ideas are the studio who released them, ratings, ect
    cout << "The movie " << movieName << " was published by Pixar Animation Studios." << endl;
    cout << "Directed by Andrew Stanton." << endl;
    cout << "The run time of movie " << movieName << " is 1 hour and 38 minutes." << endl; 

    cout << endl; 
    return 0; // no errors
}