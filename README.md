# SFML-Time-utilities-without-SFML

provide SFML Time utilities in pure C++20, no dependencies

# Example

```c++
int main()
{
    Clock clock;

    Sleep(1000);

    // prints 1.0
    std::cout << "Elapsed seconds: " << clock.restart().asSeconds() << std::endl;
    
    clock.setSpeed(2);
    
    Sleep(1000);
    
    // prints 2.0
    std::cout << "Elapsed seconds: " << clock.restart().asSeconds() << std::endl;
    
    clock.pause();
    
    Sleep(1000);
    
    // prints 0.0
    std::cout << "Elapsed seconds: " << clock.restart().asSeconds() << std::endl;
}
```
