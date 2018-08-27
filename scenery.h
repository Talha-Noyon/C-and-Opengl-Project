#ifndef SCENERY_H
#define SCENERY_H
#include <math.h>
float star_x=0.1;
static int  elbow = 150, r_elbow = 210;
void drawSnowMan();
void drawObject(){
    ///draw object
    glPushMatrix();

    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.1, 0.2, 0.1);
    drawSnowMan();
    glPopMatrix();
///finish object
}
void drawStars(){
    ///draw stars
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.23, 0.4f, 0.0f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.1444, 0.83, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.45, 0.66, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.55, 0.79, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.12, 0.92, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.26, 0.95, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.46, 0.58, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.25, 0.61, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.7, 0.64, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.60, 0.67, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.910, 0.7, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.8, 0.73, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.24, 0.76, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.33, 0.79, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.9, 0.92, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
    glPushMatrix();
	 glColor3ub(255,255,255);///white
	glTranslatef(star_x+0.38, 0.95, -0.01f);
    glBegin(GL_LINES);
        glVertex3f(getX(-781), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-121), 0.9f);
        glVertex3f(getX(-784), getY(-118), 0.9f);
        glVertex3f(getX(-781), getY(-119), 0.9f);
	glEnd();
    glPopMatrix();
///finished star
}
void drawSecondYeild(){
    glBegin(GL_POLYGON);

    glVertex3f(getX(-900), getY(-360), 0.0f);
    glVertex3f(getX(900), getY(-360), 0.0f);

    glVertex3f(getX(900), getY(-330), 0.0f);
    glVertex3f(getX(-900), getY(-330), 0.0f);

	glEnd();
}
void drawFirstYeild(){
    glBegin(GL_POLYGON);

    glVertex3f(getX(-900), getY(-600), 0.0f);
    glVertex3f(getX(900), getY(-600), 0.0f);

    glVertex3f(getX(900), getY(-400), 0.0f);
    glVertex3f(getX(-900), getY(-400), 0.0f);

	glEnd();
}
void drawSky(int r,int g,int b){
    glPushMatrix();

	glColor3ub(r,g,b);
	//glColor3ub(0,0,0);
	glTranslatef(0.0,-0.01,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(55), 0.0f);
        glVertex3f(getX(900), getY(55), 0.0f);

        glVertex3f(getX(900), getY(650), 0.0f);
        glVertex3f(getX(-900), getY(650), 0.0f);

	glEnd();
    glPopMatrix();
}
void makeNight()
{

}

