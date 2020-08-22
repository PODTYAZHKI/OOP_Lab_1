#include "paper.h"
#include <iostream>


#define MIN_PAPER_SIZE 1.
#define MAX_PAPER_SIZE 10000.
#define MIN_T 0.05
#define MAX_T 3.
#define MIN_XY -10000.
#define MAX_XY 10000.

Paper::Paper(): Base(){
    width = 1;
    height = 1;
}

Paper::Paper(double w, double h, double t, double x, double y): Base(t, x, y){
    if (w < MIN_PAPER_SIZE || w > MAX_PAPER_SIZE){
        width = MIN_PAPER_SIZE;
    }
    else
        width = w;

    if (h < MIN_PAPER_SIZE || h > MAX_PAPER_SIZE){
        height = MIN_PAPER_SIZE;
    }
    else
        height = h;

}

Paper::Paper(const Paper *p): Base(p->getThickness(), p->getCoordinateX(), p->getCoordinateY()){
    width = p->width;
    height = p->height;
}

double Paper::getWidth() const{
    return this->width;
}

double Paper::getHeight() const{
    return this->height;
}

//double Paper::getThickness() const{
//    return this->thickness;
//}

//double Paper::getCoordinateX() const{
//    return this->coordX;
//}

//double Paper::getCoordinateY() const{
//    return this->coordY;
//}

void Paper::setWidth(double w){
    if (w < MIN_PAPER_SIZE || w > MAX_PAPER_SIZE)
        this->width = MIN_PAPER_SIZE;
    else
        this->width = w;
}

void Paper::setHeight(double h){
    if (h < MIN_PAPER_SIZE || h > MAX_PAPER_SIZE)
        this->height = MIN_PAPER_SIZE;
    else
        this->height = h;
}

//void Paper::setThickness(double t){
//    if (t < MIN_T || t > MAX_T)
//        this->thickness = MIN_T;
//    else
//        this->thickness = t;
//}

//void Paper::setCoordinateX(double x){
//    if (x < MIN_XY || x > MAX_XY)
//        this->coordX = MIN_XY;
//    else
//        this->coordX = x;
//}

//void Paper::setCoordinateY(double y){
//    if (y < MIN_XY || y > MAX_XY)
//        this->coordY = MIN_XY;
//    else
//        this->coordY = y;
//}
