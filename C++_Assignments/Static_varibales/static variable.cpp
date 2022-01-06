//When the static keyword preceded the declaration of a variable, that variable becomes a static variable.
//A static variable within a class is shared by all the objects of the class.
//A static variable inside a scope or function remains in the memory for the lifetime of the program.
/*We should use a static variable whenever we want to reuse the modified value of the variable inside a function in the next function call.Or when we want all the objects to maintain a single copy of the class variable.*/


//Example 1: Static Variable inside of a Class


#include <iostream>
using namespace std;
 
class Natural{
public:
    static int num;
 
    void increase(){
        ++num;
    }
};
/* 
  *It is important to initialize the static variable outside of a class
  *we do so by using the class name and scope resolution operator.
*/
int Natural::num = 0;
 
int main()
{   
    //Creating 1st object
    Natural obj1;
 
    //Incrementing Natural::num 2 times
    obj1.increase();
    obj1.increase();
 
    cout << "Num of 1st Object: "<< obj1.num << endl;
 
    //Creating 2nd object
    Natural obj2;
 
    cout << "Num of 2nd Object: "<< obj2.num << endl;
 
    return 0;
}



Example 2: Static Variable inside a Function

#include <iostream>
using namespace std;
 
void increase(){
    static int num = 0;
    cout << ++num << endl;
}
 
int main(){
    increase();
    increase();
    return 0;
}





