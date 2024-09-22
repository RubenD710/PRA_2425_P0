#include "T0.h"

int main(){
   BrazoRobotico kuka;
   
   kuka.getx();
   kuka.gety();
   kuka.getz();
   
   kuka.getsujetando();
   
   kuka.soltar();
   kuka.mover(1.5,4,4.3);
   kuka.coger();
   kuka.getsujetando();
   
   kuka.getx();
   kuka.gety();
   kuka.getz();
}
