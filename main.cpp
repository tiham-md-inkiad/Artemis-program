#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.141516

using namespace std;

bool smoke=true;
bool space=true;
bool land=true;
bool fire=true;
bool fireoff=true;
bool door=true;
bool road=true;
bool mover=true;
bool house1=true;
bool house2=true;
bool tree=true;
bool water=true;
bool night=true;

int i;
int triangle1=40;
   GLfloat tp1=2.0f*PI;


GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed = 0.0f;
GLfloat speed1 = 0.018f;
GLfloat speed2 = 0.03f;
GLfloat speed3 = 0.0f;


GLfloat s=0.5;


void update(int value) { ////////////////////////////////////////////////////////////////////////fly

    if(position >1.0f) ////if(position <1){position = -0.9f; position -=speed;}
        position = 1.0f;

    position -= speed;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}

void update1(int value1) {/////////////////////////////////////////////////////////////////////// space

    if(space==false)
    {if(position1 >1.0)
        position1 = 1.0f;

    position1 -= speed1;}


glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}

void update2(int value2) {//////////////////////////////////////////////////////////////////////landing

    if(land==false){
    if(position2 <-1.3)
        position2 = -1.3f;

    position2 -= speed2;}

glutPostRedisplay();
glutTimerFunc(100, update2, 0);
}

void update3(int value3)
{
  if(space==false){
   s-=0.013f;}

glutPostRedisplay();
glutTimerFunc(100, update3, 0);
}

void update4(int value4) {/////////////////////////////////////////////////////////////////////// space

    if(mover==false)
    {if(position3 <-1.5)
        position3 = -1.5f;

    position3 -= speed3;}


glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


glBegin(GL_QUADS);
glColor3ub(61,231,131);
glVertex2f(-1.0f, -0.15f);
glVertex2f(1.0f, -0.15f);
glVertex2f(1.0f, -0.62f);
glVertex2f(-1.0f, -0.62f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(61,231,131);
glVertex2f(-1.0f, -0.15f);
glVertex2f(1.0f, -0.15f);
glVertex2f(1.0f, 0.15f);
glVertex2f(-1.0f, 0.15f);
glEnd();







glBegin(GL_QUADS);
glColor3ub(61,231,131);
glVertex2f(-1.0f, -0.62f);
glVertex2f(1.0f, -0.62f);
glVertex2f(1.0f, -1.0f);
glVertex2f(-1.0f, -1.0f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(61,231,131);
glVertex2f(-1.0f, 0.15f);
glVertex2f(1.0f, 0.15f);
glVertex2f(1.0f, 0.5f);
glVertex2f(-1.0f, 0.5f);
glEnd();

glBegin(GL_QUADS); //SKY
glColor3ub(67,162,255);
glVertex2f(-1.0f, 0.5f);
glVertex2f(1.0f, 0.5f);
glVertex2f(1.0f, 1.0f);
glVertex2f(-1.0f, 1.0f);
glEnd();

///Sun
    glPushMatrix();

   GLfloat p1=0.45f; GLfloat q1= 0.75f; GLfloat r1 = 0.10f;
    int tringle2=40;
    GLfloat tp2 =4.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p1,q1);
    for(int i= 0;  i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );

    }
    glEnd ();
///sun
///------------------------cloud


//glLoadIdentity();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

	GLfloat p7=0.2f; GLfloat q7= 0.83f; GLfloat r7 = 0.05f;
    int tringle7=40;
    GLfloat tp7 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p7,q7);
    for(int b= 0;b<=tringle7; b++)
    {
        glVertex2f (
                    p7+(r7*cos(b*tp7/tringle7)),
                    q7+(r7*sin(b*tp7/tringle7))
                    );

    }
    glEnd ();



  GLfloat p8=0.27f; GLfloat q8= 0.85f; GLfloat r8 = 0.05f;
    int tringle8=40;
    GLfloat tp8 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p8,q8);
    for(int c= 0;c<=tringle8; c++)
    {
        glVertex2f (
                    p8+(r8*cos(c*tp8/tringle8)),
                    q8+(r8*sin(c*tp8/tringle8))
                    );

    }
    glEnd ();


     GLfloat p9=0.15f; GLfloat q9= 0.85f; GLfloat r9 = 0.05f;
    int tringle9=40;
    GLfloat tp9 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p9,q9);
    for(int c= 0;c<=tringle9; c++)
    {
        glVertex2f (
                    p9+(r9*cos(c*tp9/tringle9)),
                    q9+(r9*sin(c*tp9/tringle9))
                    );

    }
    glEnd ();

     GLfloat p10=0.22f; GLfloat q10= 0.87f; GLfloat r10 = 0.05f;
    int tringle10=40;
    GLfloat tp10 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p10,q10);
    for(int c= 0;c<=tringle10; c++)
    {
        glVertex2f (
                    p10+(r10*cos(c*tp10/tringle10)),
                    q10+(r10*sin(c*tp10/tringle10))
                    );

    }
    glEnd ();
    glPopMatrix();



