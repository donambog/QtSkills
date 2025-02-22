#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    qDebug() << "Hello from Qt on Termux!";
    return app.exec();
}
