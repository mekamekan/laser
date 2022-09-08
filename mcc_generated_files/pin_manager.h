/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F18313
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set input aliases
#define input_TRIS                 TRISAbits.TRISA2
#define input_LAT                  LATAbits.LATA2
#define input_PORT                 PORTAbits.RA2
#define input_WPU                  WPUAbits.WPUA2
#define input_OD                   ODCONAbits.ODCA2
#define input_ANS                  ANSELAbits.ANSA2
#define input_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define input_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define input_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define input_GetValue()           PORTAbits.RA2
#define input_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define input_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define input_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define input_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define input_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define input_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define input_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define input_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set output aliases
#define output_TRIS                 TRISAbits.TRISA5
#define output_LAT                  LATAbits.LATA5
#define output_PORT                 PORTAbits.RA5
#define output_WPU                  WPUAbits.WPUA5
#define output_OD                   ODCONAbits.ODCA5
#define output_ANS                  ANSELAbits.ANSA5
#define output_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define output_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define output_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define output_GetValue()           PORTAbits.RA5
#define output_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define output_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define output_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define output_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define output_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define output_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define output_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define output_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/