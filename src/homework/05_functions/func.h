

get_vector_max_value
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

get_square_of_each_element