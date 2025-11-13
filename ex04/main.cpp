#include <iostream>
#include <fstream>
#include <string>


int main(int ac, char **av)
{
    if(ac!= 4)
    {
        std::cout<<"Wrong number of arguments"<<std::endl;
        return 1;
    }
    std::ifstream file(av[1]); //dosya açma
    if(!file.is_open())//dosya açılamadıysa
    {
        std::cout<<"Could not open the file"<<std::endl;
        return 1;
    }
    std::string s1=av[2];
    std::string s2=av[3];
    if(s1.empty() || s2.empty()) // boş string kontrolü
    {
        std::cout<<"Strings must not be empty"<<std::endl;
        return 1;
    }

    //.c_str() metodunu kullanarak std::string'i const char*'a çevirmek gerekiyor
    std::string outFileName = std::string(av[1]) + ".replace";
    std::ofstream outfile(outFileName.c_str()); //yeni dosya oluşturma

    if(!outfile.is_open()) //dosya açılamadıysa
    {
        std::cout<<"Could not create the output file"<<std::endl;
        return 1;
    }
    while(!file.eof()) //dosya sonuna kadar
    {
        std::string line;
        std::getline(file,line); //satır satır okuma
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length(); // ilerle, aksi halde yeniden aynı yerde takılabilir
        }
        outfile << line; //değiştirilmiş satırı yazma
        if(!file.eof())
            outfile << std::endl; //son satır değilse yeni satır ekle
    }
    file.close();
    outfile.close();
    return 0;
}