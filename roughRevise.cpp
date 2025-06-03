#include <iostream>
#include <unordered_map>

int main()
{
    // Create an unordered_map with string keys and int values
    std::unordered_map<std::string, int> myMap;

    // Insert some key-value pairs, including negative values
    myMap["apple"] = 10;
    myMap["banana"] = -5;
    myMap["orange"] = -20;

    // Access and print the values
    std::cout << "apple: " << myMap["apple"] << std::endl;
    std::cout << "banana: " << myMap["banana"] << std::endl;
    std::cout << "orange: " << myMap["orange"] << std::endl;

    return 0;
}
