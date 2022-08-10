#pragma once
#include <QLabel>
#include<QMouseEvent>

/*******************************************
* Auth:Felix
*date：20200808 
* profile：自定义label控件响应点击事件
* 
*******************************************/


class my_label  : public QLabel
{
	Q_OBJECT
public:
	explicit my_label(QWidget* parent = 0);	// 构造函数声明


protected:
	virtual void mouseReleaseEvent(QMouseEvent* ev);  // 声明鼠标左键点击事件

signals:
	void clicked(void); // 声明鼠标左击中信号
	

};

