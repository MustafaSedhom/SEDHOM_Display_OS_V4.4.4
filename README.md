# SEDHOM_Display_OS_V4.4.4
<br>
is new version of my Library you can youse any tft display and you can install it in arduino ide , platform io or you are embeeded engineer .<br>
you can see most project i made with this library and arduino uno and tft 3.5 inch sheild as apicture and videos look this link in my Google Drive = https://drive.google.com/drive/folders/16Hg8dgcBH3FalRkK8SDBWj2221bd8Fue?usp=sharing <br>
======================================================================================================================================================================
## about Writer this Library <br>
### Eng.Mustafa Sedhom (Embedded Software and Haedware Engineer) .<br>
<br>
 Gmail : elmohandes24680@gmail.com <br>
 tel : +201144962908<br>
 
======================================================================================================================================================================
## why i made this lib ?<br>
---- this lib i use it for drawing some icons in ant tft i use it with arduino uno and nano and mega and esp32 .<br>
---- this lib doing any thing about this tft touch display with any mcu like sd card read file touch draw any thing in this tft display .<br>
---- GUI simple for control GPIO and smart thing .<br>
---- simple use for beginner to use elcronics .<br>

======================================================================================================================================================================
## what this lib do ?<br>
---- draw some icons and wedigts and handling touch and read file from sd card .<br>
---- handling pages it's you make it .<br>
---- drawing pages i make it for any thing .<br>
---- you can make Beuatiful GUI for any machine and smart homes .<br>

======================================================================================================================================================================
## about this version --><br>
---- last version is -> 3.5.1<br>
---- adding some wedgets and icons .<br>
---- adding effect like BLUR effect .<br>
---- handling all file for this lib and make it for begineers to use it .<br>
---- in SEDHOM_Display_OS.h class that has 4 var <br>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A -> Icon <- for drawing icons and shapes and effects and text and fonts for text -><br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 -> WIFI_ICON(); .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 -> Battary_ICON(); .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 -> ....... show SEDHOM_Icons_And_Widgets.h .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;B -> Touch <- handling all touch mehods and output function name-> <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 -> onTap(x,y,h,w)->bool <- detect touch return true or false and take rectangle space for detect it  .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 -> onTap(x,y,h,w,*function)-> void <- detect touch and take rectangle space for detect it and do function  .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 -> is_preesed()-> bool <- return true if touch presed in any space in tft screen .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 -> get_x_Point()-> int <- return x coordenates for x touch place .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 -> get_y_Point()-> int <- return y coordenates for y touch place .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 -> get_Z_Point()-> int <- return preesed value  .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;C -> SD_Card <- handling all function to dealing betwwen sdcard and mcu<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 -> read() , write() , ... like sd lib do exactly .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;D -> handle_page <- handling pages you do it in your project goto scrolling_betwwen_pages.ino file in example .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 -> SEDHOM_List_of_pages   <- put in it all function do you make it .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 -> Handle_all_pages(void (*pages_array[])(void), int size)-> void <- to push first page and show it in paramete dont put this parameter and put SEDHOM_Handling_pages_paramters only.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 -> goto_page(int number)-> void <- goto page with number .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 -> push_page()-> void <- show next page .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 -> pop_page()-> void <- show reveres page .<br>
             
======================================================================================================================================================================
## if you want install it in arduino ide --><br>
----- download this folder in your pc<br>
----- put this folder in (~/Documentos/Arduino/libraries) between your arduino libraries .<br>
----- you should install some library becuose this lib is a top layer of drivers <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 -> MCUFreind_kbv  <- or choose any driver do you want and adding some setting in SEDHOM_Display_Settings.h file .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 -> Adarfruit Touch <- this lib for touch you can use it and edit all setting touch in SEDHOM_Display_Settings.h file .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 -> Adafruit GFX <- for drawing basic shapes .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 -> SD <- for use sd card and load images and fonts in tft screen .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 -> SPI <- this lib embbedded in arduino ide .<br>
----- open arduino ide or restart arduino ide and open (file -> Examples -> SEDHOM_Display_OS -> ... ) choose any project and added any thing you want and use lib .<br>
----- you can open new project and put in top first thing this line #include<SEDHOM_Display_OS.h> and next line SEDHOM_Display_OS   OS; and in setup OS.Init_Screen(Rotate_90_Degree,Night_Mode); and use OS. and show all proertes in this lib and see last pargraf in this to show all prpertes .<br>

======================================================================================================================================================================
## else if you want install it in platform io --><br>

----- download this folder in your pc<br>
----- create platform project .<br>
----- put this folder in (lib folder) between your libraries .<br>
----- you should add some library because this lib is a top layer of drivers input all library in lib folder for you project next SEDHOM_Display_OS folder<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 -> MCUFreind_kbv  <- or choose any driver do you want and adding some setting in SEDHOM_Display_Settings.h file .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 -> Adarfruit Touch <- this lib for touch you can use it and edit all setting touch in SEDHOM_Display_Settings.h file .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 -> Adafruit GFX <- for drawing basic shapes .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 -> SD <- for use sd card and load images and fonts in tft screen .<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 -> SPI <- this lib for communication protocal betwwen MCU and SD card .<br>
----- open (SEDHOM_Display_OS ->example-> ... ) choose any project and added any thing you want and use lib .<br>
----- you can open new project and put in top first thing this line #include<SEDHOM_Display_OS.h> and next line SEDHOM_Display_OS   OS; and in setup OS.Init_Screen(Rotate_90_Degree,Night_Mode); and use OS. and show all propirtes in this lib and see last pargraf in this to show all prpertes .<br>

======================================================================================================================================================================
## else if you want Embedded Engineer --><br>

---- put this folder betwwen your project and adding this line #include<SEDHOM_Display_OS.h> and next line SEDHOM_Display_OS   OS; and in main before while loop OS.Init_Screen(Rotate_90_Degree,Night_Mode); and you can OS. to show all properites and in SEDHOM_Display_Setting.h all folders i use it and function yhis file is control all my library all files for drawing and gandling touch only .<br>

======================================================================================================================================================================
