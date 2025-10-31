#include <iostream>
#include <thread> // For std::this_thread::sleep_for
#include <chrono> // For std::chrono::seconds, milliseconds, etc.

int main() {
    std::cout << "Starting..." << std::endl;

    // Sleep for 2 seconds
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    std::cout << "Woke up after 2 seconds." << std::endl;

    // Sleep for 500 milliseconds
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Woke up after 500 milliseconds." << std::endl;

    return 0;
}