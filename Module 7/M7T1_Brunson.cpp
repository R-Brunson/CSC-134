// CSC 134
// M7T1 -- Restaurant Rating Program
// Ricky Brunson
// 4/28/25

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
  
class Restaurant {
    private:
      string name;    // the name
      double rating;  // 0 to 5 stars
  
    public:
      // constructor 
      Restaurant(string n, double r) {
          name = n;
          rating = r;
      }
      Restaurant() {
        //default empty constructor
      }
      // getters and setters
      void setName(string n) {
          name = n; 
      }
      void setRating(double r) {
          rating = r;
      }
      string getName() const {
          return name;
      }
      double getRating() const {
          return rating;
      }
      void showInfo() {
        //print restaurant info nicely
        cout << "Restaurant Name: ";
        cout << this->name << endl;
        cout << "Restaurant Rating: ";
        cout << this->rating << endl;
      }
  };
  
int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    //create a sample restaurant
    Restaurant rest1 = Restaurant("Mi Casita", 3.5);
    Restaurant rest2 = Restaurant();
    cout << "Enter a restaurant name: ";
    string name;
    // This trick lets us get names with spaces
    cin.ignore(); // skips extra newline
    getline(cin, name); // reads entire line 
    cin >> name;
    rest2.setName(name);
    cout << "Enter a restaurant rating: ";
    double rating;
    cin >> rating;
    rest2.setRating(rating);
   
rest1.showInfo();
    cout << endl;
rest2.showInfo();
    cout << endl;
    
    return 0;
}