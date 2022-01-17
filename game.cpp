//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include <fstream>
#include<cmath>// for basic math functions such as cos, sin, sqrt 
#include <ctime>

using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
 
	
	
 int p=0;
 int q=0;
 int t=0;
 
void SetCanvasSize(int width, int height) 
{
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

	
//user cars	
int xI = 0, yI = 650;
	
void drawCar1R() 
{
	DrawSquare(xI, yI, 40, colors[RED]);
	//DrawRectangle(xI+18, yI+20, 5, 20, colors[WHITE]);
	//DrawRectangle(xI, yI+16, 40, 5, colors[WHITE]);
	glutPostRedisplay();
}
void drawCar1Y()
{
        DrawSquare(xI, yI, 40, colors[YELLOW]);
	//DrawRectangle(xI+18, yI+20, 5, 20, colors[WHITE]);
	//DrawRectangle(xI, yI+16, 40, 5, colors[WHITE]);
	glutPostRedisplay();
}


void drawCar1D() 
{
	DrawCircle(xI+6, yI+2, 7, colors[BLACK]);
	glutPostRedisplay();
}

void drawCar1A() 
{
	DrawCircle(xI+34, yI+2, 7, colors[BLACK]);
	glutPostRedisplay();

}



//opponent cars
int x2I = 40, y2I=600;
void drawCar2() 
{
        
	DrawSquare(x2I, y2I, 30, colors[BLUE]);
	DrawCircle(x2I+4, y2I, 6, colors[BLACK]);
	DrawCircle(x2I+24, y2I, 6, colors[BLACK]);
	glutPostRedisplay();
}


int x3I = 720, y3I = 600;
void drawCar3() 
{
	DrawSquare(x3I, y3I, 30, colors[BLUE]);
	DrawCircle(x3I+4, y3I, 6, colors[BLACK]);
	DrawCircle(x3I+24, y3I, 6, colors[BLACK]);
	glutPostRedisplay();
}

int x4I = 970, y4I = 640;
void drawCar4() 
{
	DrawSquare(x4I, y4I, 30, colors[BLUE]);
	DrawCircle(x4I+4, y4I, 6, colors[BLACK]);
	DrawCircle(x4I+24, y4I, 6, colors[BLACK]);
	glutPostRedisplay();
}

int x5I = 580, y5I = 120;
void drawCar5() 
{
	DrawSquare(x5I, y5I, 30, colors[BLUE]);
	DrawCircle(x5I+4, y5I, 6, colors[BLACK]);
	DrawCircle(x5I+24, y5I, 6, colors[BLACK]);
	glutPostRedisplay();
}



bool flag = true;
/*void moveCar1() {
	
	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}
*/

void moveCar2() {
	
	if (y2I > 10 && flag) {
		y2I -= 6;
		cout << "going down";
		if(y2I < 200)
			
			flag = false;

	}
	else if (y2I < 1010 && !flag) {
		cout << "going up";
		y2I += 6;
		if (y2I > 600)
			flag = true;
	}
}


void moveCar3() {
	
	if (y3I > 15 && flag) {
		y3I -= 4;
		cout << "going down";
		if(y3I < 200)
			
			flag = false;

	}
	else if (y3I < 1000 && !flag) {
		cout << "going up";
		y3I += 4;
		if (y3I > 600)
			flag = true;
	}
}

void moveCar4() {
	
	if (x4I > 10 && flag) {
		x4I -= 4;
		cout << "going left";
		if(x4I < 300)
			
			flag = false;

	}
	else if (x4I < 1010 && !flag) {
		cout << "go right";
		x4I += 4;
		if (x4I > 900)
			flag = true;
	}
}

void moveCar5() {
	
	if (x5I > 10 && flag) {
		x5I -= 4;
		cout << "going left";
		if(x5I < 300)
			
			flag = false;

	}
	else if (x5I < 1010 && !flag) {
		cout << "go right";
		x5I += 4;
		if (x5I > 600)
			flag = true;
	}
} 

//score file
void outputScore(int scr) {
     int s = scr;
     ofstream scorefile;
     scorefile.open("highscore.txt");
     scorefile << "Score: " << s << "\n";
}
   
     //center passenger----------------------coordinates----------
     // a=x, b=y circle and c=x, d=y rectangle
     int xc1 = 0, yc1 = 0, score = 0;
     int a1=500,b1=300,a2=600,b2=400;
     int a=610, b=490, c=610, d=460; 
     
     //passenger x and y coordinates
     int passenger1x=0;
     int passenger1y=0;
     int passenger2x=0;
     int passenger2y=0;
     int passenger3x=0;
     int passenger3y=0;
     bool save = false;
     
     //drop off x and y coordintes
     int dropOffX=-30;
     int dropOffY=-30;
     int dropOffX1=-40;
     int dropOffY1=-40;  
     
       
           


void GameDisplay()/**/{
	
	
        
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	

        if(p==0)
        {
           DrawString(100, 800, "...........................RUSH HOUR.................................. ", colors[YELLOW]);
           DrawString(50, 700, "Choose an option ", colors[YELLOW]);
           DrawString(50, 600, "Press s to start game" , colors[YELLOW]);
           DrawString(50, 500, "Press b to show high score" , colors[YELLOW]);
           glutPostRedisplay();
           }
           if(p==2)
           {
                DrawString(200, 800, "..............Select Taxi............. ", colors[YELLOW]);
                DrawString(50, 700, "Press r Red" , colors[RED]);
                DrawString(50, 600, "Press y for Yellow" , colors[YELLOW]);
                glutPostRedisplay();
                }
               if(p==3)
               {
        
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)	
	DrawLine( 40, 0, 40, 700, 1, colors[BLACK] );
	DrawLine( 80, 0, 80, 700, 1, colors[BLACK] );
	DrawLine( 120, 0, 120, 700, 1, colors[BLACK] );
	DrawLine( 160, 0, 160, 700, 1, colors[BLACK] );
	DrawLine( 200, 0, 200, 700, 1, colors[BLACK] );
	DrawLine( 240, 0, 240, 700, 1, colors[BLACK] );
	DrawLine( 280, 0, 280, 700, 1, colors[BLACK] );
	DrawLine( 320, 0, 320, 700, 1, colors[BLACK] );
	DrawLine( 360, 0, 360, 700, 1, colors[BLACK] );
	DrawLine( 400, 0, 400, 700, 1, colors[BLACK] );
	DrawLine( 440, 0, 440, 700, 1, colors[BLACK] );
	DrawLine( 480, 0, 480, 700, 1, colors[BLACK] );
	DrawLine( 520, 0, 520, 700, 1, colors[BLACK] );
	DrawLine( 560, 0, 560, 700, 1, colors[BLACK] );
	DrawLine( 600, 0, 600, 700, 1, colors[BLACK] );
	DrawLine( 640, 0, 640, 700, 1, colors[BLACK] );
	DrawLine( 680, 0, 680, 700, 1, colors[BLACK] );
	DrawLine( 720, 0, 720, 700, 1, colors[BLACK] );
	DrawLine( 760, 0, 760, 700, 1, colors[BLACK] );
	DrawLine( 800, 0, 800, 700, 1, colors[BLACK] );
	DrawLine( 840, 0, 840, 700, 1, colors[BLACK] );
	DrawLine( 880, 0, 880, 700, 1, colors[BLACK] );
	DrawLine( 920, 0, 920, 700, 1, colors[BLACK] );
	DrawLine( 960, 0, 960, 700, 1, colors[BLACK] );
	
	
	
	//passenger1
	DrawCircle(passenger1x, passenger1y, 8, colors[WHITE]);
	
	//passenger2
        DrawCircle(passenger2x, passenger2y, 8, colors[WHITE]);
	
	//passenger3
        DrawCircle(passenger3x, passenger3y, 8, colors[WHITE]);
	
	
	DrawSquare(520, 450, 30, colors[BROWN]);
	
	
	DrawSquare(90, 600, 30, colors[BROWN]);
	DrawSquare( 400, 300, 30,colors[BROWN]);
	DrawSquare(200, 40, 30, colors[BROWN]);
	DrawSquare(760, 100, 30, colors[BROWN]);
	
	//Display Score
	string sco;
	sco = Num2Str(score);
	DrawString( 20, 800, "Score = " + sco, colors[BLACK]);
	DrawString( 150, 800, "0", colors[BLACK]);
	//DrawString( 300, 800, score, colors[BLACK]);
	
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	//tree
	DrawRectangle(337, 435, 7, 30, colors[BROWN] );
	DrawTriangle( 320, 460, 360, 460, 340, 500, colors[GREEN] );
	//tree
	DrawRectangle(617, 25, 7, 30, colors[BROWN] ); 
	DrawTriangle( 600, 50, 640, 50, 620, 90, colors[GREEN] ); 
	



	DrawRectangle( 80, 550, 200, 40, colors[BLACK] );
	DrawRectangle( 0, 690, 1050, 40, colors[BLACK] );
	DrawRectangle( 440, 400, 40, 150, colors[BLACK] );
	DrawRectangle( 560, 550, 120, 40, colors[BLACK] );
	DrawRectangle( 800, 520, 120, 40, colors[BLACK] );
	DrawRectangle( 920, 430, 40, 200, colors[BLACK] );
	DrawRectangle( 80, 390, 200, 40, colors[BLACK] );
	DrawRectangle( 280, 350, 40, 80, colors[BLACK] );
	DrawRectangle( 830, 300, 420, 40, colors[BLACK] );
	DrawRectangle( 800, 190, 40, 150, colors[BLACK] );
	DrawRectangle( 400, 200, 300, 40, colors[BLACK] );
	DrawRectangle( 680, 200, 40, 120, colors[BLACK] );
	DrawRectangle( 680, 380, 40, 50, colors[BLACK] );
	DrawRectangle( 80, 0, 40, 200, colors[BLACK] );
	DrawRectangle( 880, 80, 80, 40, colors[BLACK] );
	DrawRectangle( 240, 130, 80, 150, colors[BLACK]);
	
	
	
	}
	if(q == 1)
	{
	    drawCar1R();
	}
	if(q == 2)
	{
	    drawCar1Y();
	}
	drawCar1A();
	drawCar1D();
	drawCar2();
	drawCar3();
	drawCar4();
	drawCar5();
	
        DrawCircle(dropOffX,dropOffY,10,colors[GREEN]);
        DrawCircle(dropOffX1,dropOffY1,10,colors[GREEN]);
   
      
	glutSwapBuffers(); // do not modify this line..

}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of 	mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	
	//barrior
	
        bool arr[6] = {0};
 
        int arrayX[23]={440,560,800,920,80,280,830,800,400,680,680,80,880,240,80,1020,0,320,320,600,600,337};
	int arrayY[23]={400,550,520,430,390,350,300,190,200,200,380,0,80,130,550,0,690,460,460,50,50,435};
	int arrayX1[23]={480,670,920,960,280,320,1250,840,700,720,720,120,960,320,280,0,1020,360,340,640,620,343};
	int arrayY1[23]={550,590,560,630,430,430,340,330,240,320,430,200,120,280,590,690,0,460,500,50,90,465};
	
	

	for(int i=0; i<23; i++)
	{
	    if((xI+40 == arrayX[i]) && (yI > arrayY[i]-40) && (yI<arrayY1[i]))
	    {
	        arr[1] = 1;
	    }
	    if((xI- (arrayX1[i] -arrayX[i]) == arrayX[i]) && ((yI>arrayY[i]-40 ) && (yI < arrayY1[i])))
	    {
	
	        arr[0] = 1;
	    }
	    if(yI + 40 == arrayY[i] && xI>arrayX[i]-40 && xI<arrayX1[i])
	    {
	        arr[2] = 1;
	    }
	    if((yI- (arrayY1[i] -arrayY[i]) == arrayY[i]) && ((xI>arrayX[i]-40 ) && (xI < arrayX1[i])))
	    {
	        arr[3] = 1;
	    }
	}

		if (key	
		       == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		     if(!arr[0]){
		          xI -= 10;
		     }
		         
		

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		    if(!arr[1])
		    {
		    	xI += 10;
		    }
		
		
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		   if(!arr[2])
		   {
		        yI += 10;
		   }
		
		
	} else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) { 
	            if(!arr[3])
	            {
		        yI -= 10;
		    }
	}
	

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.

 * */
void PrintableKeys(unsigned char key, int x, int y) {
      
        
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

       
        if((key == 32) && (xI >= passenger1x-30 && xI<=passenger1x+20) || (yI >= passenger1y-30 && yI<=passenger1y+20))
        {
            passenger1x += 1500;
            passenger1y += 1500;
            dropOffX = (rand()%100+550);
            dropOffY = (rand()%100+550);
            glutPostRedisplay();
        }
        else if((key == 32) && (xI >= passenger2x-30 && xI<=passenger2x+20) || (yI >= passenger2y-30 && yI<=passenger2y+20))
        {   
            passenger2x += 1500;
            passenger2y += 1500;
            dropOffX = (rand()%100+550);
            dropOffY = (rand()%100+550);
            glutPostRedisplay();
        }
        else if((key == 32) && (xI >= passenger3x-30 && xI<=passenger3x+20) || (yI >= passenger3y-30 && yI<=passenger3y+20))
        {  
            passenger3x += 1500;
            passenger3y += 1500;
            dropOffX = (rand()%100+550);
            dropOffY = (rand()%100+550);
            glutPostRedisplay();
        }
           
        
      
         
         
         
         glutPostRedisplay();
         
         if((key == 32) && (xI >= dropOffX-30 && xI<=dropOffX+20) || (yI >= dropOffY-30 && yI<=dropOffY+20))
         {
             dropOffX -=  1500;
             dropOffY -=  1500;
             //DrawString( 300, 800, "", colors[BLACK]);
             score+=10;
             outputScore(score);
             
             glutPostRedisplay();
         }
         /*if((key == 32) && (yI >= dropOffY-30 && yI<=dropOffY+20) || (xI >= dropOffX1-30 &&  xI<=dropOffX1+20))
         {
             dropOffX1 -=  1500;
             dropOffY1 -=  1500;
             
             glutPostRedisplay();
         
         }
       */
       if(key == 's' || key == 'S')
       {    
           p = 2;   
       }
       if(key == 'H' || key == 'h')
       {
           p = 4;
       }
       
	glutPostRedisplay(); 
	if(key == 'r' || key == 'r')
	{
	    q = 1;
	    p = p+1;
	}
	if(key == 'y' || key == 'Y')
	{
	    q = 2;
	    p = p+1;
	}
	
	
	glutPostRedisplay();
}




/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	moveCar2();
	moveCar3();
	moveCar4();
	moveCar5();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
			
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			
			cout<<"Right Button Pressed"<<endl;

	}
	
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {
	
	
        
	int width = 1020, height = 840; // i have set my window size to be 800 x 600
	
	

        srand(time(NULL)); 
       
        passenger1x = (rand()%500);
        passenger1y = (rand()%500);
        passenger2x = (rand()%500);
        passenger2y = (rand()%500);
        passenger3x = (rand()%500);
        passenger3y = (rand()%500);
        
    
       
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by Shehbaz Karim"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 3);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	
	glutMainLoop();
	return 1;
	
	
	

	
	
}
#endif /* RushHour_CPP_ */
