#include "raindrops.h"

namespace raindrops {

    std::string threes(int num) {
        if (num % 3 == 0)
            return ("Pling");
        return ("");
    }
    std::string fives(int num) {
        if (num % 5 == 0)
            return ("Plang");
        return ("");
    }
    std::string sevens(int num) {
        if (num % 7 == 0)
            return ("Plong");
        return ("");
    }

    std::string convert(int num) {
        if (num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
            return (std::to_string(num));
        return (raindrops::threes(num) + raindrops::fives(num) + raindrops::sevens(num));
    }

}  // namespace raindrops
