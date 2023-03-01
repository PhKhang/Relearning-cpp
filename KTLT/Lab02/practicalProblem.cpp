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

vector<Player> searchFor(vector<Player> players, string key, int group){
    vector<Player> ans;
    switch (group)
    {
    case 1:
        for (Player p:players)
            if (p.pos == key){
                ans.push_back(p);
                // cout << p.name << " | " << p.pos << " | " << p.birthYear << " | " << p.team << " | " << p.club << endl;
            }
        break;
        
    case 5:
        for (Player p:players)
            if (p.club.find(toUpper(key)) != string::npos || p.club.find(toLower(key)) != string::npos){
                ans.push_back(p);
                // cout << p.name << " | " << p.pos << " | " << p.birthYear << " | " << p.team << " | " << p.club << endl;
            }
        break;
    
    default:
        break;
    }
    return ans;
            
}

void searchForBirthYear(vector<Player> players, int key){
    for (Player p:players)
        if (p.birthYear == key){
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
    
    searchForBirthYear(players, 1994);
    
    vector<Player> search = searchFor(players, "Manchester United", 5);
    for (auto i:search)
        cout << i.name << " | " << i.pos << " | " << i.birthYear << " | " << i.team << " | " << i.club << endl;
        
    // search = searchFor(players, "Manchester City", 5);
    // search = searchFor(search, "FW", 1);
    // for (auto i:search)
    //     cout << i.name << " | " << i.pos << " | " << i.birthYear << " | " << i.team << " | " << i.club << endl;
     
    
}
