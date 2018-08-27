#include <iostream>
#include <GL/glut.h>
#include "window.h"
#include "scenery.h"
#include <stdio.h>
#include<windows.h>
//#include<stdlib.h>
//#include<cstring>
using namespace std;

///int x = -900, y = -600;=> already define in window.h
///signed int _brickX=0;=> already define in window.h
///int w = 10, h = 10;=> already define in window.h
/**float getX(int x)=> already define in window.h
{
    return (float)x/(float)900;
}
float getY(int y)=> already define in window.h
{
    return (float)y/(float)600;
}**/
float _move = 0.0f;float Tx_cloud1 = getX(-940);float Tx_max = 1.0;float Tx_reset = 1.0;
float sun_Y = 0.8;bool sunset;bool sunrise;float obj_x = getX(-900);float obj_xx;int antina_color=0;
float starYLoop=0.83;int score=0;
int day=1;bool animating;bool windowOne;bool windowTwo;bool windowThree;bool windowFour;bool windowFive;bool windowSix;
int arr[]={-747,-414,-99,216,540,855};int light[]={255,0};
char text[] = "score: ";
string t;char sc[90];

/*string IntToString ( int number )//For converting Int to String
{
  ostringstream oss;

  // Works just like cout
  oss<< number;

  // Return the underlying string
  return oss.str();
}*/
//Print
void Sprint( float x, float y, char *st)
{

    int l,i;
    l=strlen( st ); // see how many characters are in text string.
    glColor3ub(254,1,133);
    //glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text

    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);
    }
        //t=toString(score)[0];
    sprintf(sc, "%d", score);///convert int to char
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sc[0] );
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sc[1] );


}

void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

