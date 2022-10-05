#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

#include "yaml-cpp/emitterstyle.h"
#include "yaml-cpp/eventhandler.h"
#include <yaml-cpp/yaml.h> 

int main()
{
    YAML::Node config = YAML::LoadFile("./data/procecess.yaml");

    

    return 0;
}
