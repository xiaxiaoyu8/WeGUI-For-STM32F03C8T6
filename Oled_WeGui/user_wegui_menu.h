/*
	Copyright 2025 Lu Zhihao

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _USER_Wegui_MENU_H_
#define _USER_Wegui_MENU_H_

#include "lcd_wegui_driver.h"

extern menu_t m_main;
extern menu_t m_App_Game;
extern menu_t m_App_ThemeClock;

//-------------------m主菜单------------------------
extern menu_t m_App_UartScreen;
extern menu_t m_App_Uart_Debuger;
extern menu_t m_App_Files;
extern menu_t m_App_Setting;
extern menu_t m_wDemo;
extern menu_t m_App_8;
extern menu_t m_App_9;
extern menu_t m_App_10;
extern menu_t m_App_11;
extern menu_t m_App_12;
extern menu_t m_App_13;




extern menu_t m_wDemo_wMessage_Tip;
extern menu_t m_wDemo_wMessage_ADC;
extern menu_t m_wDemo_wMessage_Pres;
extern menu_t m_wDemo_wMessage_Pres2;
extern menu_t m_wDemo_wCheckbox;
extern menu_t m_wDemo_wSlider1;
extern menu_t m_wDemo_wSlider2;

//-------------------m.Setting设置------------------------
extern menu_t m_Setting_Display;
extern menu_t m_Setting_Time;
extern menu_t m_Setting_Speaker;
extern menu_t m_Setting_UI;
extern menu_t m_Setting_Developer;
extern menu_t m_Setting_Langauge;
extern menu_t m_Setting_About;

//-------------------m.Setting.Langauge语言------------------------
extern menu_t m_Setting_Langauge_English;
extern menu_t m_Setting_Langauge_Chinese;

//-------------------m.Setting.Display显示------------------------
extern menu_t m_Setting_Display_ScreenFPS;
extern menu_t m_Setting_Display_Brightness;
extern menu_t m_Setting_Display_InvertColors;
extern menu_t m_Setting_Display_InvertComDir;
extern menu_t m_Setting_Display_InvertSegDir;

//-------------------m.Setting.UI显示------------------------
extern menu_t m_Setting_UI_Speed;

#endif

