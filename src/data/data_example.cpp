// Exemple de manipulation de données avec Qt
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QList>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    
    // QString est la classe de chaîne de caractères de Qt
    QString str = "Hello Qt";
    qDebug() << "Original:" << str;
    qDebug() << "En majuscules:" << str.toUpper();
    
    // QList est un conteneur similaire à std::vector
    QList<int> numbers {1, 2, 3, 4, 5};
    qDebug() << "Nombres:";
    for(const auto& num : numbers) {
        qDebug() << num;
    }
    
    return app.exec();
}
