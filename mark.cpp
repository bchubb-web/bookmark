#include <cstring>
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <stdlib.h>


int main(int argc, char* argv[]) {

   std::string current = (std::string)std::filesystem::current_path();

    char buf[16 * 16384];

    std::string currentPath = std::cin.read(buf, sizeof(buf));

    if (strcmp(argv[1],"-m%")) {

        std::ofstream fout((std::string)getenv("HOME") +"/.marksFile");

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
