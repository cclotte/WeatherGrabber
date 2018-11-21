#include "xmlGet.h"

int main(int argc, char const *argv[])
{
    xmlGet testy;
    FILE *fptr = fopen("FortCollins.xml", "w");
    std::string strr = testy.get("http://dataservice.accuweather.com/locations/v1/search?apikey=%20JhhfoGUtp2dTUb6JZJvpmYQWffiOFegp%20&q=Fort%20Collins",fptr);
    return 0;
}
