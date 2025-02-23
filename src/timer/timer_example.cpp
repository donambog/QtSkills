// Exemple d'utilisation d'un timer Qt
#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    
    // Crée un timer qui s'exécute une seule fois après 1 seconde
    QTimer::singleShot(1000, []() {
        qDebug() << "Timer exécuté !";
        qApp->quit();  // qApp est un pointeur global vers l'application
    });
    
    qDebug() << "Programme démarré...";
    return app.exec();
}
