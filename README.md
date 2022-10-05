# ic-yaml

erro ao tentar usar a "yaml-cpp/yaml.h"

texto do erro:


lucas-damo@lucas-damo:~/ic-yaml/IC-RealTime/cpp-project-template-ic-main$ make
g++ ./src/Main.cpp -o ./bin/main.exe -lm -Iinclude
/usr/bin/ld: /tmp/cc7vwNhF.o: in function `main':
Main.cpp:(.text+0x5a): undefined reference to `YAML::LoadFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
collect2: error: ld returned 1 exit status
make: *** [Makefile:19: bin/main] Error 1
