# SEDHOM_Display_OS_V4.4.4
is new version of my Library you can youse any tft display and you can install it in arduino ide , platform io or you are embeeded engineer .

======================================================================================================================================================================
## about Writer this Library
### Eng.Mustafa Sedhom (Embedded Software and Haedware Engineer) .
 Gmail : elmohandes24680@gmail.com 
 tel : +201144962908
 
======================================================================================================================================================================
## why i made this lib ?
---- this lib i use it for drawing some icons in ant tft i use it with arduino uno and nano and mega and esp32 .
---- this lib doing any thing about this tft touch display with any mcu like sd card read file touch draw any thing in this tft display .
---- GUI simple for control GPIO and smart thing .
---- simple use for beginner to use elcronics .

======================================================================================================================================================================
## what this lib do ?
---- draw some icons and wedigts and handling touch and read file from sd card .
---- handling pages it's you make it .
---- drawing pages i make it for any thing .
---- you can make Beuatiful GUI for any machine and smart homes .

======================================================================================================================================================================
## about this version -->
---- last version is -> 3.5.1
---- adding some wedgets and icons .
---- adding effect like BLUR effect .
---- handling all file for this lib and make it for begineers to use it .
---- in SEDHOM_Display_OS.h class that has 4 var 
        A -> Icon <- for drawing icons and shapes and effects and text and fonts for text ->
              1 -> WIFI_ICON(); .
              2 -> Battary_ICON(); .
              3 -> ....... show SEDHOM_Icons_And_Widgets.h .
        B -> Touch <- handling all touch mehods and output function name-> 
              1 -> onTap(x,y,h,w)->bool <- detect touch return true or false and take rectangle space for detect it  .
              1 -> onTap(x,y,h,w,*function)-> void <- detect touch and take rectangle space for detect it and do function  .
              2 -> is_preesed()-> bool <- return true if touch presed in any space in tft screen .
              3 -> get_x_Point()-> int <- return x coordenates for x touch place .
              3 -> get_y_Point()-> int <- return y coordenates for y touch place .
              3 -> get_Z_Point()-> int <- return preesed value  .
        C -> SD_Card <- handling all function to dealing betwwen sdcard and mcu
              1 -> read() , write() , ... like sd lib do exactly .
        D -> handle_page <- handling pages you do it in your project goto scrolling_betwwen_pages.ino file in example .
              1 -> SEDHOM_List_of_pages   <- put in it all function do you make it .
              2 -> Handle_all_pages(void (*pages_array[])(void), int size)-> void <- to push first page and show it in paramete dont put this parameter and put SEDHOM_Handling_pages_paramters only.
              3 -> goto_page(int number)-> void <- goto page with number .
              4 -> push_page()-> void <- show next page .
              4 -> pop_page()-> void <- show reveres page .
             
======================================================================================================================================================================
## if you want install it in arduino ide -->
----- download this folder in your pc
----- put this folder in (~/Documentos/Arduino/libraries) between your arduino libraries .
----- you should install some library becuose this lib is a top layer of drivers 
         1 -> MCUFreind_kbv  <- or choose any driver do you want and adding some setting in SEDHOM_Display_Settings.h file .
         2 -> Adarfruit Touch <- this lib for touch you can use it and edit all setting touch in SEDHOM_Display_Settings.h file .
         3 -> Adafruit GFX <- for drawing basic shapes .
         4 -> SD <- for use sd card and load images and fonts in tft screen .
         5 -> SPI <- this lib embbedded in arduino ide .
----- open arduino ide or restart arduino ide and open (file -> Examples -> SEDHOM_Display_OS -> ... ) choose any project and added any thing you want and use lib .
----- you can open new project and put in top first thing this line #include<SEDHOM_Display_OS.h> and next line SEDHOM_Display_OS   OS; and in setup OS.Init_Screen(Rotate_90_Degree,Night_Mode); and use OS. and show all proertes in this lib and see last pargraf in this to show all prpertes .

======================================================================================================================================================================
## else if you want install it in platform io -->

----- download this folder in your pc
----- create platform project .
----- put this folder in (lib folder) between your libraries .
----- you should add some library because this lib is a top layer of drivers input all library in lib folder for you project next SEDHOM_Display_OS folder
         1 -> MCUFreind_kbv  <- or choose any driver do you want and adding some setting in SEDHOM_Display_Settings.h file .
         2 -> Adarfruit Touch <- this lib for touch you can use it and edit all setting touch in SEDHOM_Display_Settings.h file .
         3 -> Adafruit GFX <- for drawing basic shapes .
         4 -> SD <- for use sd card and load images and fonts in tft screen .
         5 -> SPI <- this lib for communication protocal betwwen MCU and SD card .
----- open (SEDHOM_Display_OS ->example-> ... ) choose any project and added any thing you want and use lib .
----- you can open new project and put in top first thing this line #include<SEDHOM_Display_OS.h> and next line SEDHOM_Display_OS   OS; and in setup OS.Init_Screen(Rotate_90_Degree,Night_Mode); and use OS. and show all propirtes in this lib and see last pargraf in this to show all prpertes .

======================================================================================================================================================================
## else if you want Embedded Engineer -->

---- put this folder betwwen your project and adding this line #include<SEDHOM_Display_OS.h> and next line SEDHOM_Display_OS   OS; and in main before while loop OS.Init_Screen(Rotate_90_Degree,Night_Mode); and you can OS. to show all properites and in SEDHOM_Display_Setting.h all folders i use it and function yhis file is control all my library all files for drawing and gandling touch only .

======================================================================================================================================================================




