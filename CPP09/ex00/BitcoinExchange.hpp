#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <vector>
# include <map>
# include <sstream>
# include <fstream>

std::multimap<std::string, double> parseInputFile(const std::string& filename, std::multimap<std::string, double> &m);
std::multimap<std::string, double> parseCsvFile(const std::string& filename);
std::multimap<std::string, float>::iterator getLowerBound(std::multimap<std::string, float>& aMultimap, std::string key);
void print_multimap(const std::multimap<std::string, double>& m);

#endif /* ************************************************* BITCOINEXCHANGE_H */