#include<iostream>

using namespace std;

int *create_array(size_t size,int init_value=0){
    int *new_storage{nullptr};
    new_storage=new int[size];
    for(size_t i{0};i<size;i++){
        new_storage[i]=init_value;
    }
    return new_storage;
}

void display(const int *const array,size_t size){
    for(size_t i{0};i<size;i++){
        cout<<*(array+i)<<" ";
    }
    cout<<endl;
}

int main(){
    int *array{nullptr};
    size_t size{0};
    int init_value{};
    cout<<"enter the size of array and the initial value of each element: ";
    cin>>size>>init_value;
    array=create_array(size,init_value);
    cout<<"\n--------------------------------------------------------------\nDisplay Array: "<<endl;
    display(array,size);
    delete [] array;
    return 0;
}