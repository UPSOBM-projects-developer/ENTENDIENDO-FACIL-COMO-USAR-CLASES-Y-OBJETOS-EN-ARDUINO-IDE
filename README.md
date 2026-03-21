# ENTENDIENDO-FACIL-COMO-USAR-CLASES-Y-OBJETOS-EN-ARDUINO-IDE
### en esta clase aprenderemos a como hacer clases y objetos en arduino ide usando ```cpp void ,int,bool```,etc.Para poder hacer nuestras propias librerias o simplificar codigo    

  
 ## * PROYECTO: CLASE POO (PROGRAMACIÓN ORIENTADA A OBJETOS)
 ## * DESARROLLADOR: UPSOBM_projects_developer
 ## * VERSIÓN: 1.0 (EDUCATIVA)
 ## */ 

   
## un objeto o definicion es como un "bloque"que tiene todo el codigo que le pongas para que al ponerlo se ejecute  
  # **su estructura es la siguiente :**   
  ## ```cpp void,int,bool,String```,etc.Osea el valor que quieres que retorne en forma que una variable de ese mismo tipo pueda obtenerla
  ## **entonces un ejemplo de la structura es** 
  ### ```cpp void``` "nombre de el "bloque""("varibles que puede escribir ejmplo (```cpp int``` numero)"){
codigo...
  }
    
      
# **ejemplo:**  
```cpp
void saludar(String mensaje){// esturctura
Serial.println(mensaje);// codigo
}
//USO
void setup(){
Serial.begin(9600);
delay(1000);
}
void loop(){
saludar("hola,funciono");// el nombre del "bloque"+ ()vaciono si no definiste que tuviera entrada de valor
// Y (y aqui escribes tu valor en este caso "hola,funciono")
delay(1000);// para evitar que el chip se esfuerze mucho ya que si quitas esto no tiene descoaso y es malo
//asi que es caso qe quitarlo por lo menos el chip tiene que descanzar 
}
```
 ## una funcion class es como una "caja" donde puede guardar cosas en este caso bloques de codigo que usaremos en nuestro codigo  
 # **ejemplo: ** 
  ```cpp
class miled{//definimos la "caja"
private://cosas que no salen de la "caja" en este ejemplo nada

public:// lo que podemos sacar/ejecutar de la "caja"

void parpadear(int tiempo){//
digitalWrite(13,HIGH);
if (tiempo <= 0){
tiempo = 1;
}
delay(tiempo);
digitalWrite(13,LOW);
delay(tiempo);
}
};
miled led;// definimos que la "caja" existe
void setup(){
pinMode(13,OUTPUT);
delay(1000);
}
void loop(){
led.parpadear(500);// llamamos a la "caja" led y con . le sacamos su bloque parpadear
}
  ```
 # ** su estructura es :**    
 
  ```cpp class``` "nombre de la "caja"temporal"{
```cpp private:``` // cosas que solo puede  funcionar aentro de la "caja"  
 y aqui podemos poner variables objetos o "bloques con codigo como lo mostre arriba en la primera"
  ```cpp public:```// cosas que pueden usar afuera de la "caja"
  y aqui podemos poner variables objetos o "bloques con codigo como lo mostre arriba en la primera"
  
  };
  "nombre de la "caja"temporal" "nombre de la "caja"";
