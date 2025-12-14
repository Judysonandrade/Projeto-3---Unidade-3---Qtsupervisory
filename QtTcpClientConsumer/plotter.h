#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>


class Plotter: public QWidget
{
    Q_OBJECT

private:
    std::vector<double> time;
    std::vector<double> data;

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void setData(std::vector<double> _time, std::vector<double> _data);

signals:
};

#endif // PLOTTER_H
