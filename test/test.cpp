#include <gtest/gtest.h>
#include <PID_CONTROLLER.hpp>



/**
 *
 *  @copyright GNU Public License.
 *  @file      test.cpp
 *  @brief     Uses google test frame for testing PID_CONTROLLER class.
 *  @details   https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
 *  @author    Lamar Simpson ( https://github.com/ltsimps )
 *  @date      02/20/2017
 */


/**
 * @brief Test the class function compute with the same value for setpoint and actual velocity.
 * @details since these values are the same the function should return zero since there is no change.
 */

TEST(computeTest, ActualEQSetPoint)
{

    PID_CONTROLLER pid(0,0,0,0.5);
    EXPECT_EQ(0, pid.compute(1,1));
    EXPECT_EQ(0, pid.compute(8,8));

}




/**
 * @brief Test the class function compute to make sure non of the values are negative.
 * @details These values shouldn't not be negative to use the compute function.
 */


TEST(intialValues, valuesNonNegative)
{
    PID_CONTROLLER pid(-1,-3,-5,0.5);
    ASSERT_GE(pid.getKi(),0);
    ASSERT_GE(pid.getKp(),0);
    ASSERT_GE(pid.getKd(),0);
}






/**
 * @brief Test the class function compute with different setpoint and actual velocity values.
 * @details if actual velocity is greater than setpoint, compute should return a positive value.
 *
 */

TEST(computeTest, expected)
{

    PID_CONTROLLER pid(0,0,0,0.5);
    EXPECT_GT(0, pid.compute(300,10));

}




