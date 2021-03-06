#include <iostream>
using namespace std;

void changeByPointer(int* paraPointer){
    cout<<"Method: changeByPointer"<<endl;
    *paraPointer = 100;
 }

void changeByReference(int& paraReference){
    cout<<"Method: changeByReference"<<endl;
    paraReference = 123;
}

int main(){

    int age = 10; //this is the variable to be changed using a method

/*  for our purpose lets change the age value to 100 using changeByPointer
*   and to 123 using changeByReference.
*/
    cout<<"Initial age value: "<<age<<endl<<endl; //print initial value

//    ********* changeByPointer **********************
    changeByPointer(&age); //&age will be a pointer to age (to see cout<<&age<<endl;)
    cout<<"after (above) age value: "<<age<<endl<<endl; //has the value of age changed to 100?

//    ********* changeByReference **********************
    changeByReference(age); //Reference responsibly...OK!
    cout<<"after (above) age value: "<<age<<endl<<endl; //has the value of age changed to 123?

    return 0;
}
