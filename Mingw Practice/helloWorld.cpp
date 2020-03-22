#include <iostream>
#include <string>




int main(int argc, char* argv[])
{
    /*if(arc < 2)
    {
        std::cout << "Usage: " << argv[0] << "number" << std::endl;
        return 1;
    }*/
    std::string colors[7] = {"R","O","Y","G","B","C","P"};
    for(int i = 0; i<10 ; i ++)
    {
        for(int j = 0; j<7; j++)
        {
            std::cout<<"("<<j+i*7+1<<")";
        }
        std::cout<<std::endl;
        for(int j = 0; j<7; j++)
        {
            std::cout<<"("<<colors[j]<<")";
        }
        std::cout<<std::endl;
    }
    

    return 0;
}
