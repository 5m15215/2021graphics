#include <GL/glut.h> ///�ϥ� GLUT�~��
int N=0,vx[3000],vy[3000];
void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
            glVertex2f((vx[i]-150)/150.0,-(vy[i]-150)/150.0);
    }
    glEnd();

    glutSwapBuffers();///��s�e��
}
void motion( int x,int y)
{
    vx[N]=x; vy[N]=y;
    N++;
    display();
}
int main(int argc, char **argv) ///main()�禡
{
    glutInit(&argc, argv);///(1)Inet��l��GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160342 WEEEEE");///(3)�إ�GLUT����
    glutDisplayFunc(display);///(4)�ǳ� display()�禡

    glutMotionFunc(motion);
    glutMainLoop();///(5)�D�n�禡

}
