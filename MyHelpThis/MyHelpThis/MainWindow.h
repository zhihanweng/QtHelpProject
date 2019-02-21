/************************************
* @file MainWindow.h                *
* @author wzh                       *
* @brief   这个是mainwidows          *
* @version 1.0.1                    *
*************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class Assistant;

/**
 * @brief 项目主界面
 * 程序启动显示界面
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /**
     * @brief pub测试
     * @param[in] iPub 公共参数
     * @return 公共返回说明
     *  -<em>false</em> fail
     *  -<em>true</em> succeed
     * @bug meiyou bug
     * @warning meiyou warning
     * @remarks meiyou remarks
     * @todo meiyou todo
     * @note meiyou note
     * @retval 0 succeed
     * @retval 1 failuer
     * @pre meiou pre
     * @par mieoyu par
     * @see meiyou see
     * @deprecated meiyou deprecated
     */
    int pub(int iPub);

protected:
    /**
     * @brief pro测试
     * @param bPro 公共参数
     * @return 保护返回说明
     * -<em>false</em> fail
     * -<em>true</em> succeed
     */
    bool pro(bool bPro);

protected slots:
    /**
     * @brief 响应帮助菜单
     * 打开帮助文档进行查询
     */
    void startAssistant();

private:
    Ui::MainWindow *ui;    
    Assistant *pAssistant;
};

#endif // MAINWINDOW_H
