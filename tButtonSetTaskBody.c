/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tButtonSetTaskBody_template.c => src/tButtonSetTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * require port : signature: sKernel context: task
 *   ER             sleep( );
 *   ER             sleepTimeout( TMO timeout );
 *   ER             delay( RELTIM delayTime );
 *   ER             exitTask( );
 *   ER             getTaskId( ID* p_taskId );
 *   ER             rotateReadyQueue( PRI taskPriority );
 *   ER             getTime( SYSTIM* p_systemTime );
 *   ER             getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             lockCpu( );
 *   ER             unlockCpu( );
 *   ER             enableDispatch( );
 *   ER             disableTaskException( );
 *   ER             enableTaskException( );
 *   ER             changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             exitKernel( );
 *   bool_t         senseContext( );
 *   bool_t         senseLock( );
 *   bool_t         senseDispatch( );
 *   bool_t         senseDispatchPendingState( );
 *   bool_t         senseKernel( );
 * call port : cButton  signature: sButton context: task
 *   bool_t         cButton_isENTERButton( );
 *   bool_t         cButton_isRUNButton( );
 *   bool_t         cButton_isSTOPButton( );
 *   bool_t         cButton_isEXITButton( );
 *   bool_t         cButton_isENTERButtonOnly( );
 *   bool_t         cButton_isRUNButtonOnly( );
 *   bool_t         cButton_isSTOPButtonOnly( );
 *   bool_t         cButton_isEXITButtonOnly( );
 * call port : cDisplay  signature: sDisplay context: task
 *   void           cDisplay_update( );
 *   void           cDisplay_clear( bool_t updateToo );
 *   void           cDisplay_gotoXY( uint8_t x, uint8_t y );
 *   void           cDisplay_putChar( char c );
 *   void           cDisplay_putString( const char* string );
 *   void           cDisplay_putInt( int32_t val, uint8_t places );
 *   void           cDisplay_putUnsigned( uint32_t val, uint8_t places );
 *   void           cDisplay_putHex( uint32_t val, uint8_t places );
 *   uint8_t*       cDisplay_getBuffer( );
 *   void           cDisplay_powerOff( bool_t updateToo );
 * call port : cPIDControl  signature: sPIDControl context: task
 *   void           cPIDControl_getPIDValue( uint16_t light, uint16_t VAR_lightThreshold, float32_t* turn_f );
 *   void           cPIDControl_getKValue( float32_t* kp, float32_t* ki, float32_t* kd );
 *   void           cPIDControl_setKValue( uint8_t kind, float32_t value );
 * call port : cLinetracerControl  signature: sLinetracerControl context: task
 *   void           cLinetracerControl_setLightThreshold( uint8_t color, uint16_t light );
 *   void           cLinetracerControl_getLightThreshold( uint8_t color, uint16_t* light );
 *   void           cLinetracerControl_setEdge( int8_t edge );
 *   void           cLinetracerControl_getEdge( int8_t* edge );
 * call port : cBalancerControl  signature: sBalancerControl context: task
 *   void           cBalancerControl_setSpeed( int16_t speed );
 *   void           cBalancerControl_getSpeed( int16_t* speed );
 *   void           cBalancerControl_setTurn( int16_t turn );
 *   void           cBalancerControl_getTurn( int16_t* turn );
 *   void           cBalancerControl_calibrate( );
 * call port : cTailController  signature: sTailController context: task
 *   void           cTailController_setAngle( int32_t angle );
 *   void           cTailController_getAngle( int32_t* angle );
 *   void           cTailController_signalStop( );
 *   void           cTailController_signalStart( );
 *   void           cTailController_calibrate( );
 * call port : cPrintDisplayControl  signature: sPrintDisplayControl context: task
 *   void           cPrintDisplayControl_print_str( );
 *   void           cPrintDisplayControl_print_k( const char* string1, int16_t value1 );
 *   void           cPrintDisplayControl_print1( int16_t value1 );
 *   void           cPrintDisplayControl_print2( int16_t value1, int16_t value2 );
 *   void           cPrintDisplayControl_print3( int16_t value1, int16_t value2, int16_t value3 );
 *   void           cPrintDisplayControl_print4( int16_t value1, int16_t value2, int16_t value3, int16_t value4 );
 *   void           cPrintDisplayControl_print5( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5 );
 *   void           cPrintDisplayControl_printS1( const char* string1, int16_t value1 );
 *   void           cPrintDisplayControl_printS2( const char* string1, int16_t value1, const char* string2, int16_t value2 );
 *   void           cPrintDisplayControl_printS3( const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3 );
 * call port : cTouchSensor  signature: sSensor context: task
 *   void           cTouchSensor_getValue( uint16_t* value );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
/*
 *  written by NO 
 */
