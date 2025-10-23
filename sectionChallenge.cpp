/*
Substitution Cipher
A simple and very old method of sending secret messages is the substitution cipher.
Basically every letter of the alphabet gets replaced by another letter of the alphabet.
For example every 'a' get replaced with an 'X' and every 'b' gets replaced with a 'Z'

write a program that asks a user to enter a secret message

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypt the encrypted message back to the original message.

you may use the 2 strings below for substitution
for example, to encrypt you can replace the character at position n in alphabet with the character at positon n in key
to decrypt you can replace the chracter at position n in alphabet with the character at positon n in alphabet

*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    const string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};

    string user_input;
    string crypted_message;
    string decrypted_messgae;

    cout<<"Enter your message to be encrypted: ";
    getline(cin,user_input);
    int pos{};
    for(char c:user_input){
        pos=alphabet.find(c);
        crypted_message.push_back(key.at(pos));
    }
    cout<<"The crypted message is: "<<crypted_message<<endl;

    for(char c:crypted_message){
        pos=key.find(c);
        decrypted_messgae.push_back(alphabet.at(pos));
    }
    cout<<"The decrypted message is: "<<decrypted_messgae<<endl;
    return 0;
}