void startGame(int i){
    if(animating == true){
    obj_xx=arr[rand() % 6];

    if(obj_xx==-747){
        windowOne=true;
    }else windowOne=false;
    if(obj_xx==-414 ){windowTwo=true;}else windowTwo=false;
    if(obj_xx==-99){windowThree=true;}else windowThree=false;
    if(obj_xx==216){windowFour=true;}else windowFour=false;
    if(obj_xx==540){windowFive=true;}else windowFive=false;
    if(obj_xx==855){windowSix=true;}else windowSix=false;
    //cout<<"obj_xx:"<<obj_xx<<endl;
    obj_x=obj_xx/900;
    //cout<<"obj_x:"<<obj_x<<endl;
    glutTimerFunc(1000, startGame, 0);

    }
    glutPostRedisplay();
    //
    //cout<<"mod value between 10: "<< rand() % 5<<endl;
    ///1st window : -0.83 or getX(-747)
    ///2nd window : -0.46 or getX(-414)
    ///3rd window : -0.11 or getX(-99)
    ///4th window : 0.24 or getX(216)
    ///5th window : 0.60 or getX(540)
    ///6th window : 0.95 or getX(855)
    //cout<<"1st window : "<< obj_x<<endl;
   // cout<<"object available window no: "<<rand() % 5<<"& array value is:"<<arr[rand() % 5]<<endl;
}
void lightToggle(int i){
    if(day==0){
    antina_color=light[rand()%2];
    glutTimerFunc(6000, lightToggle, 0);
    }
    glutPostRedisplay();

}
void update(int value) {


    //obj_x=arr[rand() % 5];
    Tx_cloud1 += 0.0005;
    if (Tx_cloud1 > Tx_max)
    {
        Tx_cloud1 = -Tx_reset-0.1;
    }


    star_x += 0.0001;
    if (star_x > Tx_max+0.9)
    {
        star_x = -Tx_reset+0.9;
    }

	if (sunset==true) {
        sun_Y -= 0.003;
		//if (sun_Y > 0.8) {

			if (sun_Y < -0.02) {

				//sun_Y = Tx_reset-0.2;
				obj_x = getX(-950);

				sun_Y = -0.02;
				day=0;
				sunset=false;
			}
        cout<<"sun y axis: "<<sun_Y<<endl;
	}
	if (sunrise==true) {
               sun_Y += 0.003;
		//if (sun_Y > 0.8) {

			if (sun_Y >=0.8) {

				//sun_Y = Tx_reset-0.2;
				day=1;
				sun_Y = 0.8;
				sunrise=false;
			}
			cout<<"sun y axis: "<<sun_Y<<endl;
	}
	elbow +=2;
    if(elbow>175){

        elbow =150;
    }
    r_elbow -=2;
    if(r_elbow<185){
        r_elbow =210;
    }


	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 20 milliseconds

}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
    case 27:
    exit(0);
    break;
    case 'q':

    animating = false;
    glutPostRedisplay();
    break;
    case 's':
    //PlaySound("F:/AIUB/10th semester/computer graphics/Final/project/hide&seek/water001.wav", NULL, SND_SYNC);
    animating = !animating;
    obj_x = getX(-950);
    glutTimerFunc(600, startGame, 0); //Notify GLUT to call update again in 20 milliseconds
    glutPostRedisplay();
    break;
    case 'j':
    obj_x+=0.01;
    glutPostRedisplay();
    break;
    case 'k':
    obj_x-=0.01;
    glutPostRedisplay();
    break;

    case 'e': /* e key rotates at elbow */
    elbow = (elbow + 5) % 360;

    glutPostRedisplay();
    break;
    case 'E':
    elbow = (elbow - 5) % 360;

    glutPostRedisplay();
    break;
    case 'T': /* e key rotates at r_elbow */
    r_elbow = (r_elbow + 5) % 360;
    //cout<<"elbow plus"<<r_elbow<<endl;
    glutPostRedisplay();
    break;
    case 't':
    r_elbow = (r_elbow - 5) % 360;
    //cout<<"elbow minus"<<r_elbow<<endl;
    glutPostRedisplay();
    break;
	case 'S':
		animating = !animating;
		obj_x = getX(-950);
		sunset = !sunset;

		glutPostRedisplay();
		break;
    case 'R':

    sunrise = !sunrise;
    glutPostRedisplay();
    break;
    case 'n':
    case 'N':

		day=0;
		cout<<'n'<<endl;
		glutPostRedisplay();
		break;
    case 'd':
    case 'D':

		day=1;
		cout<<'n'<<endl;
		glutPostRedisplay();
		break;
    }

}
void scoreFunc(int x,int y){
    if(windowOne==true){
        if(x>=58&&x<=94&& y>=381&&y<=451){
            score+=1;
            windowOne=!windowOne;cout<<score<<endl;

        }
    }///for 1st window}
    if(windowTwo==true){if(x>=225&&x<=260 && y>=381&&y<=451){score+=1;windowTwo=!windowTwo; cout<<score<<endl;}}///for 2nd window}
    if(windowThree==true){if(x>=381&&x<=419&& y>=381&&y<=451){score+=1;windowThree=!windowThree;  cout<<score<<endl;}}///for 3rd window}
    if(windowFour==true){if(x>=540&&x<=577&& y>=381&&y<=451){score+=1;windowThree=!windowThree; cout<<score<<endl;}}///for 4th window}
    if(windowFive==true){if(x>=702&&x<=739&& y>=381&&y<=451){score+=1;windowFive=!windowFour; cout<<score<<endl;}}///for 5th window}
    if(windowSix==true){ if(x>=859&&x<=896&& y>=381&&y<=451){score+=1;windowFive=!windowFive; cout<<score<<endl;}}///for 6th window}
    if(score==10){
        //PlaySound("F:/AIUB/10th semester/computer graphics/Final/project/hide&seek/chipquest.wav", NULL, SND_SYNC);
        score++;
    }
}
void myMouse(int b, int s, int x, int y) {      // mouse click callback
	if (s == GLUT_DOWN) {

		if (b == GLUT_LEFT_BUTTON) {
            //PlaySound("F:/AIUB/10th semester/computer graphics/Final/project/hide&seek/switch-18.wav", NULL, SND_SYNC);
            //int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
            cout<<"X:"<<x<<": "<<"Y:"<<y<<""<<endl;
            scoreFunc(x,y);
		}
		/*
		if (b == GLUT_RIGHT_BUTTON){

		} */
	}
}
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); //Reset the drawing perspective
	//gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     //clear the color buffer and the depth buffer

