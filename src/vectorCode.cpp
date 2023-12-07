#include <iostream>
    using std::cout;
    using std::endl;

#include <array>
    using std::array;

#include <vector>
    using std::vector;

int main()
{
    vector<int> myData{0,1,2,3,4};

    for (int value: myData)
    {
        cout<< value << "|";
    }
    cout<<endl;

    myData.push_back(10);
    myData.push_back(20);
    myData.push_back(30);

    myData.erase(myData.begin()+3);

    for(size_t index{0}; index <= myData.size() + 10; index++)
    {
        try
        {
            cout<< myData.at(index) << "|";
        }
        catch(std::out_of_range& ex)
        {
            cout << ex.what() <<endl;
        }


    }
    cout<<endl;
}
