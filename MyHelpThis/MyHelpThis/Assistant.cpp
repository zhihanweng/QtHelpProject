#include <QtCore/QByteArray>
#include <QtCore/QProcess>
#include <QtWidgets/QMessageBox>

#include "Assistant.h"

Assistant::Assistant() : proc(0)
{

}

Assistant::~Assistant()
{
    if (proc && proc->state() == QProcess::Running)
    {
        // ÊÔÍ¼ÖÕÖ¹½ø³Ì
        proc->terminate();
        proc->waitForFinished(3000);
    }
    delete proc;
}

void Assistant::showDocumentation(const QString &file)
{
    if (!startAssistant())
    {
        return;
    }

    QByteArray ba("SetSource");
    ba.append("qthelp://bookmisClient.myhelp/doc/");
    proc->write(ba + file.toLocal8Bit() + '\n');
}

bool Assistant::startAssistant()
{
    if (!proc)
    {
        proc = new QProcess();
    }
    if (proc->state() != QProcess::Running)
    {
        QString app = QLatin1String("../MyHelpThis/documentation/assistant.exe");
        QStringList args;
        args << QLatin1String("-collectionFile") << QLatin1String("../MyHelpThis/documentation/myhelp.qhc");
        proc->start(app, args);
        if (!proc->waitForStarted())
        {
            QMessageBox::critical(0, QObject::tr("my help"), QObject::tr("Unable to launch Qt Assistant (%1)").arg(app));
            return false;
        }
    }
    return true;
}
