#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define d1 9
#define d2 10
#define d3 11
#define d4 12


void write_digit(int digit, int data)
{
  switch(digit)      //select which digit to write. Count starts from left to right
  {
    case 9: digitalWrite(d1, HIGH);
    		digitalWrite(d2, LOW);
    		digitalWrite(d3, LOW);
    		digitalWrite(d4, LOW);
    		break;
    case 10:digitalWrite(d1, LOW);
    		digitalWrite(d2, HIGH);
    		digitalWrite(d3, LOW);
    		digitalWrite(d4, LOW);
    		break;
    case 11:digitalWrite(d1, LOW);
    		digitalWrite(d2, LOW);
    		digitalWrite(d3, HIGH);
    		digitalWrite(d4, LOW);
    		break;
    case 12:digitalWrite(d1, LOW);
    		digitalWrite(d2, LOW);
    		digitalWrite(d3, LOW);
    		digitalWrite(d4, HIGH);
    		break;
  }
  
  switch(data)    //The number to be written
  {
    case 0: digitalWrite(a, LOW);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, LOW);
    		digitalWrite(e, LOW);
    		digitalWrite(f, LOW);
    		digitalWrite(g, HIGH);
    		break;
    case 1: digitalWrite(a, HIGH);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, HIGH);
    		digitalWrite(e, HIGH);
    		digitalWrite(f, HIGH);
    		digitalWrite(g, HIGH);
    		break;
    case 2: digitalWrite(a, LOW);
    		digitalWrite(b, LOW);
    		digitalWrite(c, HIGH);
    		digitalWrite(d, LOW);
    		digitalWrite(e, LOW);
    		digitalWrite(f, HIGH);
    		digitalWrite(g, LOW);
    		break;
    case 3: digitalWrite(a, LOW);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, LOW);
    		digitalWrite(e, HIGH);
    		digitalWrite(f, HIGH);
    		digitalWrite(g, LOW);
    		break;
    case 4: digitalWrite(a, HIGH);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, HIGH);
    		digitalWrite(e, HIGH);
    		digitalWrite(f, LOW);
    		digitalWrite(g, LOW);
    		break;
    case 5: digitalWrite(a, LOW);
    		digitalWrite(b, HIGH);
    		digitalWrite(c, LOW);
    		digitalWrite(d, LOW);
    		digitalWrite(e, HIGH);
    		digitalWrite(f, LOW);
    		digitalWrite(g, LOW);
    		break;
    case 6: digitalWrite(a, LOW);
    		digitalWrite(b, HIGH);
    		digitalWrite(c, LOW);
    		digitalWrite(d, LOW);
    		digitalWrite(e, LOW);
    		digitalWrite(f, LOW);
    		digitalWrite(g, LOW);
    		break;
    case 7: digitalWrite(a, LOW);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, HIGH);
    		digitalWrite(e, HIGH);
    		digitalWrite(f, HIGH);
    		digitalWrite(g, HIGH);
    		break;
    case 8: digitalWrite(a, LOW);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, LOW);
    		digitalWrite(e, LOW);
    		digitalWrite(f, LOW);
    		digitalWrite(g, LOW);
    		break;
    case 9: digitalWrite(a, LOW);
    		digitalWrite(b, LOW);
    		digitalWrite(c, LOW);
    		digitalWrite(d, LOW);
    		digitalWrite(e, HIGH);
    		digitalWrite(f, LOW);
    		digitalWrite(g, LOW);
    		break;
  }
}
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  
  //d1 to d4 signifies digit 1 to digit 4
  
  write_digit(d4, 1);
  write_digit(d3, 2);
  write_digit(d2, 3);
  write_digit(d1, 4);
  
  
  
}
