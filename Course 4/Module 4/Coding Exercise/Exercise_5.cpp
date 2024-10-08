#include <iostream>
using namespace std;

//DO NOT EDIT/////////////////////
class Student {                 //
  public:                       //
    Student(string n, int id) { //
      name = n;                 //
      student_id = id;          //
    }                           //
//////////////////////////////////
  
  //add definitions below this line

  // Static function to compare two Student objects
  static bool CompareStudents(const Student& s1, const Student& s2) {
      return s1.name == s2.name && s1.student_id == s2.student_id;
  }

  //add definitions above this line
  
//DO NOT EDIT/////////
  private:          //
    string name;    //
    int student_id; //
};                  //
//////////////////////

int main() {
  
  //DO NOT EDIT code below this line

  Student andy("Andy Ace", 123456);
  Student anderson("Anderson Ace", 123456);
  Student ace("Andy Ace", 123456);
  Student andrew("Andy Ace", 234567);
  cout << boolalpha;
  cout << Student::CompareStudents(andy, anderson) << endl;
  cout << Student::CompareStudents(andy, ace) << endl;
  cout << Student::CompareStudents(andy, andrew) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
}
