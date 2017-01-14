#ifndef OVENTIMER_H
#define OVENTIMER_H

#include <QWidget>
#include <QDateTime>

class QTimer;

class OvenTimer : public QWidget
{
    Q_OBJECT
public:
    explicit OvenTimer(QWidget *parent = 0);
    void setDuration(int secs);
    int duration() const;
    void draw(QPainter *painter);

signals:
    void timeout();

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);//protected��һ��дʲô�������ʣ�
    
public slots:

private:
    QDateTime finishTime;
    QTimer *updateTimer;
    QTimer *finishTime;
};

#endif // OVENTIMER_H