///-------------------------end cloud


glBegin(GL_POLYGON); ///hill 01
    glColor3f(0.0f,0.2f,0.0f);

    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.65f);


    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.97f, 0.68f);

    glVertex2f(-0.97f, 0.68f);
    glVertex2f(-0.95f, 0.66f);

    glVertex2f(-0.95f, 0.66f);
    glVertex2f(-0.9f, 0.75f);

    glVertex2f(-0.9f, 0.75f);
    glVertex2f(-0.87f, 0.73f);

    glVertex2f(-0.87f, 0.73f);
    glVertex2f(-0.84f, 0.66f);

    glVertex2f(-0.84f, 0.66f);
    glVertex2f(-0.8f, 0.7f);

    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.78f, 0.68f);

    glVertex2f(-0.78f, 0.68f);
    glVertex2f(-0.73f, 0.73f);

    glVertex2f(-0.73f, 0.73f);
    glVertex2f(-0.68f, 0.64f);

    glVertex2f(-0.68f, 0.64f);
    glVertex2f(-0.65f, 0.67f);

    glVertex2f(-0.65f, 0.67f);
    glVertex2f(-0.58f, 0.58f);

    glVertex2f(-0.58f, 0.58f);
    glVertex2f(-0.55f, 0.6f);

    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.5f, 0.5f);



    glEnd();


    glBegin(GL_POLYGON); ///hill 03

    glColor3f(0.0f,0.2f,0.0f);


    glVertex2f(-0.22f, 0.5f);
    glVertex2f(-0.18f, 0.65f);


    glVertex2f(-0.18f, 0.65f);
    glVertex2f(-0.15f, 0.68f);

    glVertex2f(-0.15f, 0.68f);
    glVertex2f(-0.13f, 0.66f);

    glVertex2f(-0.13f, 0.66f);
    glVertex2f(-0.08f, 0.75f);

    glVertex2f(-0.08f, 0.75f);
    glVertex2f(-0.05f, 0.73f);

    glVertex2f(-0.05f, 0.73f);
    glVertex2f(-0.02f, 0.66f);

    glVertex2f(-0.02f, 0.66f);
    glVertex2f(0.02f, 0.7f);

    glVertex2f(0.02f, 0.7f);
    glVertex2f(0.04f, 0.68f);

    glVertex2f(0.04f, 0.68f);
    glVertex2f(0.09f, 0.73f);

    glVertex2f(0.09f, 0.73f);
    glVertex2f(0.14f, 0.64f);

    glVertex2f(0.14f, 0.64f);
    glVertex2f(0.17f, 0.67f);

    glVertex2f(0.17f, 0.67f);
    glVertex2f(0.24f, 0.58f);

    glVertex2f(0.24f, 0.58f);
    glVertex2f(0.27f, 0.6f);

    glVertex2f(0.27f, 0.6f);
    glVertex2f(0.32f, 0.5f);



    glEnd();

    glBegin(GL_POLYGON); ///hill 02
    glColor3f(0.0f,0.4f,0.0f);


    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.63f, 0.55f);

    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.61f, 0.53f);

    glVertex2f(-0.61f, 0.53f);
    glVertex2f(-0.55f, 0.65f);

    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.52f, 0.63f);

    glVertex2f(-0.52f, 0.63f);
    glVertex2f(-0.5f, 0.68f);

    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-0.47f, 0.66f);

    glVertex2f(-0.47f, 0.66f);
    glVertex2f(-0.44f, 0.73f);

    glVertex2f(-0.44f, 0.73f);
    glVertex2f(-0.4f, 0.7f);

    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.35f, 0.62f);

    glVertex2f(-0.35f, 0.62f);
    glVertex2f(-0.3f, 0.66f);

    glVertex2f(-0.3f, 0.66f);
    glVertex2f(-0.28f, 0.63f);

    glVertex2f(-0.28f, 0.63f);
    glVertex2f(-0.24f, 0.69f);

    glVertex2f(-0.24f, 0.69f);
    glVertex2f(-0.18f, 0.58f);

    glVertex2f(-0.18f, 0.58f);
    glVertex2f(-0.15f, 0.6f);

    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.11f, 0.55f);

    glVertex2f(-0.11f, 0.55f);
    glVertex2f(-0.1f, 0.5f);

    glEnd();

    glBegin(GL_POLYGON); ///hill 05
    glColor3f(0.0f,0.4f,0.0f);


    glVertex2f(0.65f, 0.5f);
    glVertex2f(0.63f, 0.55f);

    glVertex2f(0.63f, 0.55f);
    glVertex2f(0.61f, 0.53f);

    glVertex2f(0.61f, 0.53f);
    glVertex2f(0.55f, 0.65f);

    glVertex2f(0.55f, 0.65f);
    glVertex2f(0.52f, 0.63f);

    glVertex2f(0.52f, 0.63f);
    glVertex2f(0.5f, 0.68f);

    glVertex2f(0.5f, 0.68f);
    glVertex2f(0.47f, 0.66f);

    glVertex2f(0.47f, 0.66f);
    glVertex2f(0.44f, 0.73f);

    glVertex2f(0.44f, 0.73f);
    glVertex2f(0.4f, 0.7f);

    glVertex2f(0.4f, 0.7f);
    glVertex2f(0.35f, 0.62f);

    glVertex2f(0.35f, 0.62f);
    glVertex2f(0.3f, 0.66f);

    glVertex2f(0.3f, 0.66f);
    glVertex2f(0.28f, 0.63f);

    glVertex2f(0.28f, 0.63f);
    glVertex2f(0.24f, 0.69f);

    glVertex2f(0.24f, 0.69f);
    glVertex2f(0.18f, 0.58f);

    glVertex2f(0.18f, 0.58f);
    glVertex2f(0.15f, 0.6f);

    glVertex2f(0.15f, 0.6f);
    glVertex2f(0.11f, 0.55f);

    glVertex2f(0.11f, 0.55f);
    glVertex2f(0.1f, 0.5f);

    glEnd();

    glBegin(GL_POLYGON); ///hill 04
    glColor3f(0.0f,0.2f,0.0f);

    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 0.65f);


    glVertex2f(1.0f, 0.65f);
    glVertex2f(0.97f, 0.68f);

    glVertex2f(0.97f, 0.68f);
    glVertex2f(0.95f, 0.66f);

    glVertex2f(0.95f, 0.66f);
    glVertex2f(0.9f, 0.75f);

    glVertex2f(0.9f, 0.75f);
    glVertex2f(0.87f, 0.73f);

    glVertex2f(0.87f, 0.73f);
    glVertex2f(0.84f, 0.66f);

    glVertex2f(0.84f, 0.66f);
    glVertex2f(0.8f, 0.7f);

    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.78f, 0.68f);

    glVertex2f(0.78f, 0.68f);
    glVertex2f(0.73f, 0.73f);

    glVertex2f(0.73f, 0.73f);
    glVertex2f(0.68f, 0.64f);

    glVertex2f(0.68f, 0.64f);
    glVertex2f(0.65f, 0.67f);

    glVertex2f(0.65f, 0.67f);
    glVertex2f(0.58f, 0.58f);

    glVertex2f(0.58f, 0.58f);
    glVertex2f(0.55f, 0.6f);

    glVertex2f(0.55f, 0.6f);
    glVertex2f(0.5f, 0.5f);

    glEnd();
    //house-3
