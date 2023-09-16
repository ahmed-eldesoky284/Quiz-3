#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
#define g 6
#define a1 7
#define b2 8
#define c3 9
#define d4 10
#define e5 11
#define g6 12
#define trig 13
#define echo A0
double num=0,dis=0;
long duration=0;
byte cnt=0,num0=0,num1=0;
byte D0[7]={a,b,c,d,e,f,g},D1[7]={a1,b2,c3,d4,e5,0,g6};
byte nums[11][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},  
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},
  {0,0,0,0,0,0,0}};
void ultrasonic(){
 digitalWrite(13,0); 
 delayMicroseconds(2);  
 digitalWrite(13,1); 
 delayMicroseconds(10);
 digitalWrite(13,0); 
 duration=pulseIn(echo,HIGH);
 dis=0.000343*duration/2;
}
void save1(uint8_t n10){
  n10=(n10==0)?10:n10;
  for(int i=0;i<7;i++){
    if(i!=5)
digitalWrite(D1[i],*((*nums)+i+(7*n10)));    
}}
void save0(uint8_t n0){
  for(int i=0;i<7;i++)
digitalWrite(D0[i],*((*nums)+i+(7*n0)));    
  }
void setup()
{
  for (int i=0;i<14;i++)
    pinMode(i, OUTPUT);
  
}
void loop()
{
  ultrasonic();
  num=dis;  
  num=(num>=10)?(num/10):num;
  num1=uint8_t(num);
  num0=((num-uint8_t(num))*10);  
  save1(num1);
  save0(num0);
  
}
