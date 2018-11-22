#ifndef XMLGET_H
#define XMLGET_H

#include <stdio.h>
#include <string>
#include <iostream>
#include <ostream>
#include <fstream>

#include "curl/curl.h"

class weatherGet{
    
    public:
       
        weatherGet();

        int setLocationURL(std::string URL){locationURL = URL;return 0;};

        int setConditionURL(std::string URL){currentCondURL = URL;return 0;};

        int setForecastURL(std::string URL){forecastURL = URL;return 0;};

        int setLocationKey(std::string _locationKey){locationKey = _locationKey;return 0;};

        int setCityName(std::string _cityName){cityName = _cityName; return 0;};

        //gets weather data and returns path to saved data
        std::string getLocationData();
        
        //gets location key after getLocationData has been called
        std::string getLocationKey();

        //TODO
        //gets current condition data (how to not rewrite code? - call getLocation? - need to rewrite getLocation 
        // with less hardcode)
        std::string getCurrentConditionData();

        //gets forecast data (how to not rewrite code?)
        std::string getForecastData();

        //write data to file (how to not rewrite code?)
        int writeToFile();

    private:
        CURL *curl;
        std::string locationData;
        std::string currentConditionData;
        std::string forecastData;
        std::string locationKey;
        std::string locationURL;
        std::string forecastURL;
        std::string currentCondURL;
        std::string cityName;

        
};

#endif