/***************************************************************************//**
  @file     +digits.h+
  @brief    +Templates para numeros y figuras especiales para mostrar en la pantalla de raspi
  @author   +Grupo 3+
 ******************************************************************************/

#ifndef _DIGITS_H_
#define _DIGITS_H_

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/
#define DIGIT_COL   3 //Cantidad de columnas que tiene una matriz que representa un número
#define DIGIT_ROW   5 //Cantidad de filar que tiene una matriz que representa un número

/*******************************************************************************
 * NUMBERS
 ******************************************************************************/
const int NUMBER_0[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1} };    // 1 1 1

const int NUMBER_1[][DIGIT_COL] = { {0, 0, 1},      //     1 
                                    {0, 1, 1},      //   1 1
                                    {0, 0, 1},      //     1
                                    {0, 0, 1},      //     1
                                    {0, 0, 1} };    //     1

const int NUMBER_2[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1    
                                    {1, 1, 1} };    // 1 1 1

const int NUMBER_3[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1
                                    {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1
                                    {1, 1, 1} };    // 1 1 1

const int NUMBER_4[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1
                                    {0, 0, 1} };    //     1

const int NUMBER_5[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1    
                                    {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1
                                    {1, 1, 1} };    // 1 1 1

const int NUMBER_6[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1    
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1} };    // 1 1 1

const int NUMBER_7[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1
                                    {0, 0, 1},      //     1
                                    {0, 0, 1},      //     1
                                    {0, 0, 1} };    //     1

const int NUMBER_8[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1} };    // 1 1 1

const int NUMBER_9[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {0, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1 
                                    {0, 0, 1} };    //     1

/*******************************************************************************
 * LETTER
 ******************************************************************************/
const int LETTER_A[][DIGIT_COL] = { {0, 1, 0},      //   1 
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1} };    // 1   1

const int LETTER_B[][DIGIT_COL] = { {1, 1, 0},      // 1 1 
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 0} };    // 1 1    

const int LETTER_C[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1
                                    {1, 0, 0},      // 1 
                                    {1, 0, 0},      // 1
                                    {1, 1, 1} };    // 1 1 1

const int LETTER_D[][DIGIT_COL] = { {1, 1, 0},      // 1 1 
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 0} };    // 1 1  

const int LETTER_E[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1   
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1   
                                    {1, 1, 1} };    // 1 1 1 

const int LETTER_F[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1   
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1
                                    {1, 0, 0} };    // 1 

const int LETTER_G[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1   
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1} };    // 1 1 1 

const int LETTER_H[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1} };    // 1   1 

const int LETTER_I[][DIGIT_COL] = { {0, 1, 0},      //   1 
                                    {0, 1, 0},      //   1  
                                    {0, 1, 0},      //   1
                                    {0, 1, 0},      //   1  
                                    {0, 1, 0} };    //   1       

const int LETTER_J[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {0, 1, 0},      //   1  
                                    {0, 1, 0},      //   1
                                    {0, 1, 0},      //   1  
                                    {1, 1, 0} };    // 1 1   

const int LETTER_K[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {1, 1, 0},      // 1 1 
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1} };    // 1   1

const int LETTER_L[][DIGIT_COL] = { {1, 0, 0},      // 1 
                                    {1, 0, 0},      // 1    
                                    {1, 0, 0},      // 1  
                                    {1, 0, 0},      // 1    
                                    {1, 1, 1} };    // 1 1 1

const int LETTER_M[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1 
                                    {1, 0, 1} };    // 1   1
                        
const int LETTER_N[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 1, 1},      // 1 1 1  
                                    {1, 1, 1},      // 1 1 1
                                    {1, 1, 1},      // 1 1 1 
                                    {1, 0, 1} };    // 1   1

const int LETTER_O[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1  
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1  
                                    {1, 1, 1} };    // 1 1 1 

