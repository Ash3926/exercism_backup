#include "atbash_cipher.h"

namespace atbash_cipher {

    std::string encode(std::string to_code)
    {
        std::string reversed = "zyxwvutsrqponmlkjihgfedcba";
        std::string output = "";
        int count = 0;
        
        for (int i=0; i < (int)to_code.length(); i++)
            {
                if (to_code[i] >= 'a' && to_code[i] <= 'z')
                {
                    output += reversed[to_code[i] - 'a'];
                    count += 1;
                }
                if (to_code[i] >= 'A' && to_code[i] <= 'Z')
                {
                    output += reversed[to_code[i] - 'A'];
                    count += 1;
                }
                if (to_code[i] >= '0' && to_code[i] <= '9')
                {
                    output += to_code[i];
                    count += 1;
                }
                if (count == 5)
                {
                    count = 0;
                    output += " ";
                }
            }

        if (output[output.length() - 1] == ' ')
            output.pop_back();

        return (output);
    }

    std::string decode(std::string to_decode)
    {
        std::string decoded = encode(to_decode);
        for (int i=0; i < (int)decoded.length(); i++)
            {
                if (std::isspace(decoded[i]))
                    decoded.erase(i, 1);
            }

        return (decoded);
    }

}  // namespace atbash_cipher