void drawSnowMan() {


 glColor3f(1.0f, 1.0f, 1.0f);

// Draw Body
glPushMatrix();
 glTranslatef(0.0f ,0.72f, 0.0f);
 glScalef(0.6, 1.1, 0.1);
 glutSolidSphere(0.75f,5,20);
    glPopMatrix();
 ///draw left & right hand

glPushMatrix();

 glTranslatef(0.37f ,1.0f, 0.0f);
 glRotatef((GLfloat) elbow, 0.0, 0.0, 1.0);
 glScalef(0.14, 1.1, 0.1);
 glutSolidSphere(0.75f,5,20);
 //glutSolidCube(1.0);
    glPopMatrix();
    glPushMatrix();

 glTranslatef(-0.34f ,1.0f, 0.0f);
 glRotatef((GLfloat) r_elbow, 0.0, 0.0, 1.0);
 glScalef(0.14, 1.1, 0.1);
 glutSolidSphere(0.75f,5,20);
 //glutSolidCube(1.0);
    glPopMatrix();
// Draw Head
glColor3ub(255,255,255);
 glTranslatef(0.0f, 1.5f, 0.0f);
 glutSolidSphere(0.25f,20,20);

// Draw Eyes
 glPushMatrix();
 glColor3f(0.0f,0.0f,0.0f);
 glTranslatef(0.05f, 0.10f, 0.18f);
 glutSolidSphere(0.05f,10,10);
 glTranslatef(-0.1f, 0.0f, 0.0f);
 glutSolidSphere(0.05f,10,10);
 glPopMatrix();

// Draw Nose
 glColor3f(1.0f, 0.5f , 0.5f);
 glRotatef(0.0f,1.0f, 0.0f, 0.0f);
 glutSolidCone(0.08f,0.5f,10,2);


}
void drawTin()
{

    ///draw tin color above beam
glPushMatrix();

	glColor3ub(50,160,147);
	glTranslatef(0.0,-0.01,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(getX(-900), getY(30), 0.0f);
        glVertex3f(getX(900), getY(30), 0.0f);

        glVertex3f(getX(900), getY(55), 0.0f);
        glVertex3f(getX(-900), getY(55), 0.0f);

	glEnd();
    glPopMatrix();
    ///finished tin color above beam

}
void drawBrick(){

    ///draw brick1
    glPushMatrix();

	glColor3ub(170, 13, 3);
	glTranslatef(-0.9,-0.13,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(20), getY(-330), 0.0f);
        glVertex3f(getX(-20), getY(-330), 0.0f);


        glVertex3f(getX(-20), getY(-310), 0.0f);
        glVertex3f(getX(20), getY(-310), 0.0f);
	glEnd();
    glPopMatrix();
    ///finished  brick1
    ///draw brick2
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.7,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick2
    ///draw brick3
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.5,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick3
    ///draw brick4
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.3,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick4
    ///draw brick5
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.1,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick5
    ///draw brick6
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.1,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick6
///draw brick7
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.3,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick7
///draw brick8
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.5,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick8
///draw brick9
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.7,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick9
///draw brick10
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.9,-0.13,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick10

    ///draw brick1
    glPushMatrix();

	glColor3ub(170, 13, 3);
	glTranslatef(-0.8,-0.05,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(20), getY(-330), 0.0f);
        glVertex3f(getX(-20), getY(-330), 0.0f);


        glVertex3f(getX(-20), getY(-310), 0.0f);
        glVertex3f(getX(20), getY(-310), 0.0f);
	glEnd();
    glPopMatrix();
    ///finished  brick1
    ///draw brick2
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.6,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick2
    ///draw brick3
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.4,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick3
    ///draw brick4
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.2,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick4
    ///draw brick5
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(-0.0,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick5
    ///draw brick6
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.2,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick6
///draw brick7
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.4,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick7
///draw brick8
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.6,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick8
///draw brick9
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(0.8,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick9
///draw brick10
    glPushMatrix();
    //for(int x=-0.7;x<1;x+=0.2){
        glColor3ub(170, 13, 3);
        glTranslatef(1.0,-0.05,0.0);
        glBegin(GL_POLYGON);

            glVertex3f(getX(20), getY(-330), 0.0f);
            glVertex3f(getX(-20), getY(-330), 0.0f);


            glVertex3f(getX(-20), getY(-310), 0.0f);
            glVertex3f(getX(20), getY(-310), 0.0f);
        glEnd();
        glPopMatrix();
    //}
    ///finished  brick10

}

void drawSun()
{


    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glutSolidSphere(1, 50, 16);
    glPopMatrix();
}
void drawCloud()
{


    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55, 0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55, -0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25, 0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25, -0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.75, 0.0, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();
}

void drawCloudTree()
{
    glColor3f(0.420, 0.557, 0.137);

    glPushMatrix();
    glTranslatef(0.0, 0.05, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35, -0.45, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.35, -0.45, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.50, -0.95, 0.0);
    glutSolidSphere(0.55, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.50, -0.95, 0.0);
    glutSolidSphere(0.55, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -0.75, 0.0);
    glutSolidSphere(0.55, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -1.7, 0.0);
    glColor3f(0.7, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.2, -0.8);
    glVertex2f(0.2, -0.8);
    glVertex2f(0.2, 0.8);
    glEnd();
    glPopMatrix();
}
#endif
