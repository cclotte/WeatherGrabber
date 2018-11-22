#include "xmlGet.h"

int main(int argc, char const *argv[])
{
    //TODO make curl in testy?? that way initialization isn't something the end user needs to worry about
    weatherGet testy;
    testy.setLocationURL("http://dataservice.accuweather.com/locations/v1/cities/search?apikey=%20JhhfoGUtp2dTUb6JZJvpmYQWffiOFegp%20&q=Fort%20collins");
    //FILE *fptr = fopen("FortCollins.xml", "w");
    testy.getLocationData();
    testy.setCityName("Fort Collins");
    testy.writeToFile();
    
    return 0;
}
