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
bool surface=true;
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


void update(int value) { //////////////////////////////////////////////fly

    if(position >1.0f) ////if(position <1){position = -0.9f; position -=speed;}
        position = 1.0f;

    position -= speed;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}

void update1(int value1) {///////////////////////////////////////////////// space

    if(space==false)
    {if(position1 >1.0)
        position1 = 1.0f;

    position1 -= speed1;}


glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}

void update2(int value2) {////////////////////////////////////////////////////////landing

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

   GLfloat pbg=0.24f; GLfloat qbg=0.25f; GLfloat rbg=-0.077f;///////////////glass background

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

/////////////////////////////////////////////////////ROCKET LAUNCHER BASE
glPushMatrix();

   glBegin(GL_POLYGON);
   glColor3ub(187,188,192);
   glVertex2f(-0.6f,-0.8f);
   glVertex2f(-0.6f,-1.0f);
   glVertex2f(0.6f,-1.0f);
   glVertex2f(0.6f,-0.8f);
   glEnd();

glPopMatrix();

//////////////////////////////////////////////////LAUNCH PAD ROCKET HOLDER

   glPushMatrix();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.6f); //A
   glVertex2f(-0.3f,0.4f); //B
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.4f); //B
   glVertex2f(-0.1f,0.4f); //H
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.4f); //H
   glVertex2f(-0.2f,0.5f); //T
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.4f); //H
   glVertex2f(-0.1f,0.6f); //A
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.4f); //B
   glVertex2f(-0.3f,-0.8f); //U
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.4f); //H
   glVertex2f(-0.1f,-0.8f); //G
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.2f); //I
   glVertex2f(-0.1f,0.2f); //J
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.0f); //K
   glVertex2f(-0.1f,0.0f); //L
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,-0.2f); //M
   glVertex2f(-0.1f,-0.2f); //N
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.4f); //D
   glVertex2f(-0.1f,-0.4f); //P
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.6f); //E
   glVertex2f(-0.1f,-0.6f); //Q
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.8f); //F
   glVertex2f(-0.1f,-0.8f); //G
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.8f); //F
   glVertex2f(-0.5f,-0.4f); //D
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,-0.2f); //M
   glVertex2f(-0.5f,-0.4f); //D
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.8f); //F
   glVertex2f(-0.1f,-0.4f); //P
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.6f); //E
   glVertex2f(-0.1f,-0.2f); //N
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.5f,-0.6f); //E
   glVertex2f(-0.3f,-0.8f); //U
   glEnd();


   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,-0.8f); //G
   glVertex2f(-0.5f,-0.4f); //D
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.4f,-0.3f); //C
   glVertex2f(-0.1f,-0.6f); //Q
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,-0.2f); //M
   glVertex2f(-0.1f,-0.4f); //P
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,-0.8f); //U
   glVertex2f(-0.1f,-0.6f); //Q
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.4f); //B
   glVertex2f(-0.1f,0.2f); //J
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.4f); //H
   glVertex2f(-0.3f,0.2f); //I
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.0f); //L
   glVertex2f(-0.3f,0.2f); //I
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.0f); //K
   glVertex2f(-0.1f,0.2f); //J
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,0.0f); //K
    glVertex2f(-0.1f,-0.2f); //N
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(187,188,192);
   glVertex2f(-0.3f,-0.2f); //M
   glVertex2f(-0.1f,0.0f); //L
   glEnd();
   glPopMatrix();
