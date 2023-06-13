
#include <QtCore>
#include "DictInfo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString dictparams = argv[1];
    QFileInfo dictfileinfo(dictparams);
    QString dictname =  dictfileinfo.dir().absolutePath()+QDir::separator() + dictfileinfo.baseName();
    QString infoname = dictname+".ifo";
    QString idxname = dictname +".idx";
    dictname += ".dict";

    DictInfo info(infoname);

    return EXIT_SUCCESS;
}
