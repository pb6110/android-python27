/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:09 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtDeclarative.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDeclarative/qdeclarativeextensionplugin.sip"
#include <qdeclarativeextensionplugin.h>
#line 39 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDeclarative/qdeclarativeengine.sip"
#include <qdeclarativeengine.h>
#line 46 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 61 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 64 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 73 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 76 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 79 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 82 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"


class sipQDeclarativeExtensionPlugin : public QDeclarativeExtensionPlugin
{
public:
    sipQDeclarativeExtensionPlugin(QObject *);
    virtual ~sipQDeclarativeExtensionPlugin();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void registerTypes(const char *);
    void initializeEngine(QDeclarativeEngine *,const char *);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDeclarativeExtensionPlugin(const sipQDeclarativeExtensionPlugin &);
    sipQDeclarativeExtensionPlugin &operator = (const sipQDeclarativeExtensionPlugin &);

    char sipPyMethods[9];
};

sipQDeclarativeExtensionPlugin::sipQDeclarativeExtensionPlugin(QObject *a0): QDeclarativeExtensionPlugin(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeExtensionPlugin::~sipQDeclarativeExtensionPlugin()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDeclarativeExtensionPlugin::metaObject() const
{
    return sip_QtDeclarative_qt_metaobject(sipPySelf,sipType_QDeclarativeExtensionPlugin);
}

int sipQDeclarativeExtensionPlugin::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDeclarativeExtensionPlugin::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDeclarative_qt_metacall(sipPySelf,sipType_QDeclarativeExtensionPlugin,_c,_id,_a);

    return _id;
}

void *sipQDeclarativeExtensionPlugin::qt_metacast(const char *_clname)
{
    return (sip_QtDeclarative_qt_metacast && sip_QtDeclarative_qt_metacast(sipPySelf,sipType_QDeclarativeExtensionPlugin,_clname)) ? this : QDeclarativeExtensionPlugin::qt_metacast(_clname);
}

void sipQDeclarativeExtensionPlugin::registerTypes(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QDeclarativeExtensionPlugin,sipName_registerTypes);

    if (!meth)
        return;

    extern void sipVH_QtDeclarative_6(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtDeclarative_6(sipGILState,meth,a0);
}

void sipQDeclarativeExtensionPlugin::initializeEngine(QDeclarativeEngine *a0,const char *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_initializeEngine);

    if (!meth)
    {
        QDeclarativeExtensionPlugin::initializeEngine(a0,a1);
        return;
    }

    extern void sipVH_QtDeclarative_5(sip_gilstate_t,PyObject *,QDeclarativeEngine *,const char *);

    sipVH_QtDeclarative_5(sipGILState,meth,a0,a1);
}

bool sipQDeclarativeExtensionPlugin::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQDeclarativeExtensionPlugin::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQDeclarativeExtensionPlugin::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQDeclarativeExtensionPlugin::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQDeclarativeExtensionPlugin::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQDeclarativeExtensionPlugin::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQDeclarativeExtensionPlugin::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

QObject * sipQDeclarativeExtensionPlugin::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQDeclarativeExtensionPlugin::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQDeclarativeExtensionPlugin::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQDeclarativeExtensionPlugin::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQDeclarativeExtensionPlugin::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQDeclarativeExtensionPlugin::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQDeclarativeExtensionPlugin::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_sender(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp))
        {
            QObject *sipRes = 0;

#line 529 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp->sender());
        #else
            sipRes = helper(sipCpp->sipProtect_sender());
        #endif
#line 377 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_receivers(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 546 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp, a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 419 "sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_registerTypes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_registerTypes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char * a0;
        QDeclarativeExtensionPlugin *sipCpp;

        static const char *sipKwdList[] = {
            sipName_uri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bs", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDeclarativeExtensionPlugin, sipName_registerTypes);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->registerTypes(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_registerTypes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_initializeEngine(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_initializeEngine(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDeclarativeEngine * a0;
        const char * a1;
        QDeclarativeExtensionPlugin *sipCpp;

        static const char *sipKwdList[] = {
            sipName_engine,
            sipName_uri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8s", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, sipType_QDeclarativeEngine, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QDeclarativeExtensionPlugin::initializeEngine(a0,a1) : sipCpp->initializeEngine(a0,a1));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_initializeEngine, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativeExtensionPlugin(void *, const sipTypeDef *);}
static void *cast_QDeclarativeExtensionPlugin(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDeclarativeExtensionPlugin)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QDeclarativeExtensionPlugin *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeExtensionPlugin(void *, int);}
static void release_QDeclarativeExtensionPlugin(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDeclarativeExtensionPlugin *>(sipCppV);
    else
        delete reinterpret_cast<QDeclarativeExtensionPlugin *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativeExtensionPlugin(sipSimpleWrapper *);}
static void dealloc_QDeclarativeExtensionPlugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDeclarativeExtensionPlugin *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativeExtensionPlugin(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QDeclarativeExtensionPlugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDeclarativeExtensionPlugin(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDeclarativeExtensionPlugin *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeExtensionPlugin(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDeclarativeExtensionPlugin[] = {{133, 0, 1}};


static PyMethodDef methods_QDeclarativeExtensionPlugin[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QDeclarativeExtensionPlugin_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QDeclarativeExtensionPlugin_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QDeclarativeExtensionPlugin_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QDeclarativeExtensionPlugin_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_initializeEngine), (PyCFunction)meth_QDeclarativeExtensionPlugin_initializeEngine, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QDeclarativeExtensionPlugin_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_registerTypes), (PyCFunction)meth_QDeclarativeExtensionPlugin_registerTypes, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QDeclarativeExtensionPlugin_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QDeclarativeExtensionPlugin_timerEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeExtensionPlugin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeExtensionPlugin,
        {0}
    },
    {
        sipNameNr_QDeclarativeExtensionPlugin,
        {0, 0, 1},
        9, methods_QDeclarativeExtensionPlugin,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QDeclarativeExtensionPlugin,
    0,
    init_QDeclarativeExtensionPlugin,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QDeclarativeExtensionPlugin,
    0,
    0,
    0,
    release_QDeclarativeExtensionPlugin,
    cast_QDeclarativeExtensionPlugin,
    0,
    0,
    0
},
    &QDeclarativeExtensionPlugin::staticMetaObject,
    0,
    0
};