#include <cstring>
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {

    std::filesystem::path current;
    current = std::filesystem::current_path();

    if (strcmp(argv[1],"-m%")) {
        //std::cout << (std::string)current << std::endl;
        std::ofstream fout("~/.marksFile");
        if(fout.is_open()) {
            fout << (std::string)current << std::endl;
            fout.close();
            std::cout << "Bookmark placed" << std::endl;
        }
        else {
            std::cout << "Failed to place bookmark." << std::endl;
        }
    }
}
