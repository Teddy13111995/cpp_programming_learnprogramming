#include<iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num1{300};//global variable - declared outside scope of any class ar function

void local_example(int x){
    int num1{1000};//local to local_example
    cout<<"\n local num is: "<<num1<<" in local_example - start"<<endl;
    num1=x;
    cout<<"\n local num is: "<<num1<<" in local_example - end"<<endl;
    //num1 in main is not within the scope - so it can't be used here
}

void global_example(){
    cout<<"\nGlobal num is: "<<num1<<" in global_example - start"<<endl;
    num1*=2;
    cout<<"\nGlobal num is: "<<num1<<" in global_example - end"<<endl;
}

void static_local_example(){
    static int num1{5000};//local to static_local_example_static - retains its value between calls
    cout<<"\nLocal static num is: "<<num1<<" in static_local_example - start"<<endl;
    num1+=1000;
    cout<<"\nLocal static num is: "<<num1<<" in static_local_example - end"<<endl;
} 
int main(){
    int num1{100};//local to main
    int num2{500};//local to main
    cout<<"local num is: "<<num1<<" in main"<<endl;
    {
        //creates a new level of scope
        int num1{200};//local to this inner block
        cout<<"Local num is: "<<num1<<" in inner block in main"<<endl;
        cout<<"Inner block in main can see out - num2 is: "<<num2<<endl;
    }
    cout<<"local num is: "<<num1<<" in main"<<endl;
    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    return 0;
}