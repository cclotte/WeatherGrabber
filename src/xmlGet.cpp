#include "xmlGet.h"

xmlGet::xmlGet(){};
//gets weather data and returns path to saved data
std::string xmlGet::get(std::string url, FILE *fptr){
    CURL *curl;
    CURLcode res;
  
    curl_global_init(CURL_GLOBAL_ALL);
 
  
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fptr);
    
    res = curl_easy_perform(curl);
     
    if(res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
            curl_easy_strerror(res));
 
    curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return "Poop";
};