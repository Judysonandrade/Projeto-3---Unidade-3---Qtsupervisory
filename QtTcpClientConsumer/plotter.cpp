#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <algorithm>

using namespace std;

Plotter::Plotter(QWidget *parent) : QWidget{parent} {}

void Plotter::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // Deixa a linha suave

    // Fundo Amarelo
    painter.fillRect(rect(), QColor(255, 255, 100));

    // Borda Vermelha
    QPen penBorder(Qt::red, 3);
    painter.setPen(penBorder);
    painter.drawRect(0, 0, width() - 1, height() - 1);


    if (data.size() < 2 || time.size() < 2)
        return;


    QPen penLine(QColor(128, 0, 255), 2); // Cor roxa/violeta
    painter.setPen(penLine);

    //  limites
    double ymax = *max_element(data.begin(), data.end());
    double ymin = *min_element(data.begin(), data.end());
    double tmax = *max_element(time.begin(), time.end());
    double tmin = *min_element(time.begin(), time.end());


    if (tmax == tmin) tmax += 1;
    if (ymax == ymin) { ymax += 1; ymin -= 1; }


    for (size_t i = 0; i < data.size() - 1; i++) {
        // Normalização do X
        double x1 = (time[i] - tmin) * width() / (tmax - tmin);
        double x2 = (time[i+1] - tmin) * width() / (tmax - tmin);

        // Normalização do Y
        double y1 = height() - (data[i] - ymin) * height() / (ymax - ymin);
        double y2 = height() - (data[i+1] - ymin) * height() / (ymax - ymin);

        painter.drawLine(x1, y1, x2, y2);
    }
}

void Plotter::setData(std::vector<double> _time, std::vector<double> _data) {
    this->time = _time;
    this->data = _data;
    update();
}
