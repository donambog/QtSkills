// Définition de la classe Worker
#pragma once
#include <QObject>
#include <QTimer>

// QObject est la classe de base pour tous les objets Qt
// Elle permet d'utiliser les signals et slots
class Worker : public QObject {
    // Q_OBJECT est une macro nécessaire pour utiliser signals/slots
    Q_OBJECT

public:
    // Constructeur
    Worker();

private slots:
    // Un slot est une fonction qui peut recevoir un signal
    void onTimeout();

private:
    // Timer membre de la classe
    QTimer timer;
};
