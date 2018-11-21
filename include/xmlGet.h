#ifndef XMLGET_H
#define XMLGET_H

#include <stdio.h>
#include <string>

#include "curl/curl.h"

class xmlGet{
    public:
        xmlGet();
    
        //gets weather data and returns path to saved data
        std::string get(std::string url, FILE *fptr);
};

#endif