#include<iostream>
#include<vector>

enum class Grocery_Item{Milk=350,Bread=250,Apple=132,Orange=100};

std::ostream &operator<<(std::ostream &os, Grocery_Item grocery_item){
    std::underlying_type_t<Grocery_Item> val=std::underlying_type_t<Grocery_Item>(grocery_item);
    switch (grocery_item)
    {
    case Grocery_Item::Milk:
        os<<"Milk";
        break;
    case Grocery_Item::Bread:
        os<<"Bread";
        break;
    case Grocery_Item::Apple:
        os<<"Apple";
        break;
    case Grocery_Item::Orange:
        os<<"Orange";
        break;
    default:
    os<<"Invalid Item";
        break;
    }
    os<<" : "<<(val)<<std::endl;
    return os;
}

bool is_valid_grocery_item(Grocery_Item grocery_item){
    switch (grocery_item)
    {
    case Grocery_Item::Milk:
    case Grocery_Item::Bread:
    case Grocery_Item::Apple:
    case Grocery_Item::Orange:
        return true;
    default: 
    return false;
    }
}

void display_grocery_list(const std::vector<Grocery_Item> &grocery_list){
    std::cout<<"Grocery List"<<"\n==========================="<<std::endl;
    int invalid_item_count{0};
    int valid_item_count{0};
    for( Grocery_Item grocery_item:grocery_list){
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

void test1(){
    std::cout<<"\nTest1=================="<<std::endl;

    std::vector<Grocery_Item> shopping_list;
    shopping_list.push_back(Grocery_Item::Apple);
    shopping_list.push_back(Grocery_Item::Apple);
    shopping_list.push_back(Grocery_Item::Milk);
    shopping_list.push_back(Grocery_Item::Orange);

    int Helicopter{1000};
    shopping_list.push_back(Grocery_Item(Helicopter));
    shopping_list.push_back(Grocery_Item(350));

    display_grocery_list(shopping_list);
}

class Player{
    friend std::ostream &operator<<(std::ostream &os,const Player &p);
    public:
    std::string name;
    enum class Mode{Attack, Defense, Idle};
    enum class Direction{North, South, East, West};
    Mode mode;
    Direction dir;
    Player(std::string name,Mode mode=Mode::Idle,Direction dir=Direction::North):
    name{name},mode{mode},dir{dir}{}
    std::string get_name() const{
        return name;
    }
    void set_name(std::string name){
        this->name=name;
    }
    Mode get_mode() const{return mode;}
    void set_mode(Mode mode){this->mode=mode;}

    Direction get_direction(){return dir;}
    void set_direction(Direction dir){this->dir=dir;}
};

std::string get_player_mode(Player::Mode mode){
    std::string res;
    switch(mode){
        case Player::Mode::Attack:
            res="Attack";
            break;
        case Player::Mode::Idle:
            res="Idle";
            break;
        case Player::Mode::Defense:
            res="Defence";
            break;
    }
    return res;
}

std::string get_player_direction(Player::Direction dir){
    std::string res;
    switch (dir)
    {
    case Player::Direction::North:
        res="North";
        /* code */
        break;
    case Player::Direction::South:
        res="South";
        /* code */
        break;
    case Player::Direction::West:
        res="West";
        /* code */
        break;
    case Player::Direction::East:
        res="East";
        /* code */
        break;
    default:
        break;
    }
    return res;
}

std::ostream &operator<<(std::ostream &os, const Player &p){
    os<<"Player name: "<<p.get_name()<<"\nPlayer Mode: "<<get_player_mode(p.mode)<<"\nPlayer direction: "<<get_player_direction(p.dir)<<std::endl;
    return os;
}

void test2(){
    std::cout<<"\nTest2==================="<<std::endl;

    Player p1{"Cloud Strife", Player::Mode::Attack, Player::Direction::North};
    Player p2("Tifa Lockhart",Player::Mode::Defense,Player::Direction::West);
    Player p3("Sephiroth", Player::Mode::Idle,Player::Direction::South);

    std::cout<<p1<<std::endl;
    std::cout<<p2<<std::endl;
    std::cout<<p3<<std::endl;
}
int main(){
    test1();
    test2();
    return 0;
}