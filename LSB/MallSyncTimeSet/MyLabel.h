#pragma once
#include <QLabel>
#include <QMouseEvent>

class MyLabel :    public QLabel
{
	Q_OBJECT
public:
	explicit MyLabel(QWidget *parent = 0);
	virtual ~MyLabel();
	
protected:
	virtual void mousePressEvent(QMouseEvent* ev);
	virtual bool event(QEvent* ev);

};

