#include <bits/stdc++.h>
using namespace std;

//friend functions in C++
//friend functions are the functions which are used to access the private and protected members of the class.

class Friend_Class
{
 //by default the scope is private over here.
 
 string student_name;
 int roll_no;
 
 public:
 void data()
 {
     cout<<"Enter Student name and roll number: "<<endl;
     cin>>student_name;
     cin>>roll_no;
 }
  
  //friend functions
  friend void display(Friend_Class obj);
};

//friend functions implementation
void display(Friend_Class obj)
{
    cout<<"Name: "<<obj.student_name<<endl;
    cout<<"Roll Number: "<<obj.roll_no<<endl;
}
int main()
{
    Friend_Class object_1;
    object_1.data();
    display(object_1);
    return 0;
}
