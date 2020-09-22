#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

int main()
{
    std::ifstream cFile ("settings.ini");
	int i=0;
	int delimiterPos;
    std::string line;
    if (cFile.is_open()) {
        while(getline(cFile, line)){
			line.erase(std::remove_if(line.begin(), line.end(),
				                      isspace), line.end());
			delimiterPos = line.find("=");
			std::cout << "var" << i << " " << line.substr(0, delimiterPos);
			std::cout << " = " << line.substr(delimiterPos + 1) << std::endl;;
			i++;
        }
    } else {
        std::cerr << "Couldn't open config file for reading.\n";
    };
}