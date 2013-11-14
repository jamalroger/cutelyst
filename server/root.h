#ifndef ROOT_H
#define ROOT_H

#include <cutelystcontroller.h>

class Root : public CutelystController
{
    Q_OBJECT
    Q_CLASSINFO("Namespace", "")
public:
    Q_INVOKABLE Root();

public:
    Q_INVOKABLE void hugeNameQuiteLong(const QString &nome, Local);
    Q_CLASSINFO("begin_Path", "/home")
    Q_CLASSINFO("begin_Chained", "/")
    Q_CLASSINFO("begin_Path", "/")
    Q_INVOKABLE void begin(const QString &name, Path);
    Q_INVOKABLE void users(const QString &name, const QString &age, Args, Local);
    Q_INVOKABLE void admin(const QString &name, const QString &age, Global);

    Q_INVOKABLE void Begin();
    Q_INVOKABLE void Auto();
    Q_INVOKABLE void End();
};

#endif // ROOT_H