glBegin(GL_QUADS);

   glColor3ub(255,228,181);

    glVertex2f(-0.44f, 0.81f);
    glVertex2f(-0.44f, 0.28f);
    glVertex2f(-0.28f, 0.28f);
    glVertex2f(-0.28f, 0.81f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(255,228,181);

    glVertex2f(-0.41f, 0.83f);
    glVertex2f(-0.41f, 0.80f);
    glVertex2f(-0.38f, 0.80f);
    glVertex2f(-0.38f, 0.83f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,99,71);

    glVertex2f(-0.44f, 0.81f);
    glVertex2f(-0.44f, 0.80f);
    glVertex2f(-0.28f, 0.80f);
    glVertex2f(-0.28f, 0.81f);
    glEnd();


  //////////////////////////////////////////////////////////rocket
glPushMatrix();

   glTranslatef(0,-position, 0.0f);

   glBegin(GL_TRIANGLES); //////////////HEAD
   glColor3ub(238,28,37);

   glVertex2f(0.24f,0.6f);//a
   glVertex2f(0.14f, 0.42f);//b
   glVertex2f(0.34f, 0.42f);//c
   glEnd();

   glBegin(GL_POLYGON);/////////////////HEAD  Lower Body
   glColor3ub(230,230,230);
   glVertex2f(0.14f, 0.42f);//b
   glVertex2f(0.14f, 0.08f);//d
   glVertex2f(0.15f, 0.06f);//E
   glVertex2f(0.33f, 0.06f);//f
   glVertex2f(0.34f, 0.08f);//g
   glVertex2f(0.34f, 0.42f);//c
   glEnd();

   GLfloat pbg=0.24f; GLfloat qbg=0.25f; GLfloat rbg=-0.077f;////////////////////glass background

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(130,130,130);
   glVertex2f(pbg,qbg);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  pbg+(rbg*cos(i*tp1/triangle1)), qbg+(rbg*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   GLfloat pg=0.24f; GLfloat qg=0.25f; GLfloat rg=-0.07f;////////////////////glass

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(35,172,196);
   glVertex2f(pg,qg);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  pg+(rg*cos(i*tp1/triangle1)), qg+(rg*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   glBegin(GL_QUADS); /////////////////HEAD Lower Body shadow
   glColor3ub(187,188,192);
   glVertex2f(0.33f, 0.42f);//N'
   glVertex2f(0.33f, 0.06f);//f
   glVertex2f(0.34f, 0.08f);//g
   glVertex2f(0.34f, 0.42f);//c
   glEnd();

   glBegin(GL_QUADS); /////////////////Middle small QUAD
   glColor3ub(187,188,192);
   glVertex2f(0.15f, 0.06f);//E
   glVertex2f(0.15f, 0.01f);//H
   glVertex2f(0.33f, 0.01f);//I
   glVertex2f(0.33f, 0.06f);//f
   glEnd();

   glBegin(GL_POLYGON); ///////////////// UNDER BODY QUAD
   glColor3ub(230,230,230);
   glVertex2f(0.15f, 0.01f);//H
   glVertex2f(0.14f, -0.01f);//K
   glVertex2f(0.14f, -0.74f);//L
   glVertex2f(0.34f, -0.74f);//M
   glVertex2f(0.34f, -0.01f);//J
   glVertex2f(0.33f, 0.01f);//I
   glEnd();

   glBegin(GL_QUADS); /////////////////UNDER BODY QUAD shadow
   glColor3ub(187,188,192);
   glVertex2f(0.33f, -0.74f);//N
   glVertex2f(0.34f, -0.74f);//M
   glVertex2f(0.34f, -0.01f);//J
   glVertex2f(0.33f, 0.01f);//I
   glEnd();


   glBegin(GL_POLYGON); ///////////////// LEFT WING
   glColor3ub(230,230,230);


   glVertex2f(0.1f, -0.25f);//P
   glVertex2f(0.05f, -0.25f);//Q
   glVertex2f(0.01f, -0.74f);//R
   glVertex2f(0.14f, -0.74f);//L
   glVertex2f(0.14f, -0.23f);//O


   glEnd();

   glBegin(GL_QUADS); /////////////////lEFT WING shadow
   glColor3ub(187,188,192);
   glVertex2f(0.1f, -0.25f);//P
   glVertex2f(0.06f, -0.74f);//S
   glVertex2f(0.14f, -0.74f);//L
   glVertex2f(0.14f, -0.23f);//O
   glEnd();


   ///////////////////////////////////////////RIGHT WING
   glBegin(GL_POLYGON);
   glColor3ub(230,230,230);


   glVertex2f(0.34f, -0.74f);//M
   glVertex2f(0.47f, -0.74f);//W
   glVertex2f(0.43f, -0.25f);//V
   glVertex2f(0.38f, -0.25f);//U
   glVertex2f(0.34f, -0.23f);//T

   glEnd();

   glBegin(GL_QUADS); /////////////////RIGHT WING shadow
   glColor3ub(187,188,192);
   glVertex2f(0.38f, -0.25f);//U
   glVertex2f(0.43f, -0.74f);//S'
   glVertex2f(0.47f, -0.74f);//W
   glVertex2f(0.43f, -0.25f);//V
   glEnd();

   glBegin(GL_QUADS); /////////////////LEFT fIRE EXIT
   glColor3ub(96,96,96);
   glVertex2f(0.05f, -0.74f);
   glVertex2f(0.04f, -0.79f);
   glVertex2f(0.11f, -0.79f);
   glVertex2f(0.1f, -0.74f);
   glEnd();

   glBegin(GL_QUADS); /////////////////CENTER fIRE EXIT
   glColor3ub(96,96,96);
   glVertex2f(0.215f, -0.74f);
   glVertex2f(0.205f, -0.79f);
   glVertex2f(0.275f, -0.79f);
   glVertex2f(0.265f, -0.74f);
   glEnd();

   glBegin(GL_QUADS); /////////////////RIGHT fIRE EXIT
   glColor3ub(96,96,96);
   glVertex2f(0.38f, -0.74f);
   glVertex2f(0.37f, -0.79f);
   glVertex2f(0.44f, -0.79f);
   glVertex2f(0.43f, -0.74f);
   glEnd();
glPopMatrix();

////////////////////////////////////////////////////////////////ROCKET LAUNCHER BASE
glPushMatrix();

   glBegin(GL_POLYGON);
   glColor3ub(187,188,192);
   glVertex2f(-0.6f,-0.8f);
   glVertex2f(-0.6f,-1.0f);
   glVertex2f(0.6f,-1.0f);
   glVertex2f(0.6f,-0.8f);
   glEnd();

glPopMatrix();

glFlush();

}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Project");
glutInitWindowSize(1920,1080);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