const int LETTER_P[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1  
                                    {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1    
                                    {1, 0, 0} };    // 1

const int LETTER_Q[][DIGIT_COL] = { {0, 1, 0},      //   1 
                                    {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1
                                    {0, 1, 0},      //   1  
                                    {0, 0, 1} };    //     1

const int LETTER_R[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 1},      // 1   1  
                                    {1, 1, 0},      // 1 1 
                                    {1, 0, 1},      // 1   1 
                                    {1, 0, 1} };    // 1   1

const int LETTER_S[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {1, 0, 0},      // 1     
                                    {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1 
                                    {1, 1, 1} };    // 1 1 1

const int LETTER_T[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {0, 1, 0},      //   1   
                                    {0, 1, 0},      //   1 
                                    {0, 1, 0},      //   1  
                                    {0, 1, 0} };    //   1 

const int LETTER_U[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1   
                                    {1, 0, 1},      // 1   1 
                                    {1, 0, 1},      // 1   1  
                                    {1, 1, 1} };    // 1 1 1

const int LETTER_V[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1   
                                    {1, 0, 1},      // 1   1 
                                    {1, 0, 1},      //  1 1  
                                    {0, 1, 0} };    //   1 

const int LETTER_W[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1   
                                    {1, 0, 1},      // 1   1 
                                    {1, 1, 1},      // 1 1 1  
                                    {1, 0, 1} };    // 1   1

const int LETTER_X[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1   
                                    {0, 1, 0},      // 0 1 0 
                                    {1, 0, 1},      // 1   1  
                                    {1, 0, 1} };    // 1   1
                            
const int LETTER_Y[][DIGIT_COL] = { {1, 0, 1},      // 1   1
                                    {1, 0, 1},      // 1   1   
                                    {0, 1, 0},      //   1  
                                    {0, 1, 0},      //   1     
                                    {0, 1, 0} };    //   1

const int LETTER_Z[][DIGIT_COL] = { {1, 1, 1},      // 1 1 1
                                    {0, 0, 1},      //     1   
                                    {0, 1, 0},      //   1  
                                    {1, 0, 0},      // 1      
                                    {1, 1, 1} };    // 1 1 1

const int NULL_CHAR[][DIGIT_COL] = {{0, 0, 0},      //
                                    {0, 0, 0},      // 
                                    {0, 0, 0},      // 
                                    {0, 0, 0},      // 
                                    {0, 0, 0} };    // 


const int SPLASH[8][16] = { 
                            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},     //     1             1
                            {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},     //       1         1      
                            {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},     //     1 1 1 1 1 1 1 1 
                            {0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0},     //   1 1   1 1 1 1   1 1         
                            {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},     // 1 1 1 1 1 1 1 1 1 1 1 1
                            {0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0},     // 1   1 1 1 1 1 1 1 1   1      
                            {0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0},     // 1   1             1   1 
                            {0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0} };   //       1 1     1 1      


const int END_IMG[8][16] = { 
                            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},     //      1             1
                            {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},     //        1         1      
                            {0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0},     // 1    1 1 1 1 1 1 1 1    1
                            {0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0},     //  1 1 1   1 1 1 1   1 1 1       
                            {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},     //  1 1 1 1 1 1 1 1 1 1 1 1
                            {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},     //      1 1 1 1 1 1 1 1         
                            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},     //      1             1    
                            {0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0} };   //        1 1     1 1      


const int CANNON[][DIGIT_COL] = {   {0, 1, 0},      //   1 
                                    {1, 1, 1}};     // 1 1 1

//! REVISAR: ESTOS NOMBRES SE REPITEN, CAMBIARLOS
// const int UFO[][2] = {{1, 1}};     // 1 1   

// const int SQUID[][1] = {{1}};    // 1
// const int CRAB[][1] = {{1}};     // 1
// const int OCTO[][1] = {{1}};     // 1   

// const int BULLET[][1] = {{1}};     // 1

/*
void dibujar_splash();
    dcoord_t mycord={0,0};
    for int (i=0; i<; i++){
      for int (j=0; j<;j++){
        disp_write({i,j},SPLASH [i][j]);
      }
    }
*/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/



/*******************************************************************************
 * ENUMERATIONS AND STRUCTURES AND TYPEDEFS
 ******************************************************************************/



/*******************************************************************************
 * VARIABLE PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

// +ej: extern unsigned int anio_actual;+
/*******************************************************************************
 ******************************************************************************/

#endif // _DIGITS_H_
