#include "parse.h"

std::string parse::uniqueData(std::string keyPhrase, std::string _fileLocation){
    return "Poop";
};
std::string parse::uniqueData(std::string keyPhrase){
    using std::ifstream;
    using std::string;
    using std::stringstream;
    using std::istringstream;
    using std::cout;

    string s, identifier, key, temps;
    ifstream file;
    istringstream iss(identifier);
    bool found = 0;
    file.open(fileLocation);
    while(getline(file, s, ',') && !found){
        iss.str(s);
        iss.clear();
        //char temp;
       // iss.get(temp);
        //if(temp != '\"') iss.unget();
        while(getline(iss, identifier, '\"')){
            if(identifier == keyPhrase){
                if(!getline(getline(iss, temps, '\"'), key, '\"')){
                    std::cerr << "No Key after identifier";
                    exit(EXIT_FAILURE);
                }
                found = 1;
                break;
                
            }
        }
    }
    //cout << key;
    file.close();
    return key;
};