#include "tButtonSetTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eButtonSetValue
 * entry port: eButtonSetValue
 * signature:  sButtonSetValue
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eButtonSetValue_kvalue
 * name:         eButtonSetValue_kvalue
 * global_name:  tButtonSetTaskBody_eButtonSetValue_kvalue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eButtonSetValue_kvalue()
{
  
  float32_t kp, ki, kd;
  int16_t touch = 0; //touch変数初期化
  
  
  cPIDControl_getKValue(&kp, &ki, &kd);
  cPrintDisplayControl_printS1("kp=", kp*100); //show kp value
  cPrintDisplayControl_print_str(); //making structure

 
  //kp値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          kp=kp+0.1;
          
          cPIDControl_setKValue(0,kp); //0:kp, modify the value of kp
          cPIDControl_getKValue(&kp, &ki, &kd);
          cPrintDisplayControl_printS1("kp=", kp*100);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          kp=kp-0.1;
          
          cPIDControl_setKValue(0,kp); //0:kp, modify the value of kp
          cPIDControl_getKValue(&kp, &ki, &kd);
          cPrintDisplayControl_printS1("kp=", kp*100);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }
  cPIDControl_getKValue(&kp, &ki, &kd);
  cPrintDisplayControl_printS1("ki=", ki*100);
  cPrintDisplayControl_print_str();
  
   //ki値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
   
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          ki=ki+0.1;
        
          cPIDControl_setKValue(1, ki); //1:ki, modify the value of ki
          cPIDControl_getKValue(&kp, &ki, &kd);
          cPrintDisplayControl_printS1("ki=", ki*100);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
      
     else if(cButton_isRUNButton()==1)
        {
          ki=ki-0.1;
          
          cPIDControl_setKValue(1, ki); //1:ki, modify the value of ki
          cPIDControl_getKValue(&kp, &ki, &kd);
          cPrintDisplayControl_printS1("ki=", ki*100);
          cPrintDisplayControl_print_str(); //making structure(update())

          delay(300);
        }
    }

  cPrintDisplayControl_printS1("kd=", kd*100);
  cPrintDisplayControl_print_str();


   //kd値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          kd=kd+0.1;
          
          cPIDControl_setKValue(2, kd); //2:kd, modify the value of kd
          cPIDControl_getKValue(&kp, &ki, &kd);
          cPrintDisplayControl_printS1("kd=", kd*100);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          kd=kd-0.1;
          
          cPIDControl_setKValue(2, kd); //2:kd, modify the value of kd
          cPIDControl_getKValue(&kp, &ki, &kd);
          cPrintDisplayControl_printS1("kd=", kd*100);
          cPrintDisplayControl_print_str(); //making structure(update())

          delay(300);
        }
    }
 //check the values which are set 
  cPIDControl_getKValue(&kp, &ki, &kd);

  cPrintDisplayControl_printS1("kp:", kp*100);
  delay(500);
  cPrintDisplayControl_printS1("ki:", ki*100);
  delay(500);
  cPrintDisplayControl_printS1("kd:", kd*100);
  delay(500);


}


