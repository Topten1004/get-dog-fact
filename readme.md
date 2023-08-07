# Random Dog Fact C++ Project

This C++ program fetches a random dog fact from the Kinduff dog-api using the cpp-httplib library. It makes an HTTP GET request to the `/api/facts/random` endpoint of the Kinduff dog-api and prints the fetched dog fact to the screen.

## Dependencies

- cpp-httplib: The cpp-httplib library is used to make HTTP requests to the Kinduff dog-api. It provides a simple and easy-to-use interface for handling HTTP communication. You can find the library [here](https://github.com/yhirose/cpp-httplib).

## How to Run

Follow the steps below to compile and run the program:

1. Install cpp-httplib (Assuming you have git and cmake installed):
   
   ```bash
    git clone https://github.com/yhirose/cpp-httplib.git
    cd cpp-httplib
    cmake .
    make
    sudo make install

2. Clone the GitHub repository containing the code:

   ```bash
   git clone https://github.com/TopTen1004/get-dog-fact.git
   cd get-dog-fact

3. Compile the code using g++:

   ```bash
    g++ -std=c++11 -o main main.cpp -lhttplib

4. Compile the code using g++:
   ```bash
   ./main

The program will fetch a random dog fact from the Kinduff dog-api and display it on the screen.

## How it Works

The C++ program uses the cpp-httplib library to create an HTTP client and make a GET request to the /api/facts/random endpoint of the Kinduff dog-api. The response from the API is then printed to the screen, displaying the fetched dog fact.

## Sample Output

Fetching a random dog fact...
Dog Fact: Labrador Retrievers are one of the most popular dog breeds in the United States.
