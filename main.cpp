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
