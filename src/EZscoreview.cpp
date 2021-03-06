#include "../include/EZscoreview.hpp"

EzScoreView::EzScoreView(QGraphicsScene* sc):QGraphicsView(sc){
	setRenderHints(QPainter::Antialiasing);
	setRenderHints(QPainter::SmoothPixmapTransform);
}
EzScoreView::~EzScoreView(){}

void EzScoreView::resizeEvent(QResizeEvent *event)
{
	fitInView(scene()->sceneRect(), Qt::KeepAspectRatio);
    QGraphicsView::resizeEvent(event);
}
