/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:53 2012
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

#include "sipAPIQtTest.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtTest/qtestcase.sip"
#include <qtestcase.h>
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtTest/qtestkeyboard.sip"
#include <qtestkeyboard.h>
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtTest/qtestmouse.sip"
#include <qtestmouse.h>
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtTest/qtestsystem.sip"
#include <qtestsystem.h>
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtTest/qtesttouch.sip"
#include <qtesttouch.h>
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtTest/qtesttouch.sip"
#include <qtesttouch.h>
#line 49 "sipQtTestQTestQTouchEventSequence.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 53 "sipQtTestQTestQTouchEventSequence.cpp"
#line 725 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 732 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 58 "sipQtTestQTestQTouchEventSequence.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 61 "sipQtTestQTestQTouchEventSequence.cpp"


extern "C" {static PyObject *meth_QTest_QTouchEventSequence_press(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_press(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPoint * a1;
        QWidget * a2 = 0;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ9|J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWidget, &a2))
        {
            QTest::QTouchEventSequence *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->press(a0,*a1,a2);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_press, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTest_QTouchEventSequence_move(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_move(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPoint * a1;
        QWidget * a2 = 0;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ9|J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWidget, &a2))
        {
            QTest::QTouchEventSequence *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->move(a0,*a1,a2);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_move, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTest_QTouchEventSequence_release(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_release(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPoint * a1;
        QWidget * a2 = 0;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ9|J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWidget, &a2))
        {
            QTest::QTouchEventSequence *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->release(a0,*a1,a2);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_release, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTest_QTouchEventSequence_stationary(PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_stationary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTest::QTouchEventSequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0))
        {
            QTest::QTouchEventSequence *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->stationary(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_stationary, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTest_QTouchEventSequence(void *, const sipTypeDef *);}
static void *cast_QTest_QTouchEventSequence(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTest_QTouchEventSequence)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTest_QTouchEventSequence(void *, int);}
static void release_QTest_QTouchEventSequence(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTest::QTouchEventSequence *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTest_QTouchEventSequence(sipSimpleWrapper *);}
static void dealloc_QTest_QTouchEventSequence(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTest_QTouchEventSequence(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QTest_QTouchEventSequence[] = {
    {SIP_MLNAME_CAST(sipName_move), (PyCFunction)meth_QTest_QTouchEventSequence_move, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_press), (PyCFunction)meth_QTest_QTouchEventSequence_press, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_release), (PyCFunction)meth_QTest_QTouchEventSequence_release, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_stationary), meth_QTest_QTouchEventSequence_stationary, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtTest_QTest_QTouchEventSequence = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTest__QTouchEventSequence,
        {0}
    },
    {
        sipNameNr_QTouchEventSequence,
        {0, 255, 0},
        4, methods_QTest_QTouchEventSequence,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QTest_QTouchEventSequence,
    0,
    0,
    0,
    release_QTest_QTouchEventSequence,
    cast_QTest_QTouchEventSequence,
    0,
    0,
    0
},
    0,
    0,
    0
};