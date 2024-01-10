#include "BitcoinExchange.hpp"

int main(int ac, char **argv)
{
    if (ac != 2)
        return (std::cout << "Error: could not open file." << std::endl, 1);
    std::string filename = argv[1];
    std::multimap<std::string, double> dvList2 = parseCsvFile("data.csv");
   // std::cout << "DEBUG PRINT multimap CSV\n";
    //print_multimap(dvList2);
      //  std::cout << "END DEBUG PRINT multimap CSV\n";
    std::multimap<std::string, double> dvList = parseInputFile(filename, dvList2);
    //print_multimap(dvList);
}
