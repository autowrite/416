void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
/ Writing numeral with bx by being the bottom left originpoint. Scale 1 equals a 20 mm high font.
// The structure follows this principle: move to first startpoint of the numeral, lift down, draw numeral, lift up
//这里是写字的函数，如果你觉得字写的丑，可以自行修改字体，结果可能是更丑
//还可以自行增加其他内容，比如字母甚至是汉字
void alphabet(float bx, float by, int alp, float scale) {

  switch (alp) {

  case A:
    drawTo(bx + 12 * scale, by + 6 * scale);
    lift(0);//落笔
  drawTo(bx + 1 * scale, by + 1 * scale);
    lift(1);//抬臂
    drawTo(bx + 12 * scale, by + 6 * scale);
    lift(0);//落笔
    drawTo(bx + 11 * scale, by + 1 * scale);
    lift(1);//抬臂
    drawTo(bx + 3.5 * scale,by + 6 * scale);
     lift(0);//落笔
     drawTo(bx + 8.5* scale,by + 6* scale);
    break;
     case 0:
    drawTo(bx + 12 * scale, by + 6 * scale);
    lift(0);
    bogenGZS(bx + 7 * scale, by + 10 * scale, 10 * scale, -0.8, 6.7, 0.5);
    lift(1);
    break;
  case 1:

    drawTo(bx + 3 * scale, by + 15 * scale);
    lift(0);
    drawTo(bx + 10 * scale, by + 20 * scale);
    drawTo(bx + 10 * scale, by + 0 * scale);
    lift(1);
    break;
  case 2:
    drawTo(bx + 2 * scale, by + 12 * scale);
    lift(0);
    bogenUZS(bx + 8 * scale, by + 14 * scale, 6 * scale, 3, -0.8, 1);
    drawTo(bx + 1 * scale, by + 0 * scale);
    drawTo(bx + 12 * scale, by + 0 * scale);
    lift(1);
    break;
  case 3:
    drawTo(bx + 2 * scale, by + 17 * scale);
    lift(0);
    bogenUZS(bx + 5 * scale, by + 15 * scale, 5 * scale, 3, -2, 1);
    bogenUZS(bx + 5 * scale, by + 5 * scale, 5 * scale, 1.57, -3, 1);
    lift(1);
    break;
  case 4:
    drawTo(bx + 10 * scale, by + 0 * scale);
    lift(0);
    drawTo(bx + 10 * scale, by + 20 * scale);
    drawTo(bx + 2 * scale, by + 6 * scale);
    drawTo(bx + 12 * scale, by + 6 * scale);
    lift(1);
    break;
  case 5:
    drawTo(bx + 2 * scale, by + 5 * scale);
    lift(0);
    bogenGZS(bx + 5 * scale, by + 6 * scale, 6 * scale, -2.5, 2, 1);
    drawTo(bx + 5 * scale, by + 20 * scale);
    drawTo(bx + 12 * scale, by + 20 * scale);
    lift(1);
    break;
  case 6:
    drawTo(bx + 2 * scale, by + 10 * scale);
    lift(0);
    bogenUZS(bx + 7 * scale, by + 6 * scale, 6 * scale, 2, -4.4, 1);
    drawTo(bx + 11 * scale, by + 20 * scale);
    lift(1);
    break;
  case 7:
    drawTo(bx + 2 * scale, by + 20 * scale);
    lift(0);
    drawTo(bx + 12 * scale, by + 20 * scale);
    drawTo(bx + 2 * scale, by + 0);
    lift(1);
    break;
  case 8:
    drawTo(bx + 5 * scale, by + 10 * scale);
    lift(0);
    bogenUZS(bx + 5 * scale, by + 15 * scale, 5 * scale, 4.7, -1.6, 1);
    bogenGZS(bx + 5 * scale, by + 5 * scale, 5 * scale, -4.7, 2, 1);
    lift(1);
    break;

  case 9:
    drawTo(bx + 9 * scale, by + 11 * scale);
    lift(0);
    bogenUZS(bx + 7 * scale, by + 15 * scale, 5 * scale, 4, -0.5, 1);
    drawTo(bx + 5 * scale, by + 0);
    lift(1);
    break;

  case 111://擦除面板的动作

      drawTo(rubberx, rubbery); //到达笔擦位置
      lift(0);//落笔
      drawTo(rubberx - 10, rubbery); //水平左移拉出笔擦
      drawTo(58, 48); //擦
      drawTo(58, 45);
      drawTo(2, 45);
      drawTo(2, 41);
      drawTo(58, 41);
      drawTo(60, 37);
      drawTo(2, 37);
      drawTo(2, 33);
      drawTo(60, 33);
      drawTo(60, 29);
      drawTo(2, 29);
      drawTo(2, 25);
      drawTo(60, 25);
      drawTo(60, 20);
      drawTo(2, 20);
      drawTo(rubberx - 10 , rubbery); 
      
      drawTo(rubberx + 3 , rubbery);     //多推一些，让笔擦能够进入笔架
      lift(2);//高抬臂

    break;

  case 11:
    drawTo(bx + 5 * scale, by + 15 * scale);
    lift(0);
    bogenGZS(bx + 5 * scale, by + 15 * scale, 0.1 * scale, 1, -1, 1);
    lift(1);
    drawTo(bx + 5 * scale, by + 5 * scale);
    lift(0);
    bogenGZS(bx + 5 * scale, by + 5 * scale, 0.1 * scale, 1, -1, 1);
    lift(1);
    break;
  case H;
    drawTo(bx + 2 * scale, by + 20 * scale);
    lift(0);//落笔
  drawTo(bx + 2 * scale, by +  0* scale);
    lift(1);//抬臂
    drawTo(bx + 2 * scale, by + 10 * scale);
    lift(0);//落笔
    drawTo(bx + 12 * scale, by + 10 * scale);
    lift(1);//抬臂
    drawTo(bx + 12 * scale,by + 20 * scale);
     lift(0);//落笔
     drawTo(bx + 12* scale,by + 20* scale);
     lift(1);//抬臂
    break;
 case I;
    drawTo(bx + 7 * scale, by + 20 * scale);
    lift(0);//落笔
  drawTo(bx + 13 * scale, by +  20* scale);
    lift(1);//抬臂
    drawTo(bx + 10 * scale, by + 20 * scale);
    lift(0);//落笔
    drawTo(bx + 10 * scale, by + 0 * scale);
    lift(1);//抬臂
    drawTo(bx + 7 * scale,by + 0 * scale);
     lift(0);//落笔
     drawTo(bx + 13* scale,by + 0* scale);
     lift(1);//抬臂
    break;
case T;
    drawTo(bx + 5 * scale, by + 20 * scale);
    lift(0);//落笔
  drawTo(bx + 15 * scale, by +  20* scale);
    lift(1);//抬臂
    drawTo(bx + 10 * scale, by + 20 * scale);
    lift(0);//落笔
    drawTo(bx + 10 * scale, by + 0 * scale);
    lift(1);//抬臂
       
    break;
case W;
    drawTo(bx + 0 * scale, by + 20 * scale);
    
   lift(0);//落笔
  
  drawTo(bx + 5 * scale, by +  0* scale);
    
    drawTo(bx + 10 * scale, by + 20 * scale);
    
    drawTo(bx + 15 * scale, by + 0 * scale);
    
    drawTo(bx + 20 * scale,by + 20 * scale);
     
     lift(1);//抬臂
    break;
  }
void drawTo(double pX, double pY) {
  double dx, dy, c;
  int i;

  // dx dy of new point
  dx = pX - lastX;
  dy = pY - lastY;
  //path lenght in mm, times 4 equals 4 steps per mm
  c = floor(4 * sqrt(dx * dx + dy * dy));

  if (c < 1) c = 1;

  for (i = 0; i <= c; i++) {
    // draw line point by point
    set_XY(lastX + (i * dx / c), lastY + (i * dy / c));

  }

  lastX = pX;
  lastY = pY;
}
}

}
