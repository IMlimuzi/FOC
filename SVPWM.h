#ifndef __SVPWM_H_
#define __SVPWM_H_  
#include "gd32f4xx.h"
//#include "includes.h"


typedef struct _SVPWM_
{ 
  int32_t  Ualpha;//  二相静止坐标系alpha-轴
  int32_t  Ubeta; //  二相静止坐标系beta-轴 
  int32_t  Ta;    //  三相矢量占空比Ta
  int32_t  Tb;    //  三相矢量占空比Tb
  int32_t  Tc;    //  三相矢量占空比Tc
  int32_t  Ia;    //  三相静止坐标系的电流temp1   
  int32_t  Ib;    //  三相静止坐标系的电流temp2
  int32_t  Ic;    //  三相静止坐标系的电流temp3
  uint16_t VecSector;//  矢量空间扇区号
} SVPWM ;

//extern SVPWM svpwm;




typedef void(*pctr) (void);

extern pctr six_step_commu[6];




void  SVPWM_Contrl();
void time2_pwm_duty_change(unsigned int pwm_duty);
void bldc_six_step();
void svpwm_init_modle();
void  H_FOC_Contrl();
#endif