//camera position, x,y,z, looking at x,y,z, Up Positions of the camera
    if(day==1){
    glPushMatrix();




///draw sky color above beam
drawSky(135,206,250);
///finished sky color above beam
///Draw sun color
    glPushMatrix();
    //glTranslatef(Tx_cloud1, 0.45, 0.1);
    glColor3ub( 252, 212, 64 );
    glTranslatef(-0.7, sun_Y, 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.1, 0.1, 0.1);
    drawSun();///find scenery.h
    glPopMatrix();
///finished sun color
///print score
    glPushMatrix();
        Sprint(getX(-850),getY(570),text);
    glPopMatrix();
///finish score
    ///Draw first yeild
    glPushMatrix();

	glColor3ub(0,100,0);
    drawFirstYeild();
    glPopMatrix();
    ///finish first yeild

    ///draw road
    glPushMatrix();

	glColor3ub(204,204,0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-900), getY(-400), 0.0f);
        glVertex3f(getX(900), getY(-400), 0.0f);

        glVertex3f(getX(900), getY(-360), 0.0f);
        glVertex3f(getX(-900), getY(-360), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished  road

    ///draw 2nd yeild
    glPushMatrix();

	glColor3ub(0, 100, 0);
    drawSecondYeild();
    glPopMatrix();
    ///finished  2nd yeild
///draw brick
    drawBrick();///=>find scenery.h
///finished brick

    ///draw floor color under window
    glPushMatrix();

	glColor3ub(169,169,169);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(-330), 0.0f);
        glVertex3f(getX(900), getY(-330), 0.0f);

        glVertex3f(getX(900), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished floor color under window

///Draw cloud color
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(Tx_cloud1, 0.8, 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.1, 0.1, 0.1);
    drawCloud();///find scenery.h
    glPopMatrix();
///finished cloud color
    //makeNight(0,0,0);
///Draw Building
    glPushMatrix();
    glColor3ub(169,169,169);///gray
    glTranslatef(getX(450), getY(250), 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.15, 0.32, 0.1);
    glutSolidSphere(2,20,16);
    glutSolidSphere(2,20,16);
    glPopMatrix();
    ///building window start

///building window finish
        glPushMatrix();
	glColor3ub(0,0,0);///black antina
	glTranslatef(1.36, 1.09f, 0.0f);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-780), getY(-120), 0.0f);
        glVertex3f(getX(-785), getY(-120), 0.0f);

        glVertex3f(getX(-783), getY(-80), 0.0f);
        glVertex3f(getX(-783), getY(-80), 0.0f);

	glEnd();
    glPopMatrix();

///finished Building
///draw object
glPushMatrix();
    glTranslatef(obj_x, getY(-310), 0.1);
    drawObject();
    glPopMatrix();
///finished object draw
        drawWindow();///=>check window.h

        drawTin();///=>check scenery.h

