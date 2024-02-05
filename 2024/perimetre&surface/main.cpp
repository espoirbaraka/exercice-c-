#include <iostream>



int main()
{
    float lo;
    float la;
    std::cout<<"Saisi la longueur"<<std::endl;
    std::cin>>lo;
    std::cout<<"Saisi la largeur"<<std::endl;
    std::cin>>la;
    std::cout<<"Perimetre = "<<(lo+la)*2<<std::endl;
    std::cout<<"Surface = "<<lo*la<<std::endl;
}
