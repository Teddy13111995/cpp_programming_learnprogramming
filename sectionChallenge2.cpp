/*
in this challenge you will create a menu driven application that will simulate a user playing songs from a playlist of songs.


We will use a list to simulate the user selecting the first song in the play then selecting next song and previous to play forward or backwards through the playlist

We will also allow users to add new song to the playlist and they will added prior to the current playing song.

the menu looks as follows:
F - Play first song
N - Play next song
P - Play previous song
A - Add and Play a new song at the current location
L - List the current playlist
====================================================
Enter a selection(Q to quit):
*/

#include<iostream>
#include<list>
#include<iomanip>

class Song{
    friend std::ostream &operator<<(std::ostream &os, const Song &song);
    std::string title;
    std::string artist;
    int duration;
    public:
    Song(std::string title,std::string artist,int duration):title{title},artist{artist},duration{duration}{}    
    bool operator==(const Song &rhs)const{
        return title==rhs.title;
    }
};

std::ostream &operator<<(std::ostream &os,const Song &song){
    os<<std::setw(20)<<std::left<<song.title<<std::setw(20)<<std::left<<song.artist<<std::setw(20)<<std::left<<song.duration<<std::endl;
    return os;
}

void menu(){
    std::cout<<"F - Play first song\nN - Play next song\nP - Play previous song\nA - Add and Play a new song at the current location\nL - List the current playlist\n====================================================\nEnter a selection(Q to quit):";    
}

void current_playlist(const std::list<Song> &songs){
    std::cout<<"Your Playlist: "<<std::endl;
    for(auto const song:songs){
        std::cout<<song;
    }
}
Song play_first_song(std::list<Song> &songs){
    return songs.front();
}

Song play_next_song(Song currentSong, std::list<Song> &songs){
    auto it=std::find(songs.begin(),songs.end(),currentSong);
    if(*it==songs.back()){
        return songs.front();
    }
    it++;
    return *it;
}

Song play_previous_song(Song currentSong, std::list<Song> &songs){
    auto it=std::find(songs.begin(),songs.end(),currentSong);
    if(*it==songs.front()){
        return songs.back();
    }
    it--;
    return *it;
}

Song add_play_new_song(Song currentSong, std::list<Song> &songs){
    auto it=std::find(songs.begin(),songs.end(),currentSong);
    std::string title;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Enter the title of the song: ";
    getline(std::cin,title);

    std::string artist;
    std::cout<<"Enter the artist of the song: ";
    getline(std::cin,artist);

    int duration;
    std::cout<<"Enter the duration of the song in minutes: ";
    std::cin>>duration;
    Song new_song(title,artist,duration);
    songs.emplace(it,new_song);
    it=std::find(songs.begin(),songs.end(),new_song);
    return *it;
}


int main(){
    Song s1("Not Afraid","Eminem", 5);
    Song s2("God's Plan","Drake",4);
    
    // std::cout<<s1;
    char ch;
    std::list<Song> songs;
    songs.push_back(s1);
    songs.push_back(s2);
    Song current_song = songs.front();
    
        
    do
    {
        current_playlist(songs);
    std::cout<<"Current Song:\n"<<current_song;
        menu();
        std::cin>>ch;
        switch (ch)
    {
    case 'F':
    case 'f':
        current_song = play_first_song(songs);
        break;
    case 'N':
    case 'n':
        current_song=play_next_song(current_song,songs);
        break;
    case 'P':
    case 'p':
        current_song=play_previous_song(current_song,songs);
        break;
    case 'A':
    case 'a':
        current_song=add_play_new_song(current_song,songs);
        break;
    case 'L':
    case 'l':
        current_playlist(songs);
        break;
    default:
        break;
    }

    
 } while (ch!='q'&& ch!='Q');
    
    return 0;
}
