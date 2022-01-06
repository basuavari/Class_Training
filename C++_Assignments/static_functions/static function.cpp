//A function that is declared static using the ‘static‘ keyword becomes a static function in C++.
/*When a function inside a class is declared as static, it can be accessed outside the class using the class name and scope resolution operator (::), without creating any object.*/

//A static member method has access only to the static members of the class, we can not call any non-static functions inside it.

/*All objects in the class share the same copy of the static function. It is useful in manipulating global static variables, which are again shared by all objects.*/


#include <iostream>
using namespace std;
 
class Nokia{
private:
    /*
        *declaring variable as staric, so that-
        *it will be accessible to the static functions
    */
    static string phone_name;   
public:
    //static function I
    static void name(){
        cout << "Phone: "<< phone_name;
    }
    
    //static function II
    static void set_name(string name){
        phone_name = name;
    }
};
 
//Initializing private static member
string Nokia::phone_name = "";
 
int main()
{
    //no object jas been created
    //accessing static function directly with class name
    Nokia::set_name("Nokia 2600");
    Nokia::name();
 
    return 0;
}