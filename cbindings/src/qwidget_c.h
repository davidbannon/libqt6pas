//******************************************************************************
//  Copyright (c) 2005-2022 by Jan Van hijfte, Željan Rikalo
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QWIDGET_C_H
#define QWIDGET_C_H

#include <QtWidgets>
#include "pascalbind.h"

C_EXPORT QWidgetH QWidget_Create(QWidgetH parent, unsigned int f);
C_EXPORT void QWidget_Destroy(QWidgetH handle);
C_EXPORT int QWidget_devType(QWidgetH handle);
C_EXPORT WId QWidget_winId(QWidgetH handle);
C_EXPORT void QWidget_createWinId(QWidgetH handle);
C_EXPORT WId QWidget_internalWinId(QWidgetH handle);
C_EXPORT WId QWidget_effectiveWinId(QWidgetH handle);
C_EXPORT QStyleH QWidget_style(QWidgetH handle);
C_EXPORT void QWidget_setStyle(QWidgetH handle, QStyleH AnonParam1);
C_EXPORT bool QWidget_isTopLevel(QWidgetH handle);
C_EXPORT bool QWidget_isWindow(QWidgetH handle);
C_EXPORT bool QWidget_isModal(QWidgetH handle);
C_EXPORT Qt::WindowModality QWidget_windowModality(QWidgetH handle);
C_EXPORT void QWidget_setWindowModality(QWidgetH handle, Qt::WindowModality windowModality);
C_EXPORT bool QWidget_isEnabled(QWidgetH handle);
C_EXPORT bool QWidget_isEnabledTo(QWidgetH handle, const QWidgetH AnonParam1);
C_EXPORT void QWidget_setEnabled(QWidgetH handle, bool AnonParam1);
C_EXPORT void QWidget_setDisabled(QWidgetH handle, bool AnonParam1);
C_EXPORT void QWidget_setWindowModified(QWidgetH handle, bool AnonParam1);
C_EXPORT void QWidget_frameGeometry(QWidgetH handle, PRect retval);
C_EXPORT void QWidget_geometry(QWidgetH handle, PRect retval);
C_EXPORT void QWidget_normalGeometry(QWidgetH handle, PRect retval);
C_EXPORT int QWidget_x(QWidgetH handle);
C_EXPORT int QWidget_y(QWidgetH handle);
C_EXPORT void QWidget_pos(QWidgetH handle, PQtPoint retval);
C_EXPORT void QWidget_frameSize(QWidgetH handle, PSize retval);
C_EXPORT void QWidget_size(QWidgetH handle, PSize retval);
C_EXPORT int QWidget_width(QWidgetH handle);
C_EXPORT int QWidget_height(QWidgetH handle);
C_EXPORT void QWidget_rect(QWidgetH handle, PRect retval);
C_EXPORT void QWidget_childrenRect(QWidgetH handle, PRect retval);
C_EXPORT void QWidget_childrenRegion(QWidgetH handle, QRegionH retval);
C_EXPORT void QWidget_minimumSize(QWidgetH handle, PSize retval);
C_EXPORT void QWidget_maximumSize(QWidgetH handle, PSize retval);
C_EXPORT int QWidget_minimumWidth(QWidgetH handle);
C_EXPORT int QWidget_minimumHeight(QWidgetH handle);
C_EXPORT int QWidget_maximumWidth(QWidgetH handle);
C_EXPORT int QWidget_maximumHeight(QWidgetH handle);
C_EXPORT void QWidget_setMinimumSize(QWidgetH handle, const QSizeH AnonParam1);
C_EXPORT void QWidget_setMinimumSize2(QWidgetH handle, int minw, int minh);
C_EXPORT void QWidget_setMaximumSize(QWidgetH handle, const QSizeH AnonParam1);
C_EXPORT void QWidget_setMaximumSize2(QWidgetH handle, int maxw, int maxh);
C_EXPORT void QWidget_setMinimumWidth(QWidgetH handle, int minw);
C_EXPORT void QWidget_setMinimumHeight(QWidgetH handle, int minh);
C_EXPORT void QWidget_setMaximumWidth(QWidgetH handle, int maxw);
C_EXPORT void QWidget_setMaximumHeight(QWidgetH handle, int maxh);
C_EXPORT void QWidget_sizeIncrement(QWidgetH handle, PSize retval);
C_EXPORT void QWidget_setSizeIncrement(QWidgetH handle, const QSizeH AnonParam1);
C_EXPORT void QWidget_setSizeIncrement2(QWidgetH handle, int w, int h);
C_EXPORT void QWidget_baseSize(QWidgetH handle, PSize retval);
C_EXPORT void QWidget_setBaseSize(QWidgetH handle, const QSizeH AnonParam1);
C_EXPORT void QWidget_setBaseSize2(QWidgetH handle, int basew, int baseh);
C_EXPORT void QWidget_setFixedSize(QWidgetH handle, const QSizeH AnonParam1);
C_EXPORT void QWidget_setFixedSize2(QWidgetH handle, int w, int h);
C_EXPORT void QWidget_setFixedWidth(QWidgetH handle, int w);
C_EXPORT void QWidget_setFixedHeight(QWidgetH handle, int h);
C_EXPORT void QWidget_mapToGlobal(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1);
C_EXPORT void QWidget_mapFromGlobal(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1);
C_EXPORT void QWidget_mapToParent(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1);
C_EXPORT void QWidget_mapFromParent(QWidgetH handle, PQtPoint retval, const QPointH AnonParam1);
C_EXPORT void QWidget_mapTo(QWidgetH handle, PQtPoint retval, const QWidgetH AnonParam1, const QPointH AnonParam2);
C_EXPORT void QWidget_mapFrom(QWidgetH handle, PQtPoint retval, const QWidgetH AnonParam1, const QPointH AnonParam2);
C_EXPORT QWidgetH QWidget_window(QWidgetH handle);
C_EXPORT QWidgetH QWidget_nativeParentWidget(QWidgetH handle);
C_EXPORT QWidgetH QWidget_topLevelWidget(QWidgetH handle);
C_EXPORT const QPaletteH QWidget_palette(QWidgetH handle);
C_EXPORT void QWidget_setPalette(QWidgetH handle, const QPaletteH AnonParam1);
C_EXPORT void QWidget_setBackgroundRole(QWidgetH handle, QPalette::ColorRole AnonParam1);
C_EXPORT QPalette::ColorRole QWidget_backgroundRole(QWidgetH handle);
C_EXPORT void QWidget_setForegroundRole(QWidgetH handle, QPalette::ColorRole AnonParam1);
C_EXPORT QPalette::ColorRole QWidget_foregroundRole(QWidgetH handle);
C_EXPORT const QFontH QWidget_font(QWidgetH handle);
C_EXPORT void QWidget_setFont(QWidgetH handle, const QFontH AnonParam1);
C_EXPORT void QWidget_fontMetrics(QWidgetH handle, QFontMetricsH retval);
C_EXPORT void QWidget_fontInfo(QWidgetH handle, QFontInfoH retval);
C_EXPORT void QWidget_cursor(QWidgetH handle, QCursorH retval);
C_EXPORT void QWidget_setCursor(QWidgetH handle, const QCursorH AnonParam1);
C_EXPORT void QWidget_unsetCursor(QWidgetH handle);
C_EXPORT void QWidget_setMouseTracking(QWidgetH handle, bool enable);
C_EXPORT bool QWidget_hasMouseTracking(QWidgetH handle);
C_EXPORT bool QWidget_underMouse(QWidgetH handle);
C_EXPORT void QWidget_setMask(QWidgetH handle, const QBitmapH AnonParam1);
C_EXPORT void QWidget_setMask2(QWidgetH handle, const QRegionH AnonParam1);
C_EXPORT void QWidget_mask(QWidgetH handle, QRegionH retval);
C_EXPORT void QWidget_clearMask(QWidgetH handle);
C_EXPORT void QWidget_render(QWidgetH handle, QPaintDeviceH target, const QPointH targetOffset, const QRegionH sourceRegion, unsigned int renderFlags);
C_EXPORT void QWidget_render2(QWidgetH handle, QPainterH painter, const QPointH targetOffset, const QRegionH sourceRegion, unsigned int renderFlags);
C_EXPORT void QWidget_grab(QWidgetH handle, QPixmapH retval, PRect rectangle);
C_EXPORT QGraphicsEffectH QWidget_graphicsEffect(QWidgetH handle);
C_EXPORT void QWidget_setGraphicsEffect(QWidgetH handle, QGraphicsEffectH effect);
C_EXPORT void QWidget_grabGesture(QWidgetH handle, Qt::GestureType type, unsigned int flags);
C_EXPORT void QWidget_ungrabGesture(QWidgetH handle, Qt::GestureType type);
C_EXPORT void QWidget_setWindowTitle(QWidgetH handle, PWideString AnonParam1);
C_EXPORT void QWidget_setStyleSheet(QWidgetH handle, PWideString styleSheet);
C_EXPORT void QWidget_styleSheet(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_windowTitle(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setWindowIcon(QWidgetH handle, const QIconH icon);
C_EXPORT void QWidget_windowIcon(QWidgetH handle, QIconH retval);
C_EXPORT void QWidget_setWindowIconText(QWidgetH handle, PWideString AnonParam1);
C_EXPORT void QWidget_windowIconText(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setWindowRole(QWidgetH handle, PWideString AnonParam1);
C_EXPORT void QWidget_windowRole(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setWindowFilePath(QWidgetH handle, PWideString filePath);
C_EXPORT void QWidget_windowFilePath(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setWindowOpacity(QWidgetH handle, qreal level);
C_EXPORT qreal QWidget_windowOpacity(QWidgetH handle);
C_EXPORT bool QWidget_isWindowModified(QWidgetH handle);
C_EXPORT void QWidget_setToolTip(QWidgetH handle, PWideString AnonParam1);
C_EXPORT void QWidget_toolTip(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setStatusTip(QWidgetH handle, PWideString AnonParam1);
C_EXPORT void QWidget_statusTip(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setWhatsThis(QWidgetH handle, PWideString AnonParam1);
C_EXPORT void QWidget_whatsThis(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_accessibleName(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setAccessibleName(QWidgetH handle, PWideString name);
C_EXPORT void QWidget_accessibleDescription(QWidgetH handle, PWideString retval);
C_EXPORT void QWidget_setAccessibleDescription(QWidgetH handle, PWideString description);
C_EXPORT void QWidget_setLayoutDirection(QWidgetH handle, Qt::LayoutDirection direction);
C_EXPORT Qt::LayoutDirection QWidget_layoutDirection(QWidgetH handle);
C_EXPORT void QWidget_unsetLayoutDirection(QWidgetH handle);
C_EXPORT void QWidget_setLocale(QWidgetH handle, const QLocaleH locale);
C_EXPORT void QWidget_locale(QWidgetH handle, QLocaleH retval);
C_EXPORT void QWidget_unsetLocale(QWidgetH handle);
C_EXPORT bool QWidget_isRightToLeft(QWidgetH handle);
C_EXPORT bool QWidget_isLeftToRight(QWidgetH handle);
C_EXPORT void QWidget_setFocus(QWidgetH handle);
C_EXPORT bool QWidget_isActiveWindow(QWidgetH handle);
C_EXPORT void QWidget_activateWindow(QWidgetH handle);
C_EXPORT void QWidget_clearFocus(QWidgetH handle);
C_EXPORT void QWidget_setFocus2(QWidgetH handle, Qt::FocusReason reason);
C_EXPORT Qt::FocusPolicy QWidget_focusPolicy(QWidgetH handle);
C_EXPORT void QWidget_setFocusPolicy(QWidgetH handle, Qt::FocusPolicy policy);
C_EXPORT bool QWidget_hasFocus(QWidgetH handle);
C_EXPORT void QWidget_setTabOrder(QWidgetH AnonParam1, QWidgetH AnonParam2);
C_EXPORT void QWidget_setFocusProxy(QWidgetH handle, QWidgetH AnonParam1);
C_EXPORT QWidgetH QWidget_focusProxy(QWidgetH handle);
C_EXPORT Qt::ContextMenuPolicy QWidget_contextMenuPolicy(QWidgetH handle);
C_EXPORT void QWidget_setContextMenuPolicy(QWidgetH handle, Qt::ContextMenuPolicy policy);
C_EXPORT void QWidget_grabMouse(QWidgetH handle);
C_EXPORT void QWidget_grabMouse2(QWidgetH handle, const QCursorH AnonParam1);
C_EXPORT void QWidget_releaseMouse(QWidgetH handle);
C_EXPORT void QWidget_grabKeyboard(QWidgetH handle);
C_EXPORT void QWidget_releaseKeyboard(QWidgetH handle);
C_EXPORT int QWidget_grabShortcut(QWidgetH handle, const QKeySequenceH key, Qt::ShortcutContext context);
C_EXPORT void QWidget_releaseShortcut(QWidgetH handle, int id);
C_EXPORT void QWidget_setShortcutEnabled(QWidgetH handle, int id, bool enable);
C_EXPORT void QWidget_setShortcutAutoRepeat(QWidgetH handle, int id, bool enable);
C_EXPORT QWidgetH QWidget_mouseGrabber();
C_EXPORT QWidgetH QWidget_keyboardGrabber();
C_EXPORT bool QWidget_updatesEnabled(QWidgetH handle);
C_EXPORT void QWidget_setUpdatesEnabled(QWidgetH handle, bool enable);
C_EXPORT QGraphicsProxyWidgetH QWidget_graphicsProxyWidget(QWidgetH handle);
C_EXPORT void QWidget_update(QWidgetH handle);
C_EXPORT void QWidget_repaint(QWidgetH handle);
C_EXPORT void QWidget_update2(QWidgetH handle, int x, int y, int w, int h);
C_EXPORT void QWidget_update3(QWidgetH handle, PRect AnonParam1);
C_EXPORT void QWidget_update4(QWidgetH handle, const QRegionH AnonParam1);
C_EXPORT void QWidget_repaint2(QWidgetH handle, int x, int y, int w, int h);
C_EXPORT void QWidget_repaint3(QWidgetH handle, PRect AnonParam1);
C_EXPORT void QWidget_repaint4(QWidgetH handle, const QRegionH AnonParam1);
C_EXPORT void QWidget_setVisible(QWidgetH handle, bool visible);
C_EXPORT void QWidget_setHidden(QWidgetH handle, bool hidden);
C_EXPORT void QWidget_show(QWidgetH handle);
C_EXPORT void QWidget_hide(QWidgetH handle);
C_EXPORT void QWidget_showMinimized(QWidgetH handle);
C_EXPORT void QWidget_showMaximized(QWidgetH handle);
C_EXPORT void QWidget_showFullScreen(QWidgetH handle);
C_EXPORT void QWidget_showNormal(QWidgetH handle);
C_EXPORT bool QWidget_close(QWidgetH handle);
C_EXPORT void QWidget_raise(QWidgetH handle);
C_EXPORT void QWidget_lower(QWidgetH handle);
C_EXPORT void QWidget_stackUnder(QWidgetH handle, QWidgetH AnonParam1);
C_EXPORT void QWidget_move(QWidgetH handle, int x, int y);
C_EXPORT void QWidget_move2(QWidgetH handle, const QPointH AnonParam1);
C_EXPORT void QWidget_resize(QWidgetH handle, int w, int h);
C_EXPORT void QWidget_resize2(QWidgetH handle, const QSizeH AnonParam1);
C_EXPORT void QWidget_setGeometry(QWidgetH handle, int x, int y, int w, int h);
C_EXPORT void QWidget_setGeometry2(QWidgetH handle, PRect AnonParam1);
C_EXPORT void QWidget_saveGeometry(QWidgetH handle, QByteArrayH retval);
C_EXPORT bool QWidget_restoreGeometry(QWidgetH handle, const QByteArrayH geometry);
C_EXPORT void QWidget_adjustSize(QWidgetH handle);
C_EXPORT bool QWidget_isVisible(QWidgetH handle);
C_EXPORT bool QWidget_isVisibleTo(QWidgetH handle, const QWidgetH AnonParam1);
C_EXPORT bool QWidget_isHidden(QWidgetH handle);
C_EXPORT bool QWidget_isMinimized(QWidgetH handle);
C_EXPORT bool QWidget_isMaximized(QWidgetH handle);
C_EXPORT bool QWidget_isFullScreen(QWidgetH handle);
C_EXPORT unsigned int QWidget_windowState(QWidgetH handle);
C_EXPORT void QWidget_setWindowState(QWidgetH handle, unsigned int state);
C_EXPORT void QWidget_overrideWindowState(QWidgetH handle, unsigned int state);
C_EXPORT void QWidget_sizeHint(QWidgetH handle, PSize retval);
C_EXPORT void QWidget_minimumSizeHint(QWidgetH handle, PSize retval);
C_EXPORT void QWidget_sizePolicy(QWidgetH handle, PQSizePolicy retval);
C_EXPORT void QWidget_setSizePolicy(QWidgetH handle, PQSizePolicy AnonParam1);
C_EXPORT void QWidget_setSizePolicy2(QWidgetH handle, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical);
C_EXPORT int QWidget_heightForWidth(QWidgetH handle, int AnonParam1);
C_EXPORT bool QWidget_hasHeightForWidth(QWidgetH handle);
C_EXPORT void QWidget_visibleRegion(QWidgetH handle, QRegionH retval);
C_EXPORT void QWidget_setContentsMargins(QWidgetH handle, int left, int top, int right, int bottom);
C_EXPORT void QWidget_setContentsMargins2(QWidgetH handle, const QMarginsH margins);
C_EXPORT void QWidget_getContentsMargins(QWidgetH handle, int* left, int* top, int* right, int* bottom);
C_EXPORT void QWidget_contentsMargins(QWidgetH handle, QMarginsH retval);
C_EXPORT void QWidget_contentsRect(QWidgetH handle, PRect retval);
C_EXPORT QLayoutH QWidget_layout(QWidgetH handle);
C_EXPORT void QWidget_setLayout(QWidgetH handle, QLayoutH AnonParam1);
C_EXPORT void QWidget_updateGeometry(QWidgetH handle);
C_EXPORT void QWidget_setParent(QWidgetH handle, QWidgetH parent);
C_EXPORT void QWidget_setParent2(QWidgetH handle, QWidgetH parent, unsigned int f);
C_EXPORT void QWidget_scroll(QWidgetH handle, int dx, int dy);
C_EXPORT void QWidget_scroll2(QWidgetH handle, int dx, int dy, PRect AnonParam3);
C_EXPORT QWidgetH QWidget_focusWidget(QWidgetH handle);
C_EXPORT QWidgetH QWidget_nextInFocusChain(QWidgetH handle);
C_EXPORT QWidgetH QWidget_previousInFocusChain(QWidgetH handle);
C_EXPORT bool QWidget_acceptDrops(QWidgetH handle);
C_EXPORT void QWidget_setAcceptDrops(QWidgetH handle, bool on);
C_EXPORT void QWidget_addAction(QWidgetH handle, QActionH action);
C_EXPORT void QWidget_addActions(QWidgetH handle, PPtrIntArray actions);
C_EXPORT void QWidget_insertAction(QWidgetH handle, QActionH before, QActionH action);
C_EXPORT void QWidget_insertActions(QWidgetH handle, QActionH before, PPtrIntArray actions);
C_EXPORT void QWidget_removeAction(QWidgetH handle, QActionH action);
C_EXPORT void QWidget_actions(QWidgetH handle, PPtrIntArray retval);
C_EXPORT QWidgetH QWidget_parentWidget(QWidgetH handle);
C_EXPORT void QWidget_setWindowFlags(QWidgetH handle, unsigned int type);
C_EXPORT unsigned int QWidget_windowFlags(QWidgetH handle);
C_EXPORT void QWidget_overrideWindowFlags(QWidgetH handle, unsigned int type);
C_EXPORT Qt::WindowType QWidget_windowType(QWidgetH handle);
C_EXPORT QWidgetH QWidget_find(WId AnonParam1);
C_EXPORT QWidgetH QWidget_childAt(QWidgetH handle, int x, int y);
C_EXPORT QWidgetH QWidget_childAt2(QWidgetH handle, const QPointH p);
C_EXPORT void QWidget_setAttribute(QWidgetH handle, Qt::WidgetAttribute AnonParam1, bool on);
C_EXPORT bool QWidget_testAttribute(QWidgetH handle, Qt::WidgetAttribute AnonParam1);
C_EXPORT QPaintEngineH QWidget_paintEngine(QWidgetH handle);
C_EXPORT void QWidget_ensurePolished(QWidgetH handle);
C_EXPORT bool QWidget_isAncestorOf(QWidgetH handle, const QWidgetH child);
C_EXPORT bool QWidget_autoFillBackground(QWidgetH handle);
C_EXPORT void QWidget_setAutoFillBackground(QWidgetH handle, bool enabled);
C_EXPORT QBackingStoreH QWidget_backingStore(QWidgetH handle);
C_EXPORT QWindowH QWidget_windowHandle(QWidgetH handle);
C_EXPORT QWidgetH QWidget_createWindowContainer(QWindowH window, QWidgetH parent, unsigned int flags);
C_EXPORT void QWidget_inputMethodQuery(QWidgetH handle, QVariantH retval, Qt::InputMethodQuery AnonParam1);
C_EXPORT unsigned int QWidget_inputMethodHints(QWidgetH handle);
C_EXPORT void QWidget_setInputMethodHints(QWidgetH handle, unsigned int hints);
C_EXPORT QPaintDeviceH QWidget_to_QPaintDevice(QWidgetH handle);
C_EXPORT QScreenH QWidget_screen(QWidgetH handle);
C_EXPORT void QWidget_setScreen(QWidgetH handle, QScreenH screen);
C_EXPORT void QWidget_setWindowFlag(QWidgetH handle, Qt::WindowType flag, bool on);
C_EXPORT bool QWidget_hasTabletTracking(QWidgetH handle);
C_EXPORT void QWidget_setTabletTracking(QWidgetH handle, bool enable);
C_EXPORT int QWidget_toolTipDuration(QWidgetH handle);
C_EXPORT void QWidget_setToolTipDuration(QWidgetH handle, int msec);


#endif
