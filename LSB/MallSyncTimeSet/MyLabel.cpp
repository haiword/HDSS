#include "MyLabel.h"
#include <QMessageBox>


MyLabel::MyLabel(QWidget* parent)
{}
MyLabel::~MyLabel() {}


void MyLabel::mousePressEvent(QMouseEvent* ev) 
{
	if (ev->button() == Qt::LeftButton)
	{
		QMessageBox::information(NULL, "click", "clicked on me", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	}
}

bool MyLabel::event(QEvent* ev)
{
	if (ev->type() == QEvent::MouseButtonPress)
	{
		QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(ev);
		if (mouseEvent->button() == Qt::LeftButton)
		{
			QMessageBox::information(NULL, "click", "clicked on me", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
			close(); 
			auto a = this->parent();
		
			return true;
		}
	}

	return QLabel::event(ev);
}