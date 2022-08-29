int r_p=6;
int r_n=9;
int l_p=10;
int l_n=11;
int s=90;

void setup(){
  pinMode(r_p,OUTPUT);
  pinMode(r_n,OUTPUT);
  pinMode(l_p,OUTPUT);
  pinMode(l_n,OUTPUT);
 
  pinMode(13,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(7,INPUT);
  pinMode(5,INPUT);
}

void loop(){
  int s8= digitalRead(7);
  int s4=digitalRead(13);
  int s5=digitalRead(2);
  int s6=digitalRead(3);
  int s7= digitalRead(5);
  
  if(s4==1 && s5==1 ){
    if(s6==1){
      left();
    }
    if(s7==1){
      left();
    }

    else{
      forward();
    }
  }
  if(s4==1 && s5==0){
    if(s6==1){
      left();
    }
    if(s7==1){
      left();
    }
    else{
      forward();
    }
  }
  if(s4==0 && s5==1){
    left();
  }
  if(s4==0 && s5==0){
    if(s8==1){
      left();
    }
    if(s7==1){
      left();
    }
    if(s6==1){
      left();
    }
    else{
      right();
    }
  }
  
}
void forward(){
  analogWrite(r_p,s);
  analogWrite(r_n,0);
  analogWrite(l_p,s);
  analogWrite(l_n,0);
}
void left(){
  analogWrite(r_p,s);
  analogWrite(r_n,0);
  analogWrite(l_p,0);
  analogWrite(l_n,s);
}
void right(){
  analogWrite(r_p,0);
  analogWrite(r_n,s);
  analogWrite(l_p,s);
  analogWrite(l_n,0);
}
