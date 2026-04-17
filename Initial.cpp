#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Alex", "Emma", "Michael", "Sophia", "Daniel", "Olivia"};
    
    std::cout << "Welcome to the Player Ranking System!" << std::endl;
    std::cout << "=====================================" << std::endl;
    
    std::sort(names.begin(), names.end());
    
    std::cout << "\nCurrent players sorted alphabetically:\n";
    for (int i = 0; i < names.size(); i++) {
        std::cout << i + 1 << ". " << names[i] << std::endl;
    }
    
    std::string newPlayer;
    std::cout << "\nEnter new player name: ";
    std::getline(std::cin, newPlayer);
    
    if (!newPlayer.empty()) {
        names.push_back(newPlayer);
        std::sort(names.begin(), names.end());
        
        std::cout << "\nUpdated player list:\n";
        for (int i = 0; i < names.size(); i++) {
            std::cout << i + 1 << ". " << names[i] << std::endl;
        }
    }
    
    std::cout << "\nThank you for using the system!" << std::endl;
    
    return 0;
}
