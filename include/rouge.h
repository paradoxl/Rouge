#ifndef ROUGE_H
#define ROUGE_H

#include <ncurses.h>
#include <stdlib.h>


typedef struct{
  int y_pos;
  int x_pos;
}Position;

typedef struct{
    char ch;
    bool walkable;
}Tile;

typedef struct{
Position pos;
char ch;
}Entity;

//draw.c
void drawMap(void);
void drawEntity(Entity* entity);
void drawEverything(void);

//map.c
Tile** createMapTiles(void);
void freeMap(void);

//engine.c
void cursesSetup(void);
void gameLoop(void);
void closeGame(void);

// player.h 
Entity* createPlayer(Position start_pos);
void handleInput(int input);

extern const int MAP_HEIGHT;
extern const int MAP_WIDTH;
extern Entity* player;
extern Tile** map;

#endif