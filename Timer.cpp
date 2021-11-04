#include "Timer.hpp"

Timer::Timer(Time amount)
    : m_end(Time::now() + amount)
{
}

bool Timer::elapsed() const
{
    return Time::now() >= m_end;
}
