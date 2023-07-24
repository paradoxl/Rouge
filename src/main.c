#include <stdio.h>
#include <stdlib.h>
#include <rouge.h>

const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 100;

Entity* player;
Tile** map;


// use gcc name -lncurses to compile with library linked.

int main(){
    cursesSetup();
    Position start_pos = {10,20};
    player = createPlayer(start_pos);
    map = createMapTiles();
    gameLoop();
    closeGame();
    
}