#include "include/functions.h"
#include <string>
#include <algorithm>

namespace func {
    std::string nth_permutation_of(std::string &str, int &nth_permutation) {
        std::string result;
        int counter = 1;
    
        if (nth_permutation == 1) {
            return str;
        } else {
            counter++;
            while (std::next_permutation(str.begin(), str.end())) {
                //std::cout << str << " counter: " << counter << '\n';
                if (counter >= nth_permutation) {
                    result = str;
                    break;
                }
                counter++;
            }
        
            return result;
        }
    }
}