/** @file rti.h
*   @brief RTI Driver Header File
*   @date 15.July.2009
*   @version 1.00.000
*   
*   This file contains:
*   - Definitions
*   - Types
*   - Interface Prototypes
*   .
*   which are relevant for the RTI driver.
*/

/* (c) Texas Instruments 2009, All rights reserved. */


#ifndef __RTI_H__
#define __RTI_H__

/* USER CODE BEGIN (0) */
/* USER CODE END */


/* RTI General Definitions */

/** @def rtiCOUNTER_BLOCK0
*   @brief Alias name for RTI counter block 0
*
*   This is an alias name for the RTI counter block 0.
*
*   @note This value should be used for API argument @a counter
*/
#define rtiCOUNTER_BLOCK0 0U

/** @def rtiCOUNTER_BLOCK1
*   @brief Alias name for RTI counter block 1
*
*   This is an alias name for the RTI counter block 1.
*
*   @note This value should be used for API argument @a counter
*/
#define rtiCOUNTER_BLOCK1 1U

/** @def rtiCOMPARE0
*   @brief Alias name for RTI compare 0
*
*   This is an alias name for the RTI compare 0.
*
*   @note This value should be used for API argument @a compare
*/
#define rtiCOMPARE0 0U

/** @def rtiCOMPARE1
*   @brief Alias name for RTI compare 1
*
*   This is an alias name for the RTI compare 1.
*
*   @note This value should be used for API argument @a compare
*/
#define rtiCOMPARE1 1U

/** @def rtiCOMPARE2
*   @brief Alias name for RTI compare 2
*
*   This is an alias name for the RTI compare 2.
*
*   @note This value should be used for API argument @a compare
*/
#define rtiCOMPARE2 2U

/** @def rtiCOMPARE3
*   @brief Alias name for RTI compare 3
*
*   This is an alias name for the RTI compare 3.
*
*   @note This value should be used for API argument @a compare
*/
#define rtiCOMPARE3 3U

/** @def rtiNOTIFICATION_COMPARE0
*   @brief Alias name for RTI compare 0 notification
*
*   This is an alias name for the RTI compare 0 notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_COMPARE0 1U

/** @def rtiNOTIFICATION_COMPARE1
*   @brief Alias name for RTI compare 1 notification
*
*   This is an alias name for the RTI compare 1 notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_COMPARE1 2U

/** @def rtiNOTIFICATION_COMPARE2
*   @brief Alias name for RTI compare 2 notification
*
*   This is an alias name for the RTI compare 2 notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_COMPARE2 4U

/** @def rtiNOTIFICATION_COMPARE3
*   @brief Alias name for RTI compare 3 notification
*
*   This is an alias name for the RTI compare 3 notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_COMPARE3 8U

/** @def rtiNOTIFICATION_TIMEBASE
*   @brief Alias name for RTI timebase notification
*
*   This is an alias name for the RTI timebase notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_TIMEBASE 0x10000U

/** @def rtiNOTIFICATION_COUNTER0
*   @brief Alias name for RTI counter block 0 overflow notification
*
*   This is an alias name for the RTI counter block 0 overflow notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_COUNTER0 0x20000U

/** @def rtiNOTIFICATION_COUNTER1
*   @brief Alias name for RTI counter block 1 overflow notification
*
*   This is an alias name for the RTI counter block 1 overflow notification.
*
*   @note This value should be used for API argument @a notification
*/
#define rtiNOTIFICATION_COUNTER1 0x40000U

/* USER CODE BEGIN (1) */
/* USER CODE END */


/** @struct rtiBase
*   @brief RTI Register Frame Definition
*
*   This type is used to access the RTI Registers.
*/
/** @typedef rtiBASE_t
*   @brief RTI Register Frame Type Definition
*
*   This type is used to access the RTI Registers.
*/
typedef volatile struct rtiBase
{
    unsigned GCTRL;          /**< 0x0000: Global Control Register   */
    unsigned TBCTRL;         /**< 0x0004: Timebase Control Register */
    unsigned CAPCTRL;        /**< 0x0008: Capture Control Register  */
    unsigned COMPCTRL;       /**< 0x000C: Compare Control Register  */
    struct
    {
        unsigned FRCx;       /**< 0x0010,0x0030: Free Running Counter x Register         */
        unsigned UCx;        /**< 0x0014,0x0034: Up Counter x Register                   */
        unsigned CPUCx;      /**< 0x0018,0x0038: Compare Up Counter x Register           */
        unsigned : 32;       /**< 0x001C,0x003C: Reserved                                */
        unsigned CAFRCx;     /**< 0x0020,0x0040: Capture Free Running Counter x Register */
        unsigned CAUCx;      /**< 0x0024,0x0044: Capture Up Counter x Register           */
        unsigned : 32;       /**< 0x0028,0x0048: Reserved                                */
        unsigned : 32;       /**< 0x002C,0x004C: Reserved                                */
    } CNT[2U];               /**< Counter x selection:
                                    - 0: Counter 0
                                    - 1: Counter 1                                       */
    struct
    {
        unsigned COMPx;      /**< 0x0050,0x0058,0x0060,0x0068: Compare x Register        */
        unsigned UDCPx;      /**< 0x0054,0x005C,0x0064,0x006C: Update Compare x Register */
    } CMP[4U];               /**< Compare x selection:
                                    - 0: Compare 0 
                                    - 1: Compare 1
                                    - 2: Compare 2
                                    - 3: Compare 3                                       */
    unsigned TBLCOMP;        /**< 0x0070: External Clock Timebase Low Compare Register   */
    unsigned TBHCOMP;        /**< 0x0074: External Clock Timebase High Compare Register  */
    unsigned : 32;           /**< 0x0078: Reserved                                       */
    unsigned : 32;           /**< 0x007C: Reserved                                       */
    unsigned SETINT;         /**< 0x0080: Set/Status Interrupt Register                  */
    unsigned CLEARINT;       /**< 0x0084: Clear/Status Interrupt Register                */
    unsigned INTFLAG;        /**< 0x008C: Interrupt Flag Register                        */
} rtiBASE_t;

/** @def rtiREG1
*   @brief RTI1 Register Frame Pointer
*
*   This pointer is used by the RTI driver to access the RTI1 registers.
*/
#define rtiREG1 ((rtiBASE_t *)0xFFFFFC00)

/* USER CODE BEGIN (2) */
/* USER CODE END */


/* RTI Interface Functions */

void rtiInit(void);
void rtiStartCounter(unsigned counter);
void rtiStopCounter(unsigned counter);
unsigned rtiResetCounter(unsigned counter);
void rtiSetPeriod(unsigned compare, unsigned period);
unsigned rtiGetPeriod(unsigned compare);
unsigned rtiGetCurrentTick(unsigned compare);
void rtiEnableNotification(unsigned notification);
void rtiDisableNotification(unsigned notification);

/** @fn void rtiNotification(unsigned notification)
*   @brief Notification of RTI module
*   @param[in] notification Select notification of RTI module:
*              - rtiNOTIFICATION_COMPARE0: RTI compare 0 notification
*              - rtiNOTIFICATION_COMPARE1: RTI compare 1 notification
*              - rtiNOTIFICATION_COMPARE2: RTI compare 2 notification
*              - rtiNOTIFICATION_COMPARE3: RTI compare 3 notification
*              - rtiNOTIFICATION_TIMEBASE: RTI Timebase notification
*              - rtiNOTIFICATION_COUNTER0: RTI counter 0 overflow notification
*              - rtiNOTIFICATION_COUNTER1: RTI counter 1 overflow notification
*
*   @note This function has to be provide by the user.
*/
void rtiNotification(unsigned notification);

/* USER CODE BEGIN (3) */
/* USER CODE END */


#endif
