#ifndef WINDOW_H
#define WINDOW_H

int x = -900, y = -600;
//signed int _brickX=0;
//int w = 10, h = 10;
float getX(int x)
{
    return (float)x/(float)900;
}
float getY(int y)
{
    return (float)y/(float)600;
}
void drawWindow()
{

///draw window color
    glPushMatrix();

	glColor3ub(170, 13, 3);///firebrick color
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();

	glColor3ub(169,169,169);///gray
	glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPushMatrix();
        glColor3ub(169,169,169);///gray
	glTranslatef(0.164, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();

	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

    glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.0, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
    //glScalef(0.0,0.7,0.0);
	glTranslatef(-0.04, 0.0f, 0.0f);
	//glLineStipple(10.0);
    glBegin(GL_LINES);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-595), getY(-103), 0.0f);

        glVertex3f(getX(-747), getY(-106), 0.0f);
        glVertex3f(getX(-595), getY(-106), 0.0f);



        glVertex3f(getX(-743), getY(-309), 0.0f);
        glVertex3f(getX(-595), getY(-309), 0.0f);

        glVertex3f(getX(-747), getY(-308), 0.0f);
        glVertex3f(getX(-595), getY(-308), 0.0f);


        glVertex3f(getX(-743), getY(-250), 0.0f);
        glVertex3f(getX(-595), getY(-250), 0.0f);

        glVertex3f(getX(-747), getY(-251), 0.0f);
        glVertex3f(getX(-595), getY(-251), 0.0f);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.28, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-798), getY(-310), 0.0f);
        glVertex3f(getX(-801), getY(-310), 0.0f);

        glVertex3f(getX(-801), getY(-30), 0.0f);
        glVertex3f(getX(-798), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.29, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-800), getY(-310), 0.0f);
        glVertex3f(getX(-804), getY(-310), 0.0f);

        glVertex3f(getX(-804), getY(-30), 0.0f);
        glVertex3f(getX(-800), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glScalef(getX(-780), 0.0f, 0.0f);
	glColor3ub(170, 13, 3);///firebrick color
	//glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(getX(-780), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(20), 0.0f);
        glVertex3f(getX(-780), getY(20), 0.0f);

        glVertex3f(getX(-573), getY(10), 0.0f);
        glVertex3f(getX(-570), getY(10), 0.0f);

        glVertex3f(getX(-570), getY(-102), 0.0f);
        glVertex3f(getX(-573), getY(-102), 0.0f);




	glEnd();
	 glPushMatrix();
	glColor3ub(170, 13, 3);///firebrick color
    glTranslatef(0.3,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
///2nd window start
    glPushMatrix();

	glColor3ub(170, 13, 3);///firebrick color
	glTranslatef(0.36,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();

	glColor3ub(169,169,169);///gray
	glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPushMatrix();
        glColor3ub(169,169,169);///gray
	glTranslatef(0.164, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();

	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

    glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.0, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
    //glScalef(0.0,0.7,0.0);
	glTranslatef(-0.04, 0.0f, 0.0f);
	//glLineStipple(10.0);
    glBegin(GL_LINES);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-595), getY(-103), 0.0f);

        glVertex3f(getX(-747), getY(-106), 0.0f);
        glVertex3f(getX(-595), getY(-106), 0.0f);



        glVertex3f(getX(-743), getY(-309), 0.0f);
        glVertex3f(getX(-595), getY(-309), 0.0f);

        glVertex3f(getX(-747), getY(-308), 0.0f);
        glVertex3f(getX(-595), getY(-308), 0.0f);


        glVertex3f(getX(-743), getY(-250), 0.0f);
        glVertex3f(getX(-595), getY(-250), 0.0f);

        glVertex3f(getX(-747), getY(-251), 0.0f);
        glVertex3f(getX(-595), getY(-251), 0.0f);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.28, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-798), getY(-310), 0.0f);
        glVertex3f(getX(-801), getY(-310), 0.0f);

        glVertex3f(getX(-801), getY(-30), 0.0f);
        glVertex3f(getX(-798), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.29, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-800), getY(-310), 0.0f);
        glVertex3f(getX(-804), getY(-310), 0.0f);

        glVertex3f(getX(-804), getY(-30), 0.0f);
        glVertex3f(getX(-800), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glScalef(getX(-780), 0.0f, 0.0f);
	glColor3ub(170, 13, 3);///firebrick color
	//glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(getX(-780), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(20), 0.0f);
        glVertex3f(getX(-780), getY(20), 0.0f);

        glVertex3f(getX(-573), getY(10), 0.0f);
        glVertex3f(getX(-570), getY(10), 0.0f);

        glVertex3f(getX(-570), getY(-102), 0.0f);
        glVertex3f(getX(-573), getY(-102), 0.0f);




	glEnd();
	 glPushMatrix();
	glColor3ub(170, 13, 3);///firebrick color
    glTranslatef(0.3,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
///2nd window finished
///3rd window start
    glPushMatrix();

	glColor3ub(170, 13, 3);///firebrick color
	glTranslatef(0.72,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();

	glColor3ub(169,169,169);///gray
	glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPushMatrix();
        glColor3ub(169,169,169);///gray
	glTranslatef(0.164, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();

	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

    glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.0, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
    //glScalef(0.0,0.7,0.0);
	glTranslatef(-0.04, 0.0f, 0.0f);
	//glLineStipple(10.0);
    glBegin(GL_LINES);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-595), getY(-103), 0.0f);

        glVertex3f(getX(-747), getY(-106), 0.0f);
        glVertex3f(getX(-595), getY(-106), 0.0f);



        glVertex3f(getX(-743), getY(-309), 0.0f);
        glVertex3f(getX(-595), getY(-309), 0.0f);

        glVertex3f(getX(-747), getY(-308), 0.0f);
        glVertex3f(getX(-595), getY(-308), 0.0f);


        glVertex3f(getX(-743), getY(-250), 0.0f);
        glVertex3f(getX(-595), getY(-250), 0.0f);

        glVertex3f(getX(-747), getY(-251), 0.0f);
        glVertex3f(getX(-595), getY(-251), 0.0f);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.28, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-798), getY(-310), 0.0f);
        glVertex3f(getX(-801), getY(-310), 0.0f);

        glVertex3f(getX(-801), getY(-30), 0.0f);
        glVertex3f(getX(-798), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.29, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-800), getY(-310), 0.0f);
        glVertex3f(getX(-804), getY(-310), 0.0f);

        glVertex3f(getX(-804), getY(-30), 0.0f);
        glVertex3f(getX(-800), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glScalef(getX(-780), 0.0f, 0.0f);
	glColor3ub(170, 13, 3);///firebrick color
	//glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(getX(-780), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(20), 0.0f);
        glVertex3f(getX(-780), getY(20), 0.0f);

        glVertex3f(getX(-573), getY(10), 0.0f);
        glVertex3f(getX(-570), getY(10), 0.0f);

        glVertex3f(getX(-570), getY(-102), 0.0f);
        glVertex3f(getX(-573), getY(-102), 0.0f);




	glEnd();
	 glPushMatrix();
	glColor3ub(170, 13, 3);///firebrick color
    glTranslatef(0.3,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

///3rd window finished
///4th window start
    glPushMatrix();

	glColor3ub(170, 13, 3);///firebrick color
	glTranslatef(1.08,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();

	glColor3ub(169,169,169);///gray
	glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPushMatrix();
        glColor3ub(169,169,169);///gray
	glTranslatef(0.164, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();

	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

    glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.0, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
    //glScalef(0.0,0.7,0.0);
	glTranslatef(-0.04, 0.0f, 0.0f);
	//glLineStipple(10.0);
    glBegin(GL_LINES);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-595), getY(-103), 0.0f);

        glVertex3f(getX(-747), getY(-106), 0.0f);
        glVertex3f(getX(-595), getY(-106), 0.0f);



        glVertex3f(getX(-743), getY(-309), 0.0f);
        glVertex3f(getX(-595), getY(-309), 0.0f);

        glVertex3f(getX(-747), getY(-308), 0.0f);
        glVertex3f(getX(-595), getY(-308), 0.0f);


        glVertex3f(getX(-743), getY(-250), 0.0f);
        glVertex3f(getX(-595), getY(-250), 0.0f);

        glVertex3f(getX(-747), getY(-251), 0.0f);
        glVertex3f(getX(-595), getY(-251), 0.0f);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.28, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-798), getY(-310), 0.0f);
        glVertex3f(getX(-801), getY(-310), 0.0f);

        glVertex3f(getX(-801), getY(-30), 0.0f);
        glVertex3f(getX(-798), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.29, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-800), getY(-310), 0.0f);
        glVertex3f(getX(-804), getY(-310), 0.0f);

        glVertex3f(getX(-804), getY(-30), 0.0f);
        glVertex3f(getX(-800), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glScalef(getX(-780), 0.0f, 0.0f);
	glColor3ub(170, 13, 3);///firebrick color
	//glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(getX(-780), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(20), 0.0f);
        glVertex3f(getX(-780), getY(20), 0.0f);

        glVertex3f(getX(-573), getY(10), 0.0f);
        glVertex3f(getX(-570), getY(10), 0.0f);

        glVertex3f(getX(-570), getY(-102), 0.0f);
        glVertex3f(getX(-573), getY(-102), 0.0f);




	glEnd();
	 glPushMatrix();
	glColor3ub(170, 13, 3);///firebrick color
    glTranslatef(0.3,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

///4th window finished
///5th window start
   glPushMatrix();

	glColor3ub(170, 13, 3);///firebrick color
	glTranslatef(1.44,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();

	glColor3ub(169,169,169);///gray
	glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPushMatrix();
        glColor3ub(169,169,169);///gray
	glTranslatef(0.164, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();

	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

    glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.0, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
    //glScalef(0.0,0.7,0.0);
	glTranslatef(-0.04, 0.0f, 0.0f);
	//glLineStipple(10.0);
    glBegin(GL_LINES);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-595), getY(-103), 0.0f);

        glVertex3f(getX(-747), getY(-106), 0.0f);
        glVertex3f(getX(-595), getY(-106), 0.0f);



        glVertex3f(getX(-743), getY(-309), 0.0f);
        glVertex3f(getX(-595), getY(-309), 0.0f);

        glVertex3f(getX(-747), getY(-308), 0.0f);
        glVertex3f(getX(-595), getY(-308), 0.0f);


        glVertex3f(getX(-743), getY(-250), 0.0f);
        glVertex3f(getX(-595), getY(-250), 0.0f);

        glVertex3f(getX(-747), getY(-251), 0.0f);
        glVertex3f(getX(-595), getY(-251), 0.0f);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.28, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-798), getY(-310), 0.0f);
        glVertex3f(getX(-801), getY(-310), 0.0f);

        glVertex3f(getX(-801), getY(-30), 0.0f);
        glVertex3f(getX(-798), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.29, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-800), getY(-310), 0.0f);
        glVertex3f(getX(-804), getY(-310), 0.0f);

        glVertex3f(getX(-804), getY(-30), 0.0f);
        glVertex3f(getX(-800), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glScalef(getX(-780), 0.0f, 0.0f);
	glColor3ub(170, 13, 3);///firebrick color
	//glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(getX(-780), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(20), 0.0f);
        glVertex3f(getX(-780), getY(20), 0.0f);

        glVertex3f(getX(-573), getY(10), 0.0f);
        glVertex3f(getX(-570), getY(10), 0.0f);

        glVertex3f(getX(-570), getY(-102), 0.0f);
        glVertex3f(getX(-573), getY(-102), 0.0f);




	glEnd();
	 glPushMatrix();
	glColor3ub(170, 13, 3);///firebrick color
    glTranslatef(0.3,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

///5th window finished
///6th window start

 glPushMatrix();

	glColor3ub(170, 13, 3);///firebrick color
	glTranslatef(1.8,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();

	glColor3ub(169,169,169);///gray
	glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPushMatrix();
        glColor3ub(169,169,169);///gray
	glTranslatef(0.164, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();
	glPopMatrix();


	glPushMatrix();

	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-780), getY(-310), 0.0f);
        glVertex3f(getX(-783), getY(-310), 0.0f);

        glVertex3f(getX(-783), getY(-103), 0.0f);
        glVertex3f(getX(-780), getY(-103), 0.0f);



	glEnd();

	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.08, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

    glPushMatrix();
	glColor3ub(169,169,169);///gray
	glTranslatef(0.0, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-740), getY(-250), 0.0f);
        glVertex3f(getX(-743), getY(-250), 0.0f);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-740), getY(-103), 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
    //glScalef(0.0,0.7,0.0);
	glTranslatef(-0.04, 0.0f, 0.0f);
	//glLineStipple(10.0);
    glBegin(GL_LINES);

        glVertex3f(getX(-743), getY(-103), 0.0f);
        glVertex3f(getX(-595), getY(-103), 0.0f);

        glVertex3f(getX(-747), getY(-106), 0.0f);
        glVertex3f(getX(-595), getY(-106), 0.0f);



        glVertex3f(getX(-743), getY(-309), 0.0f);
        glVertex3f(getX(-595), getY(-309), 0.0f);

        glVertex3f(getX(-747), getY(-308), 0.0f);
        glVertex3f(getX(-595), getY(-308), 0.0f);


        glVertex3f(getX(-743), getY(-250), 0.0f);
        glVertex3f(getX(-595), getY(-250), 0.0f);

        glVertex3f(getX(-747), getY(-251), 0.0f);
        glVertex3f(getX(-595), getY(-251), 0.0f);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.28, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-798), getY(-310), 0.0f);
        glVertex3f(getX(-801), getY(-310), 0.0f);

        glVertex3f(getX(-801), getY(-30), 0.0f);
        glVertex3f(getX(-798), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor3ub(169,169,169);///gray
	glTranslatef(0.29, 0.0f, 0.0f);
    glBegin(GL_POLYGON);



        glVertex3f(getX(-800), getY(-310), 0.0f);
        glVertex3f(getX(-804), getY(-310), 0.0f);

        glVertex3f(getX(-804), getY(-30), 0.0f);
        glVertex3f(getX(-800), getY(-30), 0.0f);



	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glScalef(getX(-780), 0.0f, 0.0f);
	glColor3ub(170, 13, 3);///firebrick color
	//glTranslatef(-0.04, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(getX(-780), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(-102), 0.0f);
        glVertex3f(getX(-783), getY(20), 0.0f);
        glVertex3f(getX(-780), getY(20), 0.0f);

        glVertex3f(getX(-573), getY(10), 0.0f);
        glVertex3f(getX(-570), getY(10), 0.0f);

        glVertex3f(getX(-570), getY(-102), 0.0f);
        glVertex3f(getX(-573), getY(-102), 0.0f);




	glEnd();
	 glPushMatrix();
	glColor3ub(170, 13, 3);///firebrick color
    glTranslatef(0.3,0.0,0.0);
    glBegin(GL_POLYGON);

        glVertex3f(getX(-820), getY(-310), 0.0f);
        glVertex3f(getX(-900), getY(-310), 0.0f);

        glVertex3f(getX(-900), getY(-33), 0.0f);
        glVertex3f(getX(-820), getY(-33), 0.0f);

	glEnd();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

///6th window finished
///finished window color


}
#endif
