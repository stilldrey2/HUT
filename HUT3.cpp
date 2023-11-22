#ifdef APPLE_CC
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3.0f);

    
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0); glVertex2f(-0.5, 0);
    glColor3f(0, 1, 0); glVertex2f(0.5, 0);
    glColor3f(0, 0, 1); glVertex2f(0, 0.5);
    glEnd();

    
    glBegin(GL_POLYGON);
    glColor3f(0, 1, 0); glVertex2f(-0.3, 0);
    glColor3f(1, 0, 0); glVertex2f(0.3, 0);
    glColor3f(0, 0, 1); glVertex2f(0.3, -0.5);
    glColor3f(1, 0, 1); glVertex2f(-0.3, -0.5);
    glEnd();

    
    glBegin(GL_LINES);
    glColor3f(1, 0, 0); glVertex2f(-0.35, 0);
    glColor3f(1, 0, 0); glVertex2f(-0.35, -0.55);
    glEnd();

    
    glBegin(GL_LINES);
    glColor3f(0, 1, 0); glVertex2f(-0.35, -0.55);
    glColor3f(0, 1, 0); glVertex2f(0.35, -0.55);
    glEnd();

    
    glBegin(GL_LINES);
    glLineWidth(29);
    glColor3f(0, 0, 1); glVertex2f(0.35, 0);
    glColor3f(0, 0, 1); glVertex2f(0.35, -0.55);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(80, 80);
    glutInitWindowSize(400, 300);
    glutCreateWindow("Hut");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(1, 1, 0);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
