#include<iostream>
#include<vector>
#include<string>

enum Direction{North,South,East,West};
// enum Street{Main, North, Elm};//error cant use North again

std::string direction_to_string(Direction direction){
    std::string res;
    switch (direction)
    {
    case North:
        /* code */
        res ="North";
        break;
    case South:
        /* code */
        res ="South";
        break;
    case East:
        /* code */
        res ="East";
        break;
    case West:
        /* code */
        res ="West";
        break;
    
    default:
        res="Unknown Direction";
        break;
    }
    return res;
}

void test1(){
    std::cout<<"\nTest1=================="<<std::endl;

    Direction direction{North};
    std::cout<<"\nDirection "<<direction<<std::endl;
    std::cout<<direction_to_string(direction)<<std::endl;

    direction =West;
    std::cout<<"\nDirection "<<direction<<std::endl;
    std::cout<<direction_to_string(direction)<<std::endl;

    direction=Direction(100);
    std::cout<<"\nDirection "<<direction<<std::endl;
    std::cout<<direction_to_string(direction)<<std::endl;

    direction=static_cast<Direction>(100);
    std::cout<<"\nDirection "<<direction<<std::endl;
    std::cout<<direction_to_string(direction)<<std::endl;
}

enum Grocery_List{Milk, Bread, Apple, Orange};
std::ostream &operator<<(std::ostream &os, Grocery_List grocery_item){
    switch(grocery_item){
        case Milk:
         os<<"Milk";
         break;
        case Bread:
         os<<"Bread";
         break;
        case Apple:
         os<<"Apple";
         break;
        case Orange:
         os<<"Orange";
         break;
        default:
        os<<"invalid item";
         
    }
    return os;
}

bool is_valid_grocery_item(Grocery_List grocery_item){
    switch (grocery_item)
    {
    case Milk:
    case Bread:
    case Apple:
    case Orange:
        return true;
    default: 
    return false;
    }
}

void display_grocery_list(const std::vector<Grocery_List> &grocery_list){
    std::cout<<"Grocery List"<<"\n==========================="<<std::endl;
    int invalid_item_count{0};
    int valid_item_count{0};
    for( Grocery_List grocery_item:grocery_list){
        std::cout<<grocery_item<<std::endl;
        if(is_valid_grocery_item(grocery_item))
        valid_item_count++;
        else
        invalid_item_count++;
    }

    std::cout<<"============================="<<std::endl;
    std::cout<<"Valid Items: "<<valid_item_count<<std::endl;
    std::cout<<"Invalid Items: "<<invalid_item_count<<std::endl;
    std::cout<<"Total Items: "<<valid_item_count+invalid_item_count<<std::endl;
}
void test2(){
    std::cout<<"\nTest2=================="<<std::endl;

    std::vector<Grocery_List> shopping_list;
    shopping_list.push_back(Apple);
    shopping_list.push_back(Apple);
    shopping_list.push_back(Milk);
    shopping_list.push_back(Orange);

    int Helicopter{1000};
    shopping_list.push_back(Grocery_List(Helicopter));
    shopping_list.push_back(Grocery_List(0));

    display_grocery_list(shopping_list);
}

enum State{Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence{Abort, Hold, Launch};

std::istream &operator>>(std::istream &is, State &state){
    std::underlying_type_t<State> user_input;
    is>>user_input;

    switch(user_input){
        case Engine_Failure:
        case Inclement_Weather:
        case Nominal:
        case Unknown:
         state=State(user_input);
         break;
        default:
         std::cout<<"User input is not a valid launch state."<<std::endl;
         state=Unknown;
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, const Sequence &sequence){
    switch(sequence){
        case Abort:
        os<<"Abort";
        break;
        case Hold:
        os<<"Hold";
        break;
        case Launch:
        os<<"Launch";
        break;
    }
    return os;
}

void initiate(Sequence seq){
    std::cout<<" Initiate "<<seq<<" sequence"<<std::endl;
}
void test3(){
    std::cout<<"\nTest3=================="<<std::endl;
    State state;
    std::cout<<"Launch state: ";
    std::cin>>state;

    switch (state)
    {
    case Engine_Failure:
    case Unknown:
        initiate(Abort);
        /* code */
        break;
    case Inclement_Weather:
        initiate(Hold);
        break;
    case Nominal:
    initiate(Launch);
    }
}

int main(){

    test1();
    test2();
    test3();
    return 0;
}