/* #[<ENTRY_FUNC>]# eButtonSetValue_threshold
 * name:         eButtonSetValue_threshold
 * global_name:  tButtonSetTaskBody_eButtonSetValue_threshold
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eButtonSetValue_threshold()
{

  int16_t light;
  int16_t touch = 0; //touch変数初期化
  
  
  cLinetracerControl_getLightThreshold(0, &light);
  cPrintDisplayControl_printS1("BLACK=", light); //show light value
  cPrintDisplayControl_print_str(); //making structure


   //BLACK値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          light++;

          cLinetracerControl_setLightThreshold(0, light); //0:BLACK, modify the value of BLACK
          cLinetracerControl_getLightThreshold(0, &light);
         
          cPrintDisplayControl_printS1("BLACK=", light);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          light--;

          cLinetracerControl_setLightThreshold(0, light); //0:BLACK, modify the value of BLACK
          cLinetracerControl_getLightThreshold(0, &light);
          
          cPrintDisplayControl_printS1("BLACK=", light);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }

  cLinetracerControl_getLightThreshold(1, &light);
  cPrintDisplayControl_printS1("WHITE=", light); //show light value
  cPrintDisplayControl_print_str(); //making structure

   //WHITE値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          light++;

          cLinetracerControl_setLightThreshold(1, light); //1:WHITE, modify the value of WHITE
          cLinetracerControl_getLightThreshold(1, &light);
         
          cPrintDisplayControl_printS1("WHITE=", light);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          light--;

          cLinetracerControl_setLightThreshold(1, light); //0:BLACK, modify the value of BLACK
          cLinetracerControl_getLightThreshold(1, &light);
          
          cPrintDisplayControl_printS1("WHITE=", light);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }

  cLinetracerControl_getLightThreshold(2, &light);
  cPrintDisplayControl_printS1("THSHD=", light); //show light value
  cPrintDisplayControl_print_str(); //making structure

 //Threshold値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          light++;

          cLinetracerControl_setLightThreshold(2, light); //1:WHITE, modify the value of WHITE
          cLinetracerControl_getLightThreshold(2, &light);
         
          cPrintDisplayControl_printS1("THSHD=", light);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          light--;

          cLinetracerControl_setLightThreshold(2, light); //0:BLACK, modify the value of BLACK
          cLinetracerControl_getLightThreshold(2, &light);
          
          cPrintDisplayControl_printS1("THSHD=", light);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }

 //check the values which are set 
  cLinetracerControl_getLightThreshold(0, &light);
  cPrintDisplayControl_printS1("BLACK=", light);
  delay(500);

  cLinetracerControl_getLightThreshold(1, &light);
  cPrintDisplayControl_printS1("WHITE=", light);
  delay(500);

  cLinetracerControl_getLightThreshold(2, &light);
  cPrintDisplayControl_printS1("THSHD=", light);
  delay(500);
  
}

/* #[<ENTRY_FUNC>]# eButtonSetValue_speed
 * name:         eButtonSetValue_speed
 * global_name:  tButtonSetTaskBody_eButtonSetValue_speed
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eButtonSetValue_speed()
{
  
  int16_t speed;
  int16_t touch = 0; //touch変数初期化
  
  cBalancerControl_getSpeed(&speed);
  cPrintDisplayControl_printS1("speed=", speed); //show speed value
  cPrintDisplayControl_print_str(); //making structure


   //SPEED値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          speed++;
          cBalancerControl_setSpeed(speed);
          cBalancerControl_getSpeed(&speed);
       
         
          cPrintDisplayControl_printS1("Speed=", speed);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          speed--;

          cBalancerControl_setSpeed(speed);
          cBalancerControl_getSpeed(&speed);
       
          cPrintDisplayControl_printS1("Speed=", speed);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }

  cBalancerControl_getSpeed(&speed);
  cPrintDisplayControl_printS1("Speed=", speed);
  delay(500);
  cPrintDisplayControl_printS1("START",0);


}

/* #[<ENTRY_FUNC>]# eButtonSetValue_tailAngle
 * name:         eButtonSetValue_tailAngle
 * global_name:  tButtonSetTaskBody_eButtonSetValue_tailAngle
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eButtonSetValue_tailAngle()
{

  int16_t angle=0;
  int16_t touch = 0; //touch変数初期化

  //Show current Stop angle value
  cTailController_getStopAngle(&angle);
  cPrintDisplayControl_printS1("STPAng=", angle); //show speed value
  cPrintDisplayControl_print_str(); //making structure
  delay(10000);
/*
   //tail_StopANGLE値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(400);
          break;
        }
      
      else if(touch==1)
        {
          angle++;
          cTailController_setStopAngle(angle);
          cTailController_getStopAngle(&angle);
       
          cPrintDisplayControl_printS1("STPAng=", angle);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          angle--;

          cTailController_setStopAngle(angle);
          cTailController_getStopAngle(&angle);
       
          cPrintDisplayControl_printS1("STPAng=", angle);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }

  cTailController_getStopAngle(&angle); //NOT need?
  cDisplay_clear(0);
  cPrintDisplayControl_printS1("STPAng=", angle);
  cDisplay_update();
  delay(700);


  //Show Current Drive angle value
  cTailController_getDriveAngle(&angle);
  cPrintDisplayControl_printS1("DRVAng=", angle); //show speed value
  cPrintDisplayControl_print_str(); //making structure

  
//tail_DriveANGLE値調整
  while(1)
    {
      cTouchSensor_getValue(&touch);
      
     if(cButton_isENTERButton()==1)
        {
          delay(300);
          break;
        }
      
      else if(touch==1)
        {
          angle++;
          cTailController_setDriveAngle(angle);
          cTailController_getDriveAngle(&angle);
       
          cPrintDisplayControl_printS1("DRVAng=", angle);
          cPrintDisplayControl_print_str(); //making structure
       
          delay(300);
        }
     else if(cButton_isRUNButton()==1)
        {
          angle--;

          cTailController_setDriveAngle(angle);
          cTailController_getDriveAngle(&angle);
       
          cPrintDisplayControl_printS1("DRVAng=", angle);
          cPrintDisplayControl_print_str(); //making structure
          
          delay(300);
        }
    }

  cTailController_getDriveAngle(&angle); //NOT need?
  cDisplay_clear(0);
  cPrintDisplayControl_printS1("DRVAng=", angle);
  cDisplay_update();
  delay(700);
  */
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
