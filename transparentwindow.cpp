#include "transparentwindow.h"
#include "ui_transparentwindow.h"

TransparentWindow::TransparentWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TransparentWindow)
{
    ui->setupUi(this);
   setAttribute(Qt::WA_TranslucentBackground);
   setWindowFlags(Qt::FramelessWindowHint);


ui->titleLabel->setText(this->windowTitle());
ui->centralwidget->setLayout(ui->mainLayout);
}

TransparentWindow::~TransparentWindow()
{
    delete ui;
}

void TransparentWindow::paintEvent(QPaintEvent *e)
{
   Q_UNUSED(e)

    QLinearGradient gradient(QPointF(0, 0), QPointF(width()-2, height()-2));
     gradient.setColorAt (0.0000, QColor("#1E90FF"));
     gradient.setColorAt (0.3333, QColor("#00BFFF"));
     gradient.setColorAt (0.6666, QColor("#6495ED"));
     gradient.setColorAt (1.0000, QColor("#87CEFA"));

   QPainter Painter(this);
   Painter.setPen(QPen(QColor("#4169E1"), 5, Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin));
   Painter.setBrush(QBrush(gradient));
   Painter.setOpacity(0.75);
   Painter.drawRect(QRectF(0,0, width()-2, height()-2));
}

