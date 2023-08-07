// main.cpp

#include <iostream>
#include <httplib.h>

// Function to fetch a random dog fact from the Kinduff dog-api
std::string getDogFact() {
    httplib::Client client("dog-api.kinduff.com");
    auto res = client.Get("/api/facts/random");

    if (res && res->status == 200) {
        return res->body;
    }

    return "Failed to fetch dog fact!";
}

int main() {
    std::cout << "Fetching a random dog fact...\n";

    // Get the dog fact from the API
    std::string fact = getDogFact();

    // Print the dog fact to the screen
    std::cout << "Dog Fact: " << fact << "\n";

    return 0;
}