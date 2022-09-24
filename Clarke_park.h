#ifndef _CLARKE_PARK_
#define _CLARKE_PARK_
#include "includes.h"

typedef struct _CLARKE_{  
  int  Ia; //  三相电流A
  int  Ib; //  三相电流B
  int  Ic; //  三相电流C
  int  Alpha; //  二相静止坐标系 Alpha 轴
  int  Beta; //  二相静止坐标系 Beta 轴
} CLARKE;


typedef struct _PARK_{  
  int  Alpha; //  二相静止坐标系 Alpha 轴
  int  Beta; //  二相静止坐标系 Beta 轴
  int  Angle; //  电机磁极位置角度0---65536即是0---360度 
  int  Ds; //  电机二相旋转坐标系下的d轴电流
  int  Qs; //  电机二相旋转坐标系下的q轴电流
  int  Sine; //  正弦参数，-32768---32767  -1到1 
  int  Cosine; //  余弦参数，-32768---32767  -1到1
} PARK; 



extern CLARKE H_clarke;
extern CLARKE H_Iclarke;
extern PARK H_park;
extern PARK H_Ipark;
//typedef struct {  
//  int32_t  Alpha; // 二相静止坐标系 Alpha 轴
//  int32_t  Beta; // 二相静止坐标系 Beta 轴
//  int32_t  Angle; // 电机磁极位置角度0---65536即是0---360度  
//  int32_t  Ds; //  电机二相旋转坐标系下的d轴电流
//  int32_t  Qs; //  电机二相旋转坐标系下的q轴电流
//  int32_t  Sine; //  正弦参数，-32768---32767  -1到1 
//  int32_t  Cosine; //  余弦参数，-32768---32767  -1到1
//} IPARK;

void CLARKE_Cale(CLARKE *clarke);
void ICLARKE_Cale(CLARKE *Iclarke);
void PARK_Cale(PARK *park);
void IPARK_Cale(PARK *Ipark);



#endif

