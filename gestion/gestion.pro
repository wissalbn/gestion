QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    commande.cpp \
    commandes.cpp \
    main.cpp \
    db.cpp \
    admin.cpp \
    categorie.cpp \
    clientwindow.cpp \
    login.cpp \
    produit.cpp

HEADERS += \
    client.h \
    commande.h \
    commandes.h \
    db.h \
    admin.h \
    categorie.h \
    clientwindow.h \
    login.h \
    produit.h

FORMS += \
    commande.ui \
    db.ui \
    categorie.ui \
    clientwindow.ui \
    login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
