#include <iostream>
#include <PID_CONTROLLER.hpp>



int main()
{
    PID_CONTROLLER pid(0,0,0,0.5);

    pid.compute(0,0);
    std::cout<<pid.getKp()<<std::endl;
    pid.setKp(5.5);
    std::cout<<pid.getKp()<<std::endl;

    return 0;
}
