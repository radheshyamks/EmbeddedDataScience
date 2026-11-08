#include <thread>
#include <chrono>
#include <iostream>
#include <csignal>
// #include <thread>
// #include <chrono>
using namespace std;
std::sig_atomic_t quitGame(false);
void Handler(int signal){
    quitGame = true;
}
int main(int argc, char* argv[], char** env){
    std::signal(SIGINT, Handler);
    while(!quitGame){
        // Game loop code here
        std::cout<<"Game is running..."<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    std::cout<<"Game has been quit."<<std::endl;
    return EXIT_SUCCESS;
}