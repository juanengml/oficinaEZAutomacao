int luz = 7;
char letra;

void setup()
{
 Serial.begin(9600);
 pinMode(luz,OUTPUT);
}

void loop(){
 letra =  Serial.read();

 switch(letra){

 case 'l':
   digitalWrite(luz,HIGH);
   break;
 case  'd':
   digitalWrite(luz,LOW);
   break;


 }
} 
