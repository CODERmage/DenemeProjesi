#include <QtCore/QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "helo world!" << endl;

    return a.exec();
}
