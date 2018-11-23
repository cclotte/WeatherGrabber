#ifndef PARSE_H
#define PARSE_H

#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <istream>

class parse{
    public:
        std::vector<std::string> dataList(std::string fileLocation);
        
        std::string uniqueData(std::string keyPhrase, std::string fileLocation);
        std::string uniqueData(std::string keyPhrase);
        
        int setFileLocation(std::string _fileLocation){fileLocation = _fileLocation; return 0;};

    
    private:
        std::string fileLocation;


};





#endif