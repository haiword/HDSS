#include "my_label.h"

my_label::my_label(QWidget* parent) :QLabel(parent)
{

}

// 重写鼠标释放时间 mouseReleaseEvent()
void my_label::mouseReleaseEvent(QMouseEvent* ev)
{
	Q_UNUSED(ev)
		if (ev->button() == Qt::LeftButton)
		{
			emit clicked();	// 发射信号
		}
}
