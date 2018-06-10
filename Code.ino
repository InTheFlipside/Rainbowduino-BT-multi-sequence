
#include <Rainbowduino.h>
unsigned int v; 
unsigned int z,x,y;
unsigned int c; 

void setup()
{
  Rb.init(); 
  Serial.begin(9600);
  for(x=0;x<7;x++)  {
         delay(5);   
          
    for(y=0;y<6;y++)
    {
      delay(5); 
      for(z=0;z<7;z++) {
    delay(5); 
     Rb.setPixelZXY(random(0,4),random(0,4),random(0,4),0x1aff1a);
      }
    }
   }
}

void loop()
{

  char c='0';
while(1)
{


  
 if (Serial.available() != 0) // wait for character to arrive
   {
   c = Serial.read();
   }

  
   

   

  int v = 0; 
  if(c =='1') {


    
 Rb.blankDisplay();

 
    ////////////// Saint valentin /////////////





 for(x=0;x<4;x++)  {
         delay(10);   
    for(y=0;y<5;y++)
    {
      delay(10); 
      for(z=0;z<4;z++){
    delay(10); 
     Rb.setPixelZXY(z,x,y,0xff,random(0xFF),random(0xFF));
      }
    }
   }
   delay(1000);
   
    for(x=0;x<7;x++)  {
         delay(10);   
          
    for(y=0;y<6;y++)
    {
      delay(10); 
      for(z=0;z<6;z++) {
    delay(10); 
     Rb.setPixelZXY(random(0,4),random(0,4),random(0,4),0x000000);
      }
    }
   }
   


  
   }
   if(c == '2'){
//     Rb.blankDisplay();
    /////////////AQUARIUM ///////////////

    
for(v=0;v<3;v++)
  {    

  for(x=0;x<4;x++)
  {
       delay(50);
    for(y=0;y<4;y++)
    {
      delay(50);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0x1a,random(0xFF),random(0xFF));
      }
    }
  }  
  
  }
  delay(100);

 

     
   }



if(c == '3'){
 //  Rb.blankDisplay();
////// PURPLE SHOWER /////


for(v=0;v<1;v++)
  {
   for(x=0;x<4;x++)
  {
         delay(10);    
    for(y=0;y<4;y++)
    {
      
      for(z=0;z<4;z++){
     
    Rb.setPixelZXY(0,x,y,0x8000FF);/// PURPLE  
      }
    }
   }  
   for(x=0;x<4;x++)
  {
     
    for(y=0;y<4;y++)
    {
     Rb.setPixelZXY(0,x,y,0x8000FF);/// PURPLE  
    
     
    Rb.setPixelZXY(0,x,y,0x8000FF);/// PURPLE  
    delay(50);
     Rb.setPixelZXY(1,x,y,0x8000FF);/// PURPLE  
     delay(50);
     Rb.setPixelZXY(2,x,y,0x8000FF);/// PURPLE  
     Rb.setPixelZXY(1,x,y,0x00000);/// PURPLE
     delay(50); 
     Rb.setPixelZXY(3,x,y,0x8000FF);/// PURPLE  
     Rb.setPixelZXY(2,x,y,0x00000);/// PURPLE 
     delay(50);
     Rb.setPixelZXY(3,x,y,0x8000FF);/// PURPLE  
     Rb.setPixelZXY(2,x,y,0x00000);/// PURPLE   
    }
   }



for(x=0;x<5;x++)  {
         delay(10);   
          
    for(y=0;y<5;y++)
    {
      delay(10); 
      for(z=0;z<6;z++) {
    delay(10); 
   Rb.setPixelZXY(3,random(0,4),random(0,4),0x000000);
      }
    }
   }
delay(10);
//////////////////// FIN SEQUENCE 3 /////////

    }
}
if(c == '4'){


for(v=0;v<5;v++)
  {

  //////////////////// LGBT FLAG ///////////////
  for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xff0000); //RED 
      }
    }
  }  
  

   for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xe6e600); // YELLOW
      }
    }
  }  



   for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0x00e600); // GREEN
      }
    }
  }

  
  
//  delay(100);
  // Rb.blankDisplay();


 for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0x33bbff); // BLUE
      }
    }
  }  


 for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xcc33ff); // Purple
      }
    }
  }  

  }
  
  }





}


}
   
