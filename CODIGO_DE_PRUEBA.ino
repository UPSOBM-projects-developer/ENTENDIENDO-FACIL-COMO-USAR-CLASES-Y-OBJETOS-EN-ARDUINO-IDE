/*INICIO
 * PROYECTO: CLASE POO (PROGRAMACIÓN ORIENTADA A OBJETOS)
 * DESARROLLADOR: UPSOBM_projects_developer
 * VERSIÓN: 1.0 (EDUCATIVA)
 */
#include <Arduino.h>
  void saludar(String mensaje){
Serial.println(mensaje);
} 
class miled{
private:

public:
void parpadear(int tiempo){
digitalWrite(13,HIGH);
  if(tiempo <= 0){//seguriada anti parpadeo instantaneo
    tiempo = 1;
  }
  delay(tiempo);
  digitalWrite(13,LOW);
  delay(tiempo);
}
};
miled led;// decir que si existe miled y ahora se llama led
void setup(){
pinMode(13,OUTPUT);
Serial.begin(9600);
delay(1000);
}

void loop(){
saludar("hola,funciono");
led.parpadear(500);// aqui llamamos a al "bloque"parpadar de la "caja"led con un .

}
/*FIN
 * PROYECTO: CLASE POO (PROGRAMACIÓN ORIENTADA A OBJETOS)
 * DESARROLLADOR: UPSOBM_projects_developer
 * VERSIÓN: 1.0 (EDUCATIVA)
 */
