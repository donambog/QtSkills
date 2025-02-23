// Programme principal pour tester la classe Worker
#include <QCoreApplication>
#include "worker.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    Worker worker;  // Crée une instance de Worker
    return app.exec();
}
