int ir[6];
int a,b,c,d;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    ir [0] = analogRead(A5);
    ir [1] = analogRead(A4);
    ir [2] = analogRead(A3);
    ir [3] = analogRead(A2);
    ir [4] = analogRead(A1);
    ir [5] = analogRead(A0);
    //arrival of node
    if(ir[1]/500==ir[2]/500 && ir[3]/500==ir[4]/500){
      if(ir[1]<500)c=1;
      if(ir[1]>500)c=0;
      if(ir[3]<500)d=1;
      if(ir[3]>500)d=0;
      delay(100);
    }
    Serial.println(c,d);
    //move forward by 4 cm
    forward(100,100);
    delay(10);
    stop_();
     if(ir[1]/500==ir[2]/500 && ir[3]/500==ir[4]/500){
      if(ir[1]<500)a=1;
      if(ir[1]>500)a=0;
       if(ir[3]<500)b=1;
      if(ir[3]>500)b=0;
      delay(100);
    }
    new_speed=a*8+b*4+c*2+d*1;
    
    
    Serial.println(a,b);
    

}
