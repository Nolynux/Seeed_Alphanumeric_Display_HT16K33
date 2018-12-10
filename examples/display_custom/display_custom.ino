/*
 * display_custom.ino
 * Example for digital tube.
 *  
 * Copyright (c) 2018 Seeed Technology Co., Ltd.
 * Website    : www.seeed.cc
 * Author     : downey
 * Create Time: sep. 2018
 * Change Log :
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include <Wire.h>
#include "grove_dual_alphanumeric_display.h"

extern uint16_t g_display_font[];

Digital_Tube tube4;

#define SHINE_INTERVAL  1000



void setup()
{
    Wire.begin();
    tube4.init();
    tube4.setBrightness(15);
    tube4.setBlinkRate(BLINK_1HZ);
    
}


void displayCustom()
{
    tube4.clearBuf();
    tube4.setTubeSingleChar(FIRST_TUBE,'t');
    tube4.setTubeSingleChar(SECOND_TUBE,'T');
    tube4.setTubeSingleNum(THIRD_TUBE,5);
    tube4.setTubeSingleNum(FOURTH_TUBE,5);
    tube4.setPoint(true,true);
    tube4.display();
}

void loop()
{
    displayCustom();
    delay(2000);
}