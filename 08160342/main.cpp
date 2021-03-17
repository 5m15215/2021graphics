#include <GL/glut.h> ///使用 GLUT外掛
int N=0,vx[3000],vy[3000];
void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
            glVertex2f((vx[i]-150)/150.0,-(vy[i]-150)/150.0);
    }
    glEnd();

    glutSwapBuffers();///更新畫面
}
void motion( int x,int y)
{
    vx[N]=x; vy[N]=y;
    N++;
    display();
}
int main(int argc, char **argv) ///main()函式
{
    glutInit(&argc, argv);///(1)Inet初始化GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160342 WEEEEE");///(3)建立GLUT視窗
    glutDisplayFunc(display);///(4)準備 display()函式

    glutMotionFunc(motion);
    glutMainLoop();///(5)主要函式

}
