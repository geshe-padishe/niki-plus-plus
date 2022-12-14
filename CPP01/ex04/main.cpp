#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

int main(int ac, char **argv)
{
    (void)ac;

    std::ofstream       myfile_out;
    std::ifstream       myfile_in;

    std::stringstream   file_buf;
    std::string         file_str;
    
    size_t              pos = 1;

    if (ac != 4)
        return (std::cout << "Invalid Args", 1);
    myfile_in.open(argv[1], std::fstream::in);
    myfile_out.open(std::string(argv[1]).append(".replace").c_str(), std::fstream::out);
    if (!myfile_in.is_open() || !myfile_out.is_open())
        return (perror("Error"), 1);
    file_buf << myfile_in.rdbuf();
    file_str = file_buf.str();
    std::cout << file_str;
    while (true)
    {
        pos = file_str.find(argv[2]);
        if (pos == std::string::npos)
            break;
        file_str.erase(pos, std::string(argv[2]).length());
        file_str.insert(pos, std::string(argv[3]));
    }
    myfile_out << file_str;
    myfile_out.close();
    myfile_in.close();
    return (0);
}