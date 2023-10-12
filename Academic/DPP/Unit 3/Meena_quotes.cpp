
// #include <iostream>
// #include <fstream>
// #include <string>

// int main() {
//     std::ofstream outputFile("quotes.txt");
//     if (!outputFile) {
//         std::cerr << "Failed to create the quotes.txt file." << std::endl;
//         return 1;
//     }

//     std::cout << "";
//     std::string quote;
//     while (true) {
//         std::getline(std::cin, quote);
//         if (quote == ".") {
//             break; 
//         }
//         outputFile << quote << '\n';
//     }

//     outputFile.close();
//     std::cout << "";

//     std::ifstream inputFile("quotes.txt");
//     if (!inputFile) {
//         std::cerr << "Failed to open the quotes.txt file for reading." << std::endl;
//         return 1;
//     }

//     std::cout << "";
//     while (std::getline(inputFile, quote)) {
//         std::cout << quote << '\n';
//     }

//     inputFile.close();

//     return 0;
// }






#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // for EXIT_FAILURE

int main() {
    std::ofstream outputFile("quotes.txt");
    if (!outputFile) {
        std::cerr << "Failed to create the quotes.txt file." << std::endl;
        return EXIT_FAILURE;
    }

    std::string quote;
    while (true) {
        std::getline(std::cin, quote);
        if (quote == ".") {
            break;
        }
        outputFile << quote << '\n';
    }

    // outputFile will be automatically closed when it goes out of scope.

    std::ifstream inputFile("quotes.txt");
    if (!inputFile) {
        std::cerr << "Failed to open the quotes.txt file for reading." << std::endl;
        return EXIT_FAILURE;
    }

    while (std::getline(inputFile, quote)) {
        std::cout << quote << '\n';
    }

    // inputFile will be automatically closed when it goes out of scope.

    return EXIT_SUCCESS; // Using EXIT_SUCCESS to indicate successful execution.
}
