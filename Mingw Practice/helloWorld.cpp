#include <iostream>
#include <string>
#include <list>
#include <vector>




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
    //create new array
    int testArray[] = {6,7,8,9,10};
    std::cout<<"test array"<<std::endl;
    for(int i = 0; i<(sizeof(testArray)/sizeof(*testArray)); i++)
    {
        std::cout<<testArray[i]<< " ";
    }
    std::cout<<std::endl;
    //create new list

    std::list<int> testList (testArray, testArray + sizeof(testArray) / sizeof(int) );
    std::cout<<"test list"<<std::endl;
     for (std::list<int>::iterator it = testList.begin(); it != testList.end(); it++)
    {
        std::cout<<*it << " ";
    }
    std::cout<<std::endl;
    //create new vector
    std::cout<<"test vector"<<std::endl;
    std::vector<int> testVect;
    testVect.push_back(111);

    for(int i = 0; i<testVect.size(); i++)
    {
        std::cout<<testVect[i]<< " ";
    }
     std::cout<<std::endl;
    return 0;
}
