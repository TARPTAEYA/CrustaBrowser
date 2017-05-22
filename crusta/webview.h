/* ============================================================
* Crusta - Qt5 webengine browser
* Copyright (C) 2017 Anmol Gautam <tarptaeya@gmail.com>
*
* THIS FILE IS A PART OF CRUSTA
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */

#ifndef WEBVIEW_H
#define WEBVIEW_H

#include "fullscreennotifier.h"
#include "timenotifier.h"
#include "webpage.h"

#include <QWebEngineView>
#include <QWebEnginePage>
#include <QWebEngineSettings>
#include <QWebEngineFullScreenRequest>
#include <QWebEngineDownloadItem>
#include <QString>
#include <QLayout>
#include <QAction>
#include <QStackedWidget>
#include <QTabWidget>
#include <QWidget>
#include <QLabel>
#include <QMovie>
#include <QIcon>
#include <QTabBar>
#include <QPixmap>
#include <QUrl>
#include <QAuthenticator>
#include <QPoint>



class WebView:public QWebEngineView{
    Q_OBJECT
protected:
    QWebEngineView* createWindow(QWebEnginePage::WebWindowType type);
public:
    bool wasFullScreened=false;
    QString link="";
    WebPage* webpage=new WebPage();
    QString home_page;
    QString defaultSearch;
    QLayout* layout;
    QWidget* widget;
    QAction* exitFullScreen=new QAction();
    QAction* timeAction=new QAction();
    FullScreenNotifier* notifier=new FullScreenNotifier();
    TimeNotifier* timeNotifier=new TimeNotifier();
    QWebEngineView* view=new QWebEngineView();
    void createWebView();
    QWebEngineView* returnView();
    void home();
    void spinnerStarted();
    void faviconChanged(QIcon fav);
    void pageTitleChanged();
    void acceptFullScreen(QWebEngineFullScreenRequest request);
    void ExitAction();
    void download(QWebEngineDownloadItem* download_item);
    void downloadFinished(QString);
    void permissionHandler(const QUrl &securityOrigin, QWebEnginePage::Feature feature);
    void showLinkHovered(QString url);
    void closeTab();
    void audioInfo();
    void authenticate(const QUrl u, QAuthenticator *authenticator);
    void showContextMenu(const QPoint &pos);
    void loadFinished();
    WebView();
};



#endif // WEBVIEW_H
