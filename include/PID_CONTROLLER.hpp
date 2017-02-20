#pragma once
/**
 *
 *  @copyright GNU Public License.
 *  @file      PID_CONTROLLER.hpp
 *  @brief     PID_Controller Class Definition. (https://en.wikipedia.org/wiki/PID_controller)
 *  @author    Lamar Simpson ( https://github.com/ltsimps )
 *  @date      02/20/2017
 *
 */



/**
 * @brief PID_CONTROLLER class computes the desired velocity (setpoint) based on the actual velocity
 */
class PID_CONTROLLER {

 public:

  /**
   * @brief PID_CONTROLLER Constructor
   * @param Kp double  (proportional coefficient)
   * @param Ki double  (integral     coefficient)
   * @param Kd double  (derivative   coefficient)
   * @param dt double  (delta value should be used for incrementing the looo)
   */
  PID_CONTROLLER(double Kp, double Ki, double Kd, double dt);

  /**
   * @brief compute the setpoint based on  actual velocity
   * @param setpoint double
   * @param actualVelocity double
   * @return result double
   */
  double compute(double setpoint, double actualVelocity);


  /**
   * @brief Return value of Kp.
   * @return Kp double.
   */
  double getKp();

  /**
   * @brief Return the value of Ki.
   * @return Ki double.
   */
  double getKi();

  /**
   * @brief Return the value of Kd
   * @return Kd double.
   */
  double getKd();

  /**
   * @brief Change the value of Kp class member variable
   * @param Kp double.
   */
  void setKp(double Kp);

  /**
   * @brief Change the value Ki  class member variable.
   * @param Ki double.
   */
  void setKi(double Ki);

  /**
   * @brief Change the value of Kd class member variable
   * @param Kd double.
   */
  void setKd(double Kd);


 private:
  double Kp,  Ki, Kd, dt;

  /**
   * @brief error: the value you want to be versus what value you have (wanted state - current state)
   */
  double error;

  /**
   * @brief integral: helps determine compensation */
  double integral;

};
