#ifndef MALLSYNCTIMESET_H
#define MALLSYNCTIMESET_H

#include <QDialog>
#include "MyLabel.h"
#include <QGridLayout>
#include <my_label.h>

/*******************************************
* Auth:Felix
*date：20200809
* profile：商城同步时间设置
*
*******************************************/



QT_BEGIN_NAMESPACE
namespace Ui { class MallSyncTimeSet; }
QT_END_NAMESPACE

class MallSyncTimeSet : public QDialog
{
    Q_OBJECT

public:
    MallSyncTimeSet(QWidget *parent = nullptr);
    ~MallSyncTimeSet();
    bool InitDlg();
    bool CheckMinute();

private:
    void LoadIcon();    //加载关闭图片

private slots:
    void onConfirmClicked();        //确定按钮
    void onCloseClicked();          //关闭

private:
    Ui::MallSyncTimeSet *ui;


};
#endif // MALLSYNCTIMESET_H
