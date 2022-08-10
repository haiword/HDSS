#include "mallsynctimeset.h"
#include <ui_mallsynctimeset.h>
#include <QMessageBox>
#include <QValidator>

MallSyncTimeSet::MallSyncTimeSet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MallSyncTimeSet)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

	if (!InitDlg())
	{
		qDebug("###########初始化失败！#################");
	}

	LoadIcon();
	

    QObject::connect(ui->label, &my_label::clicked, this, &MallSyncTimeSet::onConfirmClicked);
    QObject::connect(ui->labelClose, &my_label::clicked, this, &MallSyncTimeSet::onCloseClicked);
}

MallSyncTimeSet::~MallSyncTimeSet()
{
    delete ui;
}

bool MallSyncTimeSet::InitDlg()
{

	QRegExp regx("[0-9]+$");	//设置只能输入数字

	QValidator* validator = new QRegExpValidator(regx, ui->lineEditMinute);
	if (!validator)
	{
		return false;
	}
	ui->lineEditMinute->setValidator(validator);


	return true;
}

bool MallSyncTimeSet::CheckMinute()
{
	QString  strMinute = ui->lineEditMinute->text();
	int i = strMinute.toInt();
	if (5 < i)
	{
		return true;
	}
	return false;
}

void MallSyncTimeSet::LoadIcon()
{
	QString filename("close.png");
	QImage* img = new QImage;
	if (!(img->load(filename))) //加载图像
	{
		qDebug("##################打开图像失败#######################");
		delete img;
		return;
	}
	ui->labelClose->setPixmap(QPixmap::fromImage(*img));

}

void MallSyncTimeSet::onConfirmClicked()
{

	//QMessageBox::information(NULL, QString::fromLocal8Bit("单击"), QString::fromLocal8Bit("单击了我"), QMessageBox::Yes);
	if (!CheckMinute())
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("更新数据不能小于5分钟！"), QMessageBox::Yes);
		return;
	}

    close();

}

void MallSyncTimeSet::onCloseClicked()
{
	//QMessageBox::information(NULL, QString::fromLocal8Bit("关闭"), QString::fromLocal8Bit("单击了关闭"), QMessageBox::Yes);
	close();
}