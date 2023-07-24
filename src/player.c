#include <rouge.h>

Entity* createPlayer(Position start_pos){
    Entity* newPlayer = calloc(1, sizeof(Entity));
    newPlayer->pos.y_pos = start_pos.y_pos;
    newPlayer->pos.x_pos = start_pos.x_pos;
    newPlayer->ch = '@';

    return newPlayer;
}

void handleInput(int input){
    switch (input)
    {
    case 'w':
        player->pos.y_pos--;
        break;
    case 's':
        player->pos.y_pos++;
        break;
    case 'a':
        player->pos.x_pos--;
        break;
    case 'd':
        player->pos.x_pos++;
        break;
    default:
        break;
    }
}