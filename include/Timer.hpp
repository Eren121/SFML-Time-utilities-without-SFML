#pragma once

#include "Clock.hpp"

/// @brief IRL Time Timer.
/// @details Can be restarted by calling copy constructor.
class Timer
{
public:
    Timer(Time amount = {});
    
    bool elapsed() const;
    
private:
    Time m_end;
};

