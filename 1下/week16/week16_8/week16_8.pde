void setup()
{
  size(400,400);
}
void draw()
{
  background(#FFFFF2);
  float dx = radians(mouseX);
  for(int i=0; i<24; i++){
    if(i==0) fill(#F58123);
    else if(i%3==0) fill(#FF0000);
    else if(i%3==1) fill(#050000);
    else fill(255,255,255);
    float a = radians(360/24);
    arc(200, 200, 300, 300, a*i+dx, a*i+a+dx, PIE);
  }
}
