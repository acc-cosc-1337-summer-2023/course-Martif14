#include <iostream>
#include <vector>
#include <algorithm>
//using std::cin;//
//using std::cout;//
//using std::vector;//



int main()
{
    std::vector<int> vecObj = { 5, 7, -1, 99, -100, 10 };

    
    auto it = std::max_element(vecObj.begin(), vecObj.end());

    
    if(it != vecObj.end())
    {
        std::cout<<"Maximum Value: "<<*it << std::endl;
    }

	std::vector<int> vecObj = { -50, 0, -51, 50, -99, -100 };

    
    auto it = std::max_element(vecObj.begin(), vecObj.end());

    
    if(it != vecObj.end())
    {
        std::cout<<"Maximum Value: "<<*it << std::endl;
    }

    return 0;
}



/*int main() 
{
	cout << "*******************************\n";
	cout << " 1 - Get max value.\n";
	cout << " 2 - Get square of elements.\n";
	cout << " 3 - Exit.\n";
	cout << " Enter your choice and press return: ";
	cin >> choice;


    std::vector<int> vec(5);
    std::vector<int> vec(7);
    std::vector<int> vec(-1);
    std::vector<int> vec(99);
    std::vector<int> vec(-100);
    std::vector<int> vec(10);
    std::generate(vec.begin(-100), vec.end(99), [] {return 99;});
	
    std::vector<int> vec(-50);
    std::vector<int> vec(0);
    std::vector<int> vec(-51);
    std::vector<int> vec(50);
    std::vector<int> vec(-99);
	std::vector<int> vec(-100);
    std::generate(vec.begin(-100), vec.end(50), [] {return 50;});
	
	return 0;
}*/