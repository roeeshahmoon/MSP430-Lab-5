#ifndef _bsp_H_
#define _bsp_H_
#include <msp430.h>         // msp430x2xx
//#include <msp430xG46x.h> // msp430x4xx
#define     debounceValUP   250    // (3*244)/(2^20) ->250 to make sure
#define     LCDData         &P1OUT
#define     LCDControl      &P2OUT
#define     LCDsDataDir     &P1DIR
#define     LCDsDataSel     &P1SEL
#define     LCDsControlDir  &P2DIR
#define     LCDsControlSel  &P2SEL


#define     DynScopeSel     &P2SEL
#define     DynScopeDir     &P2DIR

#define     PBsArrPort      &P2IN
#define     PBsArrIntPend   &P2IFG
#define     PBsArrIntEn     &P2IE
#define     PBsArrIntEdgeSel   &P2IES
#define     PBsArrPortSel   &P2SEL
#define     PBsArrPortDir   &P2DIR

#define     TimerA0CTL        &TA0CTL
#define     TA0CC             &TACCTL0
#define     TA0Count          &TACCR0
#define     TA0Interrupt     &TA0IV

#define     TimerA1CTL        &TA1CTL
#define     TA1CC2           &TA1CCTL2
#define     TA1Count         &TA1CCR2


#define     T0       R7
#define     T1       R8



                                

#endif