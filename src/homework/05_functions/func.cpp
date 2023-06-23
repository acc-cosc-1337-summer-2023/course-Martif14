

get_vector_max_value
    {
        std::vector<int> vec(5);
        std::vector<int> vec(7);
        std::vector<int> vec(-1);
        std::vector<int> vec(99);
        std::vector<int> vec(-100);
        std::vector<int> vec(10);
        std::generate(vec.begin(5), vec.end(10), [] {
        static int i = 0;
        return i++;
    });
    }

get_square_of_each_element