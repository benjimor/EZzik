#include "../include/EZkey.hpp"

EzKey::EzKey(std::string color, std::string note, int x, int y, QGraphicsScene* parent):QGraphicsRectItem(QRectF(x, y, (color=="white")?WHITE_WIDTH:BLACK_WIDTH, (color=="white")?WHITE_HEIGHT:BLACK_HEIGHT), 0, parent){
	if(color == "white"){
		setPen( QPen( QColor(60,60,60), 2, Qt::SolidLine, Qt::RoundCap, Qt::BevelJoin ) );
		setBrush( QBrush( QColor(240, 240, 240) ) );
	}else{
		setPen( QPen( QColor(40, 40, 40), 1, Qt::SolidLine, Qt::RoundCap,Qt::BevelJoin ) );
		setBrush( QBrush( QColor(20, 20, 20) ) );
	}
	_note = note;
}
EzKey::~EzKey(){}

std::string EzKey::getNote(){ return _note; }
void EzKey::setNote(std::string note){ _note = note; }
void EzKey::testPass(){
	QMessageBox::information(new QWidget(),QString::fromStdString("Note"),QString::fromStdString("you pressed " + _note));
}
