/***************************************************************************//**
  @file     +headall.h+
  @brief    +header principal de allegro+
  @author   +Grupo 3+
 ******************************************************************************/

#ifndef HEADALL_H_
#define HEADALL_H_

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "../../const.h"
#include "../../Backend/scoretable.h" //Se necesita libreria para reconocer la estructura SCORE
#include "../../Backend/event_queue/event_queue.h" //Se necesita libreria para reconocer las funcion add_event

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_image.h> //manejo de imagenes
#include <allegro5/allegro_font.h> //manejo de fonts
#include <allegro5/allegro_ttf.h> //Manejo de ttfs
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
//Extensiones con acodec .wav, .flac, .ogg, .it, .mod, .s3m, .xm. 

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/
#define D_WIDTH   800   //Ancho de pantalla
#define D_HEIGHT  600   //Alto de pantalla
#define FPS       60.0

#define FIL_INVADERS 5                   // Cantidad de filas de invaders
#define COL_INVADERS 9                   // Cantidad de columnas de invaders

/*******************************************************************************
 * ENUMERATIONS AND STRUCTURES AND TYPEDEFS
 ******************************************************************************/

// typedef unsigned char SHOT_TYPE;

// typedef struct 
// {
//     int x;
//     int y;
//     int shotState;
//     SHOT_TYPE type;
// } shot_t;


// typedef struct 
// {
//     int x;
//     int y;
//     int height;
//     int width;
// }collBoxShot_t;

// typedef struct 
// {
//     int x;
//     int y;
//     int invaderState;
//     int invaderType;
//     ALLEGRO_BITMAP *invadersPointer;
// }invader_t;

//enum INVADERS_TYPES {CRAB ,SQUID, OCTO};        
// NOTA: PASO A CONST.H

/*******************************************************************************
 * VARIABLE PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/
/*const int invadersDistribution [FIL_INVADERS] = {
                                                OCTO,
                                                OCTO,
                                                SQUID,
                                                CRAB,
                                                CRAB,
                                                };

extern ALLEGRO_BITMAP *cannon = NULL;
// Invaders matrix
extern invader_t invaders[FIL_INVADERS][COL_INVADERS];
*/

/*******************************************************************************
 * FUNCTION PROTOTYPES FOR MENU AND KEYBOARD
 ******************************************************************************/
/**
 * @brief Inicializa los recursos a emplear.
 * @return Si hubo o no error.
*/
int init_front();

/**
 * @brief Muestra el splash.
*/
void splash_front(); 

/**
 * @brief Muestra imagen del menu y coloca las palabras que reciba.
 * @param texto[] Recibe un puntero a esturctura de strings
 * @param size Recibe cantidad de palabras a imprimir
 * @param option Recibe un entero indicando que palabra colorear
*/
void show_menu (MENU_ITEM *menu_to_show, int size, int item);

/**
 * @brief Muestra imagen descore y muestra hasta top 10.
 * @param score[] Recibe un puntero a esturctura de que tiene nombres ypuntajes
 * @param size Recibe el tamaño actual de la lista de puntaje
*/
void show_score (SCORE* score ,int size);

/**
 * @brief Muestra las instrucciones.
*/
void shows_inst ();

/**
 * @brief Lee el teclado y carga el evento segun la libreria "event_queue.h".
 **/
void update_front_event();

/**
 * @brief Destruye los recursos empleados.
 **/
void destroy_front();


/*******************************************************************************
 * FUNCTION PROTOTYPES FOR IN-GAME
 ******************************************************************************/

/**
 * @brief Actualiza lo que se muestra en pantalla durante el juego
*/
void redraw();

/**
 * @brief Actualiza la velocidad del juego
 * @param newSpeed El nuevo valor de velocidad para el juego
*/
void update_speed_front(int newSpeed);

/**
 * @brief Coloca el cannon en la posición al revivir, debajo de un shield
*/
void reviveCanon(void);

/**
 * @brief Ubica a los invaders en la posición inicial
*/
void placeInvaders(void);

/**
 * @brief Elimina los disparos actuales
*/
void clean_shoots(void);

/*******************************************************************************
 ******************************************************************************/

#endif // HEADALL_H_
