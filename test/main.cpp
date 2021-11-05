#include <Time.hpp>
#include <Clock.hpp>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <iostream>

void sleep_for(int ms)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

int main(int argc, char *argv[])
{
    Clock clock;

    sleep_for(1000);
    std::cout << "After 1s slep: " << clock.getElapsedTime().asSeconds() << std::endl;

    clock.setSpeed(2.0f);

    sleep_for(1000);
    std::cout << "After 1s slep, speed x2: " << clock.getElapsedTime().asSeconds() << std::endl;

    clock.setPaused(true);

    sleep_for(1000);
    std::cout << "After 1s slep, paused: " << clock.getElapsedTime().asSeconds() << std::endl;

    return EXIT_SUCCESS;
}