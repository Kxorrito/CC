#include <allegro.h>
#define maxfilas 20 // para el eje y
#define maxcolum 31 // para el eje x
BITMAP *buffer; //variable
BITMAP *roca; // variable
BITMAP *pacbmp;
BITMAP *pacman;

int dir=0;
int px=30*10, py=30*10;

char mapa[maxfilas][maxcolum]={
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    "X           XXXXX            X",
    "X  XXX XXXX XXXXX XXXXX XXX  X",
    "X  XXX XXXX XXXXX XXXXX XXX  X",
    "X                            X",
    "X  XXX XX XXXXXXXXXXX XX XXX X",
    "X      XX     XXX     XX     X",
    "X  XXX XXXXXX XXX XXXXXX XXX X",
    "X  XXX XX             XX XXX X",
    "X      XX XXXXXXXXXXX XX     X",
    "X  XXX XX XXXXXXXXXXX XX XXX X",
    "X  XXX XX             XX XXX X",
    "X  XXX XXXXXX XXX XXXXXX XXX X",
    "X      XX     XXX     XX     X",
    "X  XXX XX XXXXXXXXXXX XX XXX X",
    "X  XXX                   XXX X",
    "X  XXX XXXX XXXXXXXX XXX XXX X",
    "X  XXX XXXX          XXX XXX X",
    "X           XXXXXXXX         X",
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
};
void dibujo_mapa(){
    int fila,col;

    for(fila=0; fila<maxfilas; fila++){
        for(col=0; col<maxcolum; col++){
            if(mapa[fila][col]=='X'){
                draw_sprite(buffer, roca, col*30, fila*30);
            }
        }
    }
}
void pantalla(){
    blit(buffer, screen, 0, 0, 0, 0, 880, 600); //imprimir en toda la pantalla
}
void dibujar_personaje(){
    blit(pacbmp,pacman,dir*30,0,0,0,33,33);
    draw_sprite(buffer,pacman,px,py);
}

int main()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 880, 600, 0, 0);

    buffer = create_bitmap(880, 600);
    roca=load_bitmap("roca.bmp",NULL);
    pacbmp = load_bitmap("pacman.bmp",NULL);
    pacman = create_bitmap(33,33);
    while(!key[KEY_ESC]){
        if(key[KEY_RIGHT]) dir = 1;//movimiento de pacman
        else if(key[KEY_LEFT]) dir = 0;
        else if(key[KEY_UP]) dir = 2;
        else if (key[KEY_DOWN]) dir = 3;

        if(dir == 0) px -= 30;
        if(dir == 1) px += 30;
        if(dir == 2) py -= 30;
        if(dir == 3) py += 30;

        clear(buffer);
        dibujo_mapa();
        dibujar_personaje();
        pantalla();
        rest(150);

        clear(pacman);
        blit(pacbmp,pacman,4*33,0,0,0,33,33);
        draw_sprite(buffer,pacman,px,py);
        pantalla();
        rest(90);
    }

}
END_OF_MAIN();
