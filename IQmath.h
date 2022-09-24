#ifndef _IQ_CALCULAT_H
#define _IQ_CALCULAT_H 

#include "includes.h"
#include "comm_types.h"
 
#define Abs(A)    ((A>=0)?A:-A)  // 绝对值函数
#define Min(A,B)  ((A<=B)?A:B)   // 求最小函数
#define Max(A,B)  ((A>=B)?A:B)   // 求最大函数

#define   _IQ15(A)       (int)((A)<<15)  //左移15位 32768
#define   _IQ(A)          _IQ15(A)           //定义IQ格式 32768
#define   _IQmpy(A,B)    (int)((A*B)>>15)  //IQ格式相乘 
#define   _IQ10mpy(A,B)   (int)((A*B)>>10) //IQ10格式相乘 
#define   _IQdiv2(A)     (int)((A)>>1)     //除2
#define   _IQmpy2(A)     (int)(A<<1)       //乘2
#define   _IQdiv(A,B)    (int)((A<<15)/B)  //IQ格式相除


#define SIN_RAD     0x0300
#define U0_90       0x0000 
#define U90_180     0x0100
#define U180_270    0x0200
#define U270_360    0x0300


typedef struct _IQSin_Cos_{ 
  int  IQAngle;  // 电机磁极位置角度0---65536即是0---360度 		
  int  IQSin; // IQ格式正弦参数，-32768---32767  -1到1 
  int  IQCos; // IQ格式余弦参数，-32768---32767  -1到1	 
} IQSin_Cos;



typedef struct _IQAtan_{ 
  int  Alpha; //二相静止坐标系 Alpha 轴	 
  int  Beta; //二相静止坐标系 Beta 轴	 	 
  int  IQTan; //IQ格式正切 45度正切是1，IQ的格式是 
  int  IQAngle; //IQ格式角度值 0---65536 == 0---360度 
  int  JZIQAngle; //矫正IQ格式角度值
} IQAtan;


extern IQSin_Cos H_sin_cos;
extern IQSin_Cos V_sin_cos;


uint IQSqrt(uint  M); // 开方函数
void  IQSin_Cos_Cale(IQSin_Cos *pV); //求取正余弦函数 
void  IQAtan_Cale(IQAtan *pV) ;  //求取求反正弦函数
int IQsat( int Uint,int  U_max, int U_min); //限制赋值函数
#endif 






