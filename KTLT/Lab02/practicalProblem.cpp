#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

struct Player{
    string pos, name, team, club;
    int birthYear;
};

string toUpper(string a){
    string b = "";
    for (int i = 0; i < a.size(); i++){
        if ('a' <= a[i] && a[i] <= 'z')
            b+= a[i];
        else if ('A' <= a[i] && a[i] <= 'Z')
            b+= toupper(a[i]);
        else
            b+= a[i];
    }
    return b;
}

string toLower(string a){
    string b = "";
    for (int i = 0; i < a.size(); i++){
        b+= tolower(a[i]);
    }
    return b;
}

void searchFor(vector<Player> players, string key, int group){
    for (Player p:players)
        if (p.name.find(toUpper(key)) != string::npos || p.name.find(toLower(key)) != string::npos){
            cout << p.name << " | " << p.pos << " | " << p.birthYear << " | " << p.team << " | " << p.club << endl;
        }
        
            
}

int main(){
    ifstream in("Players.txt");
    
    int n = 0;
    string guy;
    vector<Player> players;
    
    while (getline(in, guy)){
        char guyChar[100];
        strcpy(guyChar, guy.c_str());
        char *split = strtok(guyChar, "/");
        
        Player aGuy;
        
        aGuy.pos = split;
        
        split = strtok(NULL, "/");
        aGuy.name = split;
        
        split = strtok(NULL, "/");
        string year = split;
        aGuy.birthYear = stoi(year.substr(0, 4));
        
        split = strtok(NULL, "/");
        aGuy.team = split;
        
        split = strtok(NULL, "/");
        aGuy.club = split;
        
        players.push_back(aGuy);
        
        n++;
    }
    
    // searchFor(players, "é", 1);
    // wchar_t a = 'é';
    cout << int(toupper(a)) << " " << int('É') << endl;
    cout << int('ú') << " " << int('Ú') << endl;
    cout << int('ã') << " " << int('Ã') << endl;
    cout << int('a') << " " << int('A');
    
}