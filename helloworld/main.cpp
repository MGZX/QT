#include <QApplication>
#include <QWidget>
#include <QDebug>
int main(int argc, char * argv[]){
  QApplication a(argc,argv);
  QWidget widget;
  int x = widget.x();
  int y = widget.y();
  qDebug("x: %d",x);
  qDebug("y: %d",y);
  QRect geometry = widget.geometry();
  QRect frame = widget.frameGeometry();
  qDebug() << "geometry: " << geometry << "frame: " << frame;
  qDebug() << "pos: " << widget.pos() << endl;
  widget.show();
  return a.exec();
}
