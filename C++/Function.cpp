//   FUNCTION ;->>>>>
// A function is a reusable block of code designed to perform a specific task

// Types of Functions:->
// No Parameter + No Return
// Parameter + No Return
// No Parameter + Return
// Parameter + Return




// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"HELLO WORLD"<<endl;
// }
// void janu(string name){
//         cout<<"HELLO"<<name<<endl;

// }
// int main(){
//     greet();
//     janu(" JANHAVI");
// }






// #include<iostream>
// using namespace std;
// void add(int a,int b){
//     cout<<a+b;
// }
// int main()
// {
//     add(255,45);
// }





// #include <iostream>
// using namespace std;
// bool isEven(int n){
//     return n%2==0;
// }
// int main(){
//     if(isEven(9)){
// cout<<"Even";
// }
// else{
//     cout<<"Odd";
// }
// }




// #include <iostream>
// using namespace std;
// int findMax(int a ,int b){
//     if (a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main (){
// cout<<findMax(50,80);
// }





#include <iostream>
using namespace std;
void findMin(int a ,int b){
    if (a<b){
        // return a;
        cout<<"A is smaller";
    }
    else{
        cout<<"B is smaller";
    }
}
int main (){
    findMin(50,80);
}

