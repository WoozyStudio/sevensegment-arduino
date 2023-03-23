void setup()
{
  for (int x = 2; x<9; x++){
  pinMode(x, OUTPUT); //Configuración de los pines como salida
  }
}

void display (int a, int b, int c, int d, int e, int f, int g)
{
  digitalWrite (2,a);  //declarar 7 variables en la función y
  digitalWrite (3,b);  //asignarlas por las salidas
  digitalWrite (4,c);
  digitalWrite (5,d);
  digitalWrite (6,e);
  digitalWrite (7,f);
  digitalWrite (8,g);
}

void loop() {
  
  
//Función display - (0 apagado y 1 prendido)
  
  display (1,1,1,1,1,1,0); //Numero 0
  delay (1000);
  display (0,1,1,0,0,0,0); //Numero 1
  delay (1000);
  display (1,1,0,1,1,0,1); //Numero 2
  delay (1000);
  display (1,1,1,1,0,0,1); //Numero 3
  delay (1000);
  display (0,1,1,0,0,1,1); //Numero 4
  delay (1000);
  display (0,1,1,0,0,0,0); //Numero 5
  delay (1000);
  display (0,1,1,0,0,0,0); //Numero 6
  delay (1000);
  display (0,1,1,0,0,0,0); //Numero 7
  delay (1000);
  display (0,1,1,0,0,0,0); //Numero 8
  delay (1000);
  display (0,1,1,0,0,0,0); //Numero 9
  delay (1000); 
}