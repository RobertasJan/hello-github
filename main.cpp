#include <iostream>
#include <fstream>

int main()
{
    std::ofstream output ("HelloTxt.txt");
    for (int i=0; i<1000; i++) {
        output << "Hello GitHub!" << '\n';
    }
    output << std::flush;

    return 0;
}
