#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <QTimer>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_RUN_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *timer;

    QImage qt_optic;
    QImage qt_IR;

    cv::Mat IR;
    cv::Mat optic;

    cv::Mat optic_grad_x, optic_grad_y;
    cv::Mat optic_abs_grad_x, optic_abs_grad_y;
    cv::Mat optic_grad;

    cv::Mat IR_grad_x, IR_grad_y;
    cv::Mat IR_abs_grad_x, IR_abs_grad_y;
    cv::Mat IR_grad;

    int xOffSet = 45;
    int yOffSet = 73;
    float scale_factor;

    float i;
    cv::Mat temp;
    int IR_rows, IR_cols;

    cv::Mat result;
    int result_rows, result_cols;
    double minVal; double maxVal; cv::Point minLoc; cv::Point maxLoc;
    double matchVal=0; cv::Point matchLoc;

};

#endif // MAINWINDOW_H
