#ifndef SEDHOM_DISPLAY_OS_H_
#define SEDHOM_DISPLAY_OS_H_
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// include lib to Draw Basic shapes but i include it in Icons_And_Widgets file
#include "SEDHOM_Display_Settings.h"
// include icons file to draw icon and widgets
#include "SEDHOM_OS_Icons_And_Widgets.h"
// include touch file
#include "SEDHOM_Display_Touch.h"
// include SD Lib
#include "SEDHOM_SD_Card.h"
// include Time lib to calc time we OS run
#include "SEDHOM_Time.h"
// include Data structure file to use Stack and Queue in my projects
#include "SEDHOM_Data_Structure.h"
// includew pages handlig file to handle user pages
#include "SEDHOM_Handlig_pages.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class SEDHOM_Display_OS
{
  public:
  SEDHOM_SD_Card SD_Card;
  SEDHOM_Icons Icon;
  SEDHOM_Touch Touch;
  SEDHOM_Handlig_Pages handle_page;
  // #define STACK_DATA_TYPE int // -> defualt
  Stack Stack;
  // #define Queue_DATA_TYPE int // -> defualt
  Queue queue;
  void Init_Screen(ROTATION_STASTUS_t Rotate,Color_t Mode);
  void Set_Device_Mode(Color_t Mode);
  int Screen_Height();
  int Screen_Width();
  Color_t Mode();
  Color_t Not_Mode();
  void Fill_Screen(Color_t color);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// define all functions
void SEDHOM_Display_OS::Init_Screen(ROTATION_STASTUS_t Rotate,Color_t Mode)
{
  init_Screen(Rotate);
  Icon.Set_Mode(Mode);
}
void SEDHOM_Display_OS::Set_Device_Mode(Color_t Mode)
{
  Icon.Set_Mode(Mode);
}
int SEDHOM_Display_OS::Screen_Height()
{
    return Screen_height ;
}
int SEDHOM_Display_OS::Screen_Width()
{
    return Screen_width;
}
Color_t SEDHOM_Display_OS::Mode()
{
  return Icon.Mode();
}
Color_t SEDHOM_Display_OS::Not_Mode()
{
  return Icon.Not_Mode();
}
void SEDHOM_Display_OS::Fill_Screen(Color_t color)
{
   FillScreen(color);  
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif /*SEDHOM_DISPLAY_OS_H_*/