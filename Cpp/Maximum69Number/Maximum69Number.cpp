// Maximum69Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<cmath>
#include <string>
#include <sstream>

class Solution {
public:
    int maximum69Number(int num) {
        std::string number = std::to_string(num);
        for (int i = 0; i <= sizeof(number); i++) {
            if (number[i] == '6') {
                number[i] = '9';
                break;
            }
        }
        int max_number = std::stoi(number);
        return max_number;
    }
};

int main()
{
    Solution number;
    int num = 0;

    while (num >= 0) {
        std::cout << "Insert the number consisting only of digits 6 and 9" << std::endl;
        std::cin >> num;
        std::string str_num = std::to_string(num);
        for (int i = 0; i < sizeof(str_num); i++) {
            if (str_num[i] == '9' || str_num[i] == '6') {
                std::cout << number.maximum69Number(num) << std::endl;
                goto jump;
            }
            else {
                std::cout << "YOU CAN USE ONLY OF DIGITS 6 AND 9 YOU IDIOT!!!" << std::endl;
                goto again;
            }
        }
    again:
        continue;
    jump:
        break;
    }
 
    return 0;
    
}
