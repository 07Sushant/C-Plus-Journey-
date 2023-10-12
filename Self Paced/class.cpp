#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
        int age, standard;
        string first_name, last_name;
        void set_age(int a){
            age = a;
        }
        void set_first_name(string a){
            first_name = a;
        }
        void set_last_name(string a){
            last_name = a;
        }
        void set_standard(int a){
            standard = a;
        }
        int get_age(){
            return age;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        int get_standard(){
            return standard;
        }
	   string t_string(){
           string s = "";
           s+=to_string(age);
           s+=",";
           s+=first_name;
           s+=",";
           s+=last_name;
           s+=",";
           s+=to_string(standard);
           return s;
	   }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.t_string();
    
    return 0;
}