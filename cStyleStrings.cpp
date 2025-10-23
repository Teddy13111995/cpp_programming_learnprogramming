#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temps[50]{};

    cout<<first_name<<endl;
    
    cout<<"Please enter your first name: ";
    cin>>first_name;

    cout<<"Please enter your last name: ";
    cin>>last_name;

    strcpy(full_name,first_name);
    strcat(full_name," ");
    strcat(full_name,last_name);

    cout<<" your full name is "<<full_name<<" length of your first name is"<<strlen(first_name)<<endl;


    cout<<"Enter your full name: "<<endl;
    // cin>>full_name;
    // cout<<"Your full neame is "<<full_name<<" but due to space cin flushes out rest of the characters after space so instead we use getline()"<<endl;
    cin.ignore();
    cin.getline(full_name,50);
    cout<<"Your full name is "<<full_name<<endl;

    cout<<"------------------------"<<endl;
    strcpy(temps,full_name);
    if(strcmp(temps,full_name)==0){
        cout<<temps<<" and "<<full_name<<" are the same"<<endl;
    }else{
        cout<<temps<<" and "<<full_name<<" are different"<<endl;
    }
    cout<<"-------------------------"<<endl;

    for(size_t i{0};i<strlen(full_name);i++){
        if (isalpha(full_name[i])){
            full_name[i]=toupper(full_name[i]);
    }
}

    cout<<"Your full name is "<<full_name<<endl;
    if(strcmp(temps,full_name)==0){
        cout<<temps<<" and "<<full_name<<" are the same"<<endl;
    }else{
        cout<<temps<<" and "<<full_name<<" are different"<<endl;
    }
    return 0;

}