///draw beam color above window
    glPushMatrix();

	glColor3ub(169,169,169);
	glTranslatef(0.0,-0.01,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(-30), 0.0f);
        glVertex3f(getX(900), getY(-30), 0.0f);

        glVertex3f(getX(900), getY(30), 0.0f);
        glVertex3f(getX(-900), getY(30), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished beam color above window
///draw road middle color
glPushMatrix();

	glColor3ub(255,128,0);
	glTranslatef(0.0,-0.73,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(55), 0.0f);
        glVertex3f(getX(900), getY(55), 0.0f);

        glVertex3f(getX(900), getY(65), 0.0f);
        glVertex3f(getX(-900), getY(65), 0.0f);

	glEnd();
    glPopMatrix();

///finished road middle color
glPopMatrix();
}
else if(day==0){
glPushMatrix();
    //makeNight(0,0,0);
    glutTimerFunc(0.0000000000000001, lightToggle, 0);
    ///start night sky color
    glPushMatrix();

	glColor3ub(0,0,0);
	//glColor3ub(0,0,0);
	glTranslatef(0.0,-0.01,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(55), 0.0f);
        glVertex3f(getX(900), getY(55), 0.0f);

        glVertex3f(getX(900), getY(650), 0.0f);
        glVertex3f(getX(-900), getY(650), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished night sky color
    ///Draw moon color
    glPushMatrix();
    //glTranslatef(Tx_cloud1, 0.45, 0.1);
    glColor3ub(191,191,191);
    glTranslatef(-0.5, 0.8, 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.1, 0.1, 0.1);
    drawSun();///find scenery.h
    glPopMatrix();
///finished moon like as sun color
///print score
    glPushMatrix();
        Sprint(getX(-850),getY(570),text);
    glPopMatrix();
///finish score

    ///Draw first yeild
    glPushMatrix();

	glColor3ub(0,60,0);
    drawFirstYeild();
    glPopMatrix();
    ///finish first yeild

    ///draw road
    glPushMatrix();

	glColor3ub(204,204,0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-900), getY(-400), 0.0f);
        glVertex3f(getX(900), getY(-400), 0.0f);

        glVertex3f(getX(900), getY(-360), 0.0f);
        glVertex3f(getX(-900), getY(-360), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished  road

    ///draw 2nd yeild
    glPushMatrix();

	glColor3ub(0, 100, 0);
    drawSecondYeild();
    glPopMatrix();
    ///finished  2nd yeild
///draw brick
    drawBrick();///=>find scenery.h
///finished brick

    ///draw floor color under window
    glPushMatrix();

	glColor3ub(169,169,169);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(-330), 0.0f);
        glVertex3f(getX(900), getY(-330), 0.0f);

        glVertex3f(getX(900), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished floor color under window

///draw star
    glPushMatrix();
    glTranslatef(-0.9, -0.0, -0.9);
    drawStars();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.1, 0.5, -0.9);
    drawStars();
    glPopMatrix();
///finished star
    ///Draw cloud color
    glPushMatrix();
    glColor3ub(128, 128, 128);
    glTranslatef(Tx_cloud1, 0.8, 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.1, 0.1, 0.1);
    drawCloud();///find scenery.h

    glColor3ub(128, 128, 128);
    glTranslatef(Tx_cloud1+2.3, -1.9, 0.1);
    glRotatef(90, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.5, 0.1);
    drawCloud();///find scenery.h
    glPopMatrix();
///finished cloud color

///Draw Building
    glPushMatrix();
    glColor3ub(169,169,169);///gray
    glTranslatef(getX(450), getY(250), 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.15, 0.32, 0.1);
    glutSolidSphere(2,20,16);
    glPopMatrix();
        glPushMatrix();
	glColor3ub(antina_color,0,0);///black antina
	glTranslatef(1.36, 1.09f, 0.0f);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-780), getY(-120), 0.0f);
        glVertex3f(getX(-785), getY(-120), 0.0f);

        glVertex3f(getX(-783), getY(-100), 0.0f);
        glVertex3f(getX(-783), getY(-100), 0.0f);

	glEnd();
    glPopMatrix();
///finished Building
///draw object
glPushMatrix();
    glTranslatef(obj_x, getY(-310), 0.1);
    drawObject();
    glPopMatrix();
///finished object draw
        drawWindow();///=>check window.h
        drawTin();///=>check scenery.h

///draw beam color above window
    glPushMatrix();

	glColor3ub(169,169,169);
	glTranslatef(0.0,-0.01,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(-30), 0.0f);
        glVertex3f(getX(900), getY(-30), 0.0f);

        glVertex3f(getX(900), getY(30), 0.0f);
        glVertex3f(getX(-900), getY(30), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished beam color above window
///draw road middle color
glPushMatrix();

	glColor3ub(255,128,0);
	glTranslatef(0.0,-0.73,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(55), 0.0f);
        glVertex3f(getX(900), getY(55), 0.0f);

        glVertex3f(getX(900), getY(65), 0.0f);
        glVertex3f(getX(-900), getY(65), 0.0f);

	glEnd();
    glPopMatrix();

///finished road middle color
glPopMatrix();
    }
    glutPostRedisplay(); //Tell GLUT that the display has changed
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	glutInitWindowSize(900, 600);
	glutInitWindowPosition(275, 0);
	glutCreateWindow("American International University-Bangladesh(AIUB)");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(myMouse); //Mouse function
	glutTimerFunc(20, update, 0); //Add a timer
	glutMainLoop();
	return 0;
}