///////////////////////////////////////////////////////////////////////////************* smoke

   if(smoke==false)
   {
       glPushMatrix();

       glBegin(GL_QUADS); /////////////////////////smoke box
   glColor3ub(240,240,240);
   glVertex2f(0.05f,-0.8f);
   glVertex2f(0.05f,-1.0f);
   glVertex2f(0.44f,-1.0f);
   glVertex2f(0.44f,-0.8f);
   glEnd();

   GLfloat p3=0.55f; GLfloat q3=-0.9f; GLfloat r3=-0.15f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(240,240,240);
   glVertex2f(p3,q3);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  p3+(r3*cos(i*tp1/triangle1)), q3+(r3*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   GLfloat p4=-0.06f; GLfloat q4=-0.9f; GLfloat r4=-0.15f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(240,240,240);
   glVertex2f(p4,q4);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  p4+(r4*cos(i*tp1/triangle1)), q4+(r4*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   GLfloat p5=-0.2f; GLfloat q5=-0.75f; GLfloat r5=-0.15f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(240,240,240);
   glVertex2f(p5,q5);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  p5+(r5*cos(i*tp1/triangle1)), q5+(r5*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   GLfloat p6=-0.3f; GLfloat q6=-0.9f; GLfloat r6=-0.15f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(240,240,240);
   glVertex2f(p6,q6);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  p6+(r6*cos(i*tp1/triangle1)), q6+(r6*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   GLfloat p51=0.69f; GLfloat q51=-0.75f; GLfloat r51=-0.15f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(240,240,240);
   glVertex2f(p51,q51);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  p51+(r51*cos(i*tp1/triangle1)), q51+(r51*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   GLfloat p61=0.79f; GLfloat q61=-0.9f; GLfloat r61=-0.15f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(240,240,240);
   glVertex2f(p61,q61);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  p61+(r61*cos(i*tp1/triangle1)), q61+(r61*sin(i*tp1/triangle1))
                  );
   }
   glEnd();
glPopMatrix();

/////////////////////////////////////////////////////////////////////////////////////////***************fire
glPushMatrix();
   glTranslatef(0,-position, 0.0f);

   glBegin(GL_TRIANGLES);//////////////////////////////////////////left fire
   glColor3ub(240,192,11);
   glVertex2f(0.04f, -0.79f);
   glVertex2f(0.075f, -0.95f);
   glVertex2f(0.11f, -0.79f);
   glEnd();

   glBegin(GL_TRIANGLES);//////////////////////////////////////////center fire
   glColor3ub(240,192,11);
   glVertex2f(0.205f, -0.79f);
   glVertex2f(0.24f, -0.95f);
   glVertex2f(0.275f, -0.79f);
   glEnd();

   glBegin(GL_TRIANGLES);//////////////////////////////////////////right fire
   glColor3ub(240,192,11);
   glVertex2f(0.37f, -0.79f);
   glVertex2f(0.405f, -0.95f);
   glVertex2f(0.44f, -0.79f);
   glEnd();
   glPopMatrix();

   }

   glPushMatrix();

   glBegin(GL_QUADS); /////////////////////////ROCKET HOLDER UP
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,0.22f);
   glVertex2f(-0.1f,0.12f);
   glVertex2f(0.25f,0.12f);
   glVertex2f(0.25f,0.22f);
   glEnd();

   glBegin(GL_QUADS); /////////////////////////ROCKET HOLDER DOWN
   glColor3ub(187,188,192);
   glVertex2f(-0.1f,-0.08f);
   glVertex2f(-0.1f,-0.18f);
   glVertex2f(0.25f,-0.18f);
   glVertex2f(0.25f,-0.08f);
   glEnd();


   glPopMatrix();
	////////////////////////////////////////////////////////////////////////////////////////////outer space design


   if(space== false)
   {

    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glPushMatrix();

    //////////////////////////////////////////////////////////////////////earth
    GLfloat pe=0.8f; GLfloat qe=-0.67f; GLfloat re=-0.55f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(0,33,85);
   glVertex2f(pe,qe);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  pe+(re*cos(i*tp1/triangle1)), qe+(re*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   /////////////////////////////////////////////////////////////////////////mars
   GLfloat pm=-0.98f; GLfloat qm=0.7f; GLfloat rm=-0.05f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(254, 252, 215);
   glVertex2f(pm,qm);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  pm+(rm*cos(i*tp1/triangle1)), qm+(rm*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   /////////////////////////////////////////////////////////////////////////mars spot 1
   GLfloat pms1=-0.98f; GLfloat qms1=0.68f; GLfloat rms1=-0.01f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(202, 202, 202);
   glVertex2f(pms1,qms1);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  pms1+(rms1*cos(i*tp1/triangle1)), qms1+(rms1*sin(i*tp1/triangle1))
                  );
   }
   glEnd();

   /////////////////////////////////////////////////////////////////////////mars spot 2
   GLfloat pms2=-0.96f; GLfloat qms2=0.72f; GLfloat rms2=-0.01f;

   glBegin(GL_TRIANGLE_FAN);
   glColor3ub(202, 202, 202);
   glVertex2f(pms2,qms2);
   for(i=0; i<=triangle1;i++)
   {
       glVertex2f(
                  pms2+(rms2*cos(i*tp1/triangle1)), qms2+(rms2*sin(i*tp1/triangle1))
                  );
   }
   glEnd();


   glBegin(GL_POLYGON);//////////////////////////////////////////////earth body Australia
   glColor3ub(79,148,1);

   glVertex2f(0.45f,-0.53f);//a
   glVertex2f(0.4f,-0.6f);//b
   glVertex2f(0.38f,-0.6f);//c
   glVertex2f(0.32f,-0.68f);//d
   glVertex2f(0.32,-0.68f);//e
   glVertex2f(0.3f,-0.78f);//f
   glVertex2f(0.3f,-0.8f);//g
   glVertex2f(0.32f,-0.81f);//h
   glVertex2f(0.35f,-0.88f);//i
   glVertex2f(0.45f,-0.9f);//j
   glVertex2f(0.5f,-0.88f);//k
   glVertex2f(0.52f,-0.9f);//l
   glVertex2f(0.56,-0.91f);//m
   glVertex2f(0.57f,-0.94f);//n
   glVertex2f(0.56f,-0.96f);//o
   glVertex2f(0.58f,-1.0f);//p
   glVertex2f(0.92f,-1.0f);//q
   glVertex2f(0.96f,-0.95f);//r
   glVertex2f(1.0f,-0.95f);//s
   glVertex2f(1.0f,-0.83f);//t
   glVertex2f(0.96,-0.84f);//u
   glVertex2f(0.82f,-0.65f);//v
   glVertex2f(0.8f,-0.59f);//w
   glVertex2f(0.65f,-0.61f);//x
   glVertex2f(0.63f,-0.6f);//y
   glVertex2f(0.58f,-0.54f);//z
   glVertex2f(0.5f,-0.5f);//aa
   glVertex2f(0.47f,-0.54f);//bb

   glEnd();

   glBegin(GL_POLYGON);//////////////////////////////////////////////earth body Australia
   glColor3ub(79,148,1);

   glVertex2f(0.92f,-0.2f);//a
   glVertex2f(0.89f,-0.14f);//b
   glVertex2f(0.9f,-0.2f);//c
   glVertex2f(0.82f,-0.22f);//d
   glVertex2f(0.76,-0.19f);//e
   glVertex2f(0.69f,-0.21f);//f
   glVertex2f(0.75f,-0.24f);//g
   glVertex2f(0.71f,-0.42f);//h
   glVertex2f(0.67f,-0.34f);//i
   glVertex2f(0.63f,-0.32f);//j
   glVertex2f(0.6f,-0.33f);//k
   glVertex2f(0.61f,-0.37f);//l
   glVertex2f(0.71,-0.45f);//m
   glVertex2f(0.8f,-0.53f);//n
   glVertex2f(0.83f,-0.53f);//o
   glVertex2f(0.81f,-0.61f);//p
   glVertex2f(0.95f,-0.8f);//q
   glVertex2f(1.0f,-0.79f);//r
   glVertex2f(1.0f,-0.25f);//s

   glEnd();
   glPopMatrix();

////////////////////////////////////////**************************Rocket scaling, translated, rotated***************
   glPushMatrix();

   glTranslatef(position1,-position1, 0.0f);
   glTranslated(0.4,-0.7,0.0);
   glRotated(90,15,15,15);

   glScaled(s,s,s);


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

   glBegin(GL_QUADS); /////////////////HEAD Lower Body QUAD
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

   /////////////////////////////////////////////////////////////////////////////////////////fire



   glBegin(GL_TRIANGLES);//////////////////////////////////////////left fire
   glColor3ub(240,192,11);
   glVertex2f(0.04f, -0.79f);
   glVertex2f(0.075f, -0.95f);
   glVertex2f(0.11f, -0.79f);
   glEnd();

   glBegin(GL_TRIANGLES);//////////////////////////////////////////center fire
   glColor3ub(240,192,11);
   glVertex2f(0.205f, -0.79f);
   glVertex2f(0.24f, -0.95f);
   glVertex2f(0.275f, -0.79f);
   glEnd();

   glBegin(GL_TRIANGLES);//////////////////////////////////////////right fire
   glColor3ub(240,192,11);
   glVertex2f(0.37f, -0.79f);
   glVertex2f(0.405f, -0.95f);
   glVertex2f(0.44f, -0.79f);
   glEnd();

   glPopMatrix();
   }




   if(land==false)
   {
       glClearColor(0.0f,0.0f,0.0f,1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

   glPushMatrix();





   }

 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(80,80,80); // night sky

	glVertex2f(-1.0f, -0.3f);    // x, y
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 1.f);    // x, y
	glVertex2f(-1.f, 1.5f);

	glEnd();


	//shadow 1
	glBegin(GL_POLYGON);
	glColor3ub(224,224,224);
    glVertex2f(-1.0f, -0.58f);
    glVertex2f(-0.9f, -0.58f);
    glVertex2f(-0.8f, -0.57f);
    glVertex2f(-0.72f, -0.55f);
    glVertex2f(-0.70f, -0.54f);
    glVertex2f(-0.60f, -0.53f);
    glVertex2f(-0.40f, -0.58f);
    glVertex2f(-0.35f, -0.60f);
    glVertex2f(-0.0f, -0.61f);
    glVertex2f(0.1f, -0.58f);
    glVertex2f(0.35f, -0.58f);
    glVertex2f(0.1f, -0.59f);
    glVertex2f(0.0f, -0.61f);
    glVertex2f(-0.2f, -0.62f);
   glVertex2f(-1.0f, -0.60f);


	glEnd();




	//shadow 2
	glBegin(GL_POLYGON);
	glColor3ub(192,192,192);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.90f, -0.62f);
    glVertex2f(0.70f, -0.63f);
    glVertex2f(0.50f, -0.63f);
    glVertex2f(0.40f, -0.65f);
    glVertex2f(0.20f, -0.69f);
    glVertex2f(0.50f, -0.68f);
    glVertex2f(0.70f, -0.67f);
    glVertex2f(0.80f, -0.66f);
    glVertex2f(1.0f, -0.69f);

	glEnd();


glFlush();


}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Project");
glutInitWindowPosition(50, 50);
glutInitWindowSize(1920,1080);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
