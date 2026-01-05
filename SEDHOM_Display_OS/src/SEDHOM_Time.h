#ifndef SEDHOM_TIME_H_
#define SEDHOM_TIME_H_
//""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
#include "SEDHOM_Display_Settings.h"

#define SEDHOM_OS_Stop_Display(time)                        wait_time(time);
#define SEDHOM_OS_Wait(time)                                wait_time(time);
#define SEDHOM_OS_Calc_time_ms()                            millis_func();
#define SEDHOM_OS_Calc_time_us()                            milcros_func();
//""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
#endif // !SEDHOM_TIME_H