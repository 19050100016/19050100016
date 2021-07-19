#define open(num) digitalWrite(num,LOW)
#define close(num) digitalWrite(num,HIGH)
int e=1;
int d=2;
int dp=3;
int c=4;
int g=5;
int b=7;
int BT3=8;
int BT2=9;
int f=10;
int a=11;
int BT1=12;
int LED=13;
void digital_1()
{
	open(b);
	open(c);
	delay(10);
}
void digital_2()
{
	open(a);
	open(b);
	open(g);
	open(e);
	open(d);
	delay(10);
}
void digital_3()
{
	open(a);
	open(b);
	open(g);
	open(c);
	open(d);
	delay(10);
}
void digital_4()
{
	open(b);
	open(f);
	open(g);
	open(c);
	delay(10);
}
void digital_5()
{
	open(a);
	open(f);
	open(g);
	open(c);
	open(d);
	delay(10);
}
void digital_6()
{
	open(a);
	open(f);
	open(g);
	open(e);
	open(c);
	open(d);
	delay(10);
}
void digital_7()
{
	open(a);
	open(b);
	open(c);
	delay(10);
}
void digital_8()
{
	open(a);
	open(f);
	open(g);
	open(e);
	open(c);
	open(d);
	open(b);
	delay(10);
}
void digital_9()
{
	open(a);
	open(f);
	open(g);
	open(c);
	open(d);
	open(b);
	delay(10);
}
void digital_0()
{
	open(a);
	open(f);
	open(e);
	open(c);
	open(d);
	open(b);
	delay(10);
}
void setup()
{
	unsigned char i;
	for(i=1;i<=13;i++)
	{
		pinMode(i,OUTPUT);
		digitalWrite(i,HIGH);
	}
	digitalWrite(13,LOW);
	open(8);
	open(9);
	open(12);
}
void resetup()
{
	int i;
	for(i=1;i<=12;i++)
	{
		digitalWrite(i,HIGH);
	}
	open(8);
	open(9);
	open(12);
}
void digital_up(int num)
{
	int num1=num/10;
	int num2=num%10;
	int i=20;
	while(i--)
	{
		switch(num1)
		{
			case 0:digital_0();break;
			case 1:digital_1();break;
			case 2:digital_2();break;
			case 3:digital_3();break;
			case 4:digital_4();break;
			case 5:digital_5();break;
			case 6:digital_6();break;
			case 7:digital_7();break;
			case 8:digital_8();break;
			case 9:digital_9();
		}
		close(BT2);
                delay(1);
		resetup();
		open(BT2);
		switch(num2)
		{
			case 0:digital_0();break;
			case 1:digital_1();break;
			case 2:digital_2();break;
			case 3:digital_3();break;
			case 4:digital_4();break;
			case 5:digital_5();break;
			case 6:digital_6();break;
			case 7:digital_7();break;
			case 8:digital_8();break;
			case 9:digital_9();
		}
		close(BT3);
                delay(1);
		resetup();
		open(BT3);
	}
	open(BT2);
	open(BT3);
	return;
}
void flash()
{
	digitalWrite(13,HIGH);
	delay(200);
	digitalWrite(13,LOW);
	delay(200);
	digitalWrite(13,HIGH);
	delay(200);
	digitalWrite(13,LOW);
	delay(200);
}
void loop()
{
	unsigned char i,j;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
                        digitalWrite(13, i == j);
			digital_up(10*i+j);
		}
	}
}
               
               
  
  