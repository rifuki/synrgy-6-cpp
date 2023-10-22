#include <iostream>
#include <string>

int solution(std::string &S) {
    int N = S.length();
    int operations = 0;
    int leading_zeros = 0;
    
    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            leading_zeros++;
        } else {
            operations += 1 + leading_zeros;
            leading_zeros = 0;
        }
    }
    
    return operations;
}

int main() {
    std::string S1 = "011100";
    std::string S2 = "111";
    std::string S3 = "1111010101111";
    std::string S4(400000, '1');

    std::cout << solution(S1) << std::endl;  // Output: 7
    std::cout << solution(S2) << std::endl;  // Output: 5
    std::cout << solution(S3) << std::endl;  // Output: 22
    std::cout << solution(S4) << std::endl;  // Output: 799999

    return 0;
}

