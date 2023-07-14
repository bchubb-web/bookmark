#include <algorithm>
#include <cstdint>
#include <iostream>
#include <filesystem>
#include <string>

int main() {
    int totalSize;
    std::string path = std::filesystem::current_path();
    std::cout << path << std::endl << "===========================" << std::endl;
    for (const auto & entry : std::filesystem::directory_iterator(path)) {
        if (!entry.is_directory()){
            std::cout << entry.path().string() << " - " <<  entry.file_size() << std::endl;
        }
        else {
            std::cout << entry.path().string() << " - DIR" << std::endl;
        }
    }
}
