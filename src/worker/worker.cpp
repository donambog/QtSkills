#include "worker.h"
#include <QDebug>

Worker::Worker() {
    // connect relie un signal (timeout) à un slot (onTimeout)
    connect(&timer, &QTimer::timeout, this, &Worker::onTimeout);
    // Démarre le timer avec un intervalle de 1 seconde
    timer.start(1000);
}

void Worker::onTimeout() {
    qDebug() << "Tick!";
}
