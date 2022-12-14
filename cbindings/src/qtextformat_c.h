//******************************************************************************
//  Copyright (c) 2005-2022 by Jan Van hijfte, Željan Rikalo
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QTEXTFORMAT_C_H
#define QTEXTFORMAT_C_H

#include <QtGui>
#include "pascalbind.h"

C_EXPORT QTextLengthH QTextLength_Create();
C_EXPORT void QTextLength_Destroy(QTextLengthH handle);
C_EXPORT QTextLengthH QTextLength_Create2(QTextLength::Type type, qreal value);
C_EXPORT QTextLength::Type QTextLength_type(QTextLengthH handle);
C_EXPORT qreal QTextLength_value(QTextLengthH handle, qreal maximumLength);
C_EXPORT qreal QTextLength_rawValue(QTextLengthH handle);
C_EXPORT QTextFormatH QTextFormat_Create();
C_EXPORT void QTextFormat_Destroy(QTextFormatH handle);
C_EXPORT QTextFormatH QTextFormat_Create2(int type);
C_EXPORT QTextFormatH QTextFormat_Create3(const QTextFormatH rhs);
C_EXPORT void QTextFormat_swap(QTextFormatH handle, QTextFormatH other);
C_EXPORT void QTextFormat_merge(QTextFormatH handle, const QTextFormatH other);
C_EXPORT bool QTextFormat_isEmpty(QTextFormatH handle);
C_EXPORT bool QTextFormat_isValid(QTextFormatH handle);
C_EXPORT int QTextFormat_type(QTextFormatH handle);
C_EXPORT int QTextFormat_objectIndex(QTextFormatH handle);
C_EXPORT void QTextFormat_setObjectIndex(QTextFormatH handle, int object);
C_EXPORT void QTextFormat_property(QTextFormatH handle, QVariantH retval, int propertyId);
C_EXPORT void QTextFormat_setProperty(QTextFormatH handle, int propertyId, const QVariantH value);
C_EXPORT void QTextFormat_clearProperty(QTextFormatH handle, int propertyId);
C_EXPORT bool QTextFormat_hasProperty(QTextFormatH handle, int propertyId);
C_EXPORT bool QTextFormat_boolProperty(QTextFormatH handle, int propertyId);
C_EXPORT int QTextFormat_intProperty(QTextFormatH handle, int propertyId);
C_EXPORT qreal QTextFormat_doubleProperty(QTextFormatH handle, int propertyId);
C_EXPORT void QTextFormat_stringProperty(QTextFormatH handle, PWideString retval, int propertyId);
C_EXPORT void QTextFormat_colorProperty(QTextFormatH handle, PQColor retval, int propertyId);
C_EXPORT void QTextFormat_penProperty(QTextFormatH handle, QPenH retval, int propertyId);
C_EXPORT void QTextFormat_brushProperty(QTextFormatH handle, QBrushH retval, int propertyId);
C_EXPORT void QTextFormat_lengthProperty(QTextFormatH handle, QTextLengthH retval, int propertyId);
C_EXPORT int QTextFormat_propertyCount(QTextFormatH handle);
C_EXPORT void QTextFormat_setObjectType(QTextFormatH handle, int type);
C_EXPORT int QTextFormat_objectType(QTextFormatH handle);
C_EXPORT bool QTextFormat_isCharFormat(QTextFormatH handle);
C_EXPORT bool QTextFormat_isBlockFormat(QTextFormatH handle);
C_EXPORT bool QTextFormat_isListFormat(QTextFormatH handle);
C_EXPORT bool QTextFormat_isFrameFormat(QTextFormatH handle);
C_EXPORT bool QTextFormat_isImageFormat(QTextFormatH handle);
C_EXPORT bool QTextFormat_isTableFormat(QTextFormatH handle);
C_EXPORT bool QTextFormat_isTableCellFormat(QTextFormatH handle);
C_EXPORT void QTextFormat_toBlockFormat(QTextFormatH handle, QTextBlockFormatH retval);
C_EXPORT void QTextFormat_toCharFormat(QTextFormatH handle, QTextCharFormatH retval);
C_EXPORT void QTextFormat_toListFormat(QTextFormatH handle, QTextListFormatH retval);
C_EXPORT void QTextFormat_toTableFormat(QTextFormatH handle, QTextTableFormatH retval);
C_EXPORT void QTextFormat_toFrameFormat(QTextFormatH handle, QTextFrameFormatH retval);
C_EXPORT void QTextFormat_toImageFormat(QTextFormatH handle, QTextImageFormatH retval);
C_EXPORT void QTextFormat_toTableCellFormat(QTextFormatH handle, QTextTableCellFormatH retval);
C_EXPORT void QTextFormat_setLayoutDirection(QTextFormatH handle, Qt::LayoutDirection direction);
C_EXPORT Qt::LayoutDirection QTextFormat_layoutDirection(QTextFormatH handle);
C_EXPORT void QTextFormat_setBackground(QTextFormatH handle, const QBrushH brush);
C_EXPORT void QTextFormat_background(QTextFormatH handle, QBrushH retval);
C_EXPORT void QTextFormat_clearBackground(QTextFormatH handle);
C_EXPORT void QTextFormat_setForeground(QTextFormatH handle, const QBrushH brush);
C_EXPORT void QTextFormat_foreground(QTextFormatH handle, QBrushH retval);
C_EXPORT void QTextFormat_clearForeground(QTextFormatH handle);

C_EXPORT QTextCharFormatH QTextCharFormat_Create();
C_EXPORT void QTextCharFormat_Destroy(QTextCharFormatH handle);
C_EXPORT bool QTextCharFormat_isValid(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFont(QTextCharFormatH handle, const QFontH font, QTextCharFormat::FontPropertiesInheritanceBehavior behavior);
C_EXPORT void QTextCharFormat_font(QTextCharFormatH handle, QFontH retval);
C_EXPORT void QTextCharFormat_setFontFamily(QTextCharFormatH handle, PWideString family);
C_EXPORT void QTextCharFormat_fontFamily(QTextCharFormatH handle, PWideString retval);
C_EXPORT void QTextCharFormat_setFontPointSize(QTextCharFormatH handle, qreal size);
C_EXPORT qreal QTextCharFormat_fontPointSize(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontWeight(QTextCharFormatH handle, int weight);
C_EXPORT int QTextCharFormat_fontWeight(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontItalic(QTextCharFormatH handle, bool italic);
C_EXPORT bool QTextCharFormat_fontItalic(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontCapitalization(QTextCharFormatH handle, QFont::Capitalization capitalization);
C_EXPORT QFont::Capitalization QTextCharFormat_fontCapitalization(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontLetterSpacingType(QTextCharFormatH handle, QFont::SpacingType letterSpacingType);
C_EXPORT QFont::SpacingType QTextCharFormat_fontLetterSpacingType(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontLetterSpacing(QTextCharFormatH handle, qreal spacing);
C_EXPORT qreal QTextCharFormat_fontLetterSpacing(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontWordSpacing(QTextCharFormatH handle, qreal spacing);
C_EXPORT qreal QTextCharFormat_fontWordSpacing(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontUnderline(QTextCharFormatH handle, bool underline);
C_EXPORT bool QTextCharFormat_fontUnderline(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontOverline(QTextCharFormatH handle, bool overline);
C_EXPORT bool QTextCharFormat_fontOverline(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontStrikeOut(QTextCharFormatH handle, bool strikeOut);
C_EXPORT bool QTextCharFormat_fontStrikeOut(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setUnderlineColor(QTextCharFormatH handle, const QColorH color);
C_EXPORT void QTextCharFormat_underlineColor(QTextCharFormatH handle, PQColor retval);
C_EXPORT void QTextCharFormat_setFontFixedPitch(QTextCharFormatH handle, bool fixedPitch);
C_EXPORT bool QTextCharFormat_fontFixedPitch(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontStretch(QTextCharFormatH handle, int factor);
C_EXPORT int QTextCharFormat_fontStretch(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontStyleHint(QTextCharFormatH handle, QFont::StyleHint hint, QFont::StyleStrategy strategy);
C_EXPORT void QTextCharFormat_setFontStyleStrategy(QTextCharFormatH handle, QFont::StyleStrategy strategy);
C_EXPORT QFont::StyleHint QTextCharFormat_fontStyleHint(QTextCharFormatH handle);
C_EXPORT QFont::StyleStrategy QTextCharFormat_fontStyleStrategy(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontHintingPreference(QTextCharFormatH handle, QFont::HintingPreference hintingPreference);
C_EXPORT QFont::HintingPreference QTextCharFormat_fontHintingPreference(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setFontKerning(QTextCharFormatH handle, bool enable);
C_EXPORT bool QTextCharFormat_fontKerning(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setUnderlineStyle(QTextCharFormatH handle, QTextCharFormat::UnderlineStyle style);
C_EXPORT QTextCharFormat::UnderlineStyle QTextCharFormat_underlineStyle(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setVerticalAlignment(QTextCharFormatH handle, QTextCharFormat::VerticalAlignment alignment);
C_EXPORT QTextCharFormat::VerticalAlignment QTextCharFormat_verticalAlignment(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setTextOutline(QTextCharFormatH handle, const QPenH pen);
C_EXPORT void QTextCharFormat_textOutline(QTextCharFormatH handle, QPenH retval);
C_EXPORT void QTextCharFormat_setToolTip(QTextCharFormatH handle, PWideString tip);
C_EXPORT void QTextCharFormat_toolTip(QTextCharFormatH handle, PWideString retval);
C_EXPORT void QTextCharFormat_setAnchor(QTextCharFormatH handle, bool anchor);
C_EXPORT bool QTextCharFormat_isAnchor(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setAnchorHref(QTextCharFormatH handle, PWideString value);
C_EXPORT void QTextCharFormat_anchorHref(QTextCharFormatH handle, PWideString retval);
C_EXPORT void QTextCharFormat_setAnchorNames(QTextCharFormatH handle, const QStringListH names);
C_EXPORT void QTextCharFormat_anchorNames(QTextCharFormatH handle, QStringListH retval);
C_EXPORT void QTextCharFormat_setTableCellRowSpan(QTextCharFormatH handle, int tableCellRowSpan);
C_EXPORT int QTextCharFormat_tableCellRowSpan(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setTableCellColumnSpan(QTextCharFormatH handle, int tableCellColumnSpan);
C_EXPORT int QTextCharFormat_tableCellColumnSpan(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_fontFamilies(QTextCharFormatH handle, QStringListH retval);
C_EXPORT void QTextCharFormat_setFontFamilies(QTextCharFormatH handle, QStringListH families);
C_EXPORT void QTextCharFormat_fontStyleName(QTextCharFormatH handle, QStringListH retval);
C_EXPORT void QTextCharFormat_setFontStyleName(QTextCharFormatH handle, QStringH styleName);
C_EXPORT qreal QTextCharFormat_baselineOffset(QTextCharFormatH handle, qreal baseline);
C_EXPORT void QTextCharFormat_setBaselineOffset(QTextCharFormatH handle, qreal baseline);
C_EXPORT qreal QTextCharFormat_subScriptBaseline(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setSubScriptBaseline(QTextCharFormatH handle, qreal baseline);
C_EXPORT qreal QTextCharFormat_superScriptBaseline(QTextCharFormatH handle);
C_EXPORT void QTextCharFormat_setSuperScriptBaseline(QTextCharFormatH handle, qreal baseline);


C_EXPORT QTextBlockFormatH QTextBlockFormat_Create();
C_EXPORT void QTextBlockFormat_Destroy(QTextBlockFormatH handle);
C_EXPORT bool QTextBlockFormat_isValid(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setAlignment(QTextBlockFormatH handle, Qt::Alignment alignment);
C_EXPORT Qt::Alignment QTextBlockFormat_alignment(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setTopMargin(QTextBlockFormatH handle, qreal margin);
C_EXPORT qreal QTextBlockFormat_topMargin(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setBottomMargin(QTextBlockFormatH handle, qreal margin);
C_EXPORT qreal QTextBlockFormat_bottomMargin(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setLeftMargin(QTextBlockFormatH handle, qreal margin);
C_EXPORT qreal QTextBlockFormat_leftMargin(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setRightMargin(QTextBlockFormatH handle, qreal margin);
C_EXPORT qreal QTextBlockFormat_rightMargin(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setTextIndent(QTextBlockFormatH handle, qreal aindent);
C_EXPORT qreal QTextBlockFormat_textIndent(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setIndent(QTextBlockFormatH handle, int indent);
C_EXPORT int QTextBlockFormat_indent(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setLineHeight(QTextBlockFormatH handle, qreal height, int heightType);
C_EXPORT qreal QTextBlockFormat_lineHeight(QTextBlockFormatH handle, qreal scriptLineHeight, qreal scaling);
C_EXPORT qreal QTextBlockFormat_lineHeight2(QTextBlockFormatH handle);
C_EXPORT int QTextBlockFormat_lineHeightType(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setNonBreakableLines(QTextBlockFormatH handle, bool b);
C_EXPORT bool QTextBlockFormat_nonBreakableLines(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setPageBreakPolicy(QTextBlockFormatH handle, QTextFormat::PageBreakFlags flags);
C_EXPORT QTextFormat::PageBreakFlags QTextBlockFormat_pageBreakPolicy(QTextBlockFormatH handle);
C_EXPORT int QTextBlockFormat_headingLevel(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setHeadingLevel(QTextBlockFormatH handle, int level);
C_EXPORT QTextBlockFormat::MarkerType QTextBlockFormat_marker(QTextBlockFormatH handle);
C_EXPORT void QTextBlockFormat_setMarker(QTextBlockFormatH handle, QTextBlockFormat::MarkerType marker);

C_EXPORT QTextListFormatH QTextListFormat_Create();
C_EXPORT void QTextListFormat_Destroy(QTextListFormatH handle);
C_EXPORT bool QTextListFormat_isValid(QTextListFormatH handle);
C_EXPORT void QTextListFormat_setStyle(QTextListFormatH handle, QTextListFormat::Style style);
C_EXPORT QTextListFormat::Style QTextListFormat_style(QTextListFormatH handle);
C_EXPORT void QTextListFormat_setIndent(QTextListFormatH handle, int indent);
C_EXPORT int QTextListFormat_indent(QTextListFormatH handle);
C_EXPORT void QTextListFormat_setNumberPrefix(QTextListFormatH handle, PWideString numberPrefix);
C_EXPORT void QTextListFormat_numberPrefix(QTextListFormatH handle, PWideString retval);
C_EXPORT void QTextListFormat_setNumberSuffix(QTextListFormatH handle, PWideString numberSuffix);
C_EXPORT void QTextListFormat_numberSuffix(QTextListFormatH handle, PWideString retval);

C_EXPORT QTextImageFormatH QTextImageFormat_Create();
C_EXPORT void QTextImageFormat_Destroy(QTextImageFormatH handle);
C_EXPORT bool QTextImageFormat_isValid(QTextImageFormatH handle);
C_EXPORT void QTextImageFormat_setName(QTextImageFormatH handle, PWideString name);
C_EXPORT void QTextImageFormat_name(QTextImageFormatH handle, PWideString retval);
C_EXPORT void QTextImageFormat_setWidth(QTextImageFormatH handle, qreal width);
C_EXPORT qreal QTextImageFormat_width(QTextImageFormatH handle);
C_EXPORT void QTextImageFormat_setHeight(QTextImageFormatH handle, qreal height);
C_EXPORT qreal QTextImageFormat_height(QTextImageFormatH handle);
C_EXPORT int QTextImageFormat_quality(QTextImageFormatH handle);
C_EXPORT void QTextImageFormat_setQuality(QTextImageFormatH handle, int quality);

C_EXPORT QTextFrameFormatH QTextFrameFormat_Create();
C_EXPORT void QTextFrameFormat_Destroy(QTextFrameFormatH handle);
C_EXPORT bool QTextFrameFormat_isValid(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setPosition(QTextFrameFormatH handle, QTextFrameFormat::Position f);
C_EXPORT QTextFrameFormat::Position QTextFrameFormat_position(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setBorder(QTextFrameFormatH handle, qreal border);
C_EXPORT qreal QTextFrameFormat_border(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setBorderBrush(QTextFrameFormatH handle, const QBrushH brush);
C_EXPORT void QTextFrameFormat_borderBrush(QTextFrameFormatH handle, QBrushH retval);
C_EXPORT void QTextFrameFormat_setBorderStyle(QTextFrameFormatH handle, QTextFrameFormat::BorderStyle style);
C_EXPORT QTextFrameFormat::BorderStyle QTextFrameFormat_borderStyle(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setMargin(QTextFrameFormatH handle, qreal margin);
C_EXPORT qreal QTextFrameFormat_margin(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setTopMargin(QTextFrameFormatH handle, qreal margin);
C_EXPORT qreal QTextFrameFormat_topMargin(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setBottomMargin(QTextFrameFormatH handle, qreal margin);
C_EXPORT qreal QTextFrameFormat_bottomMargin(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setLeftMargin(QTextFrameFormatH handle, qreal margin);
C_EXPORT qreal QTextFrameFormat_leftMargin(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setRightMargin(QTextFrameFormatH handle, qreal margin);
C_EXPORT qreal QTextFrameFormat_rightMargin(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setPadding(QTextFrameFormatH handle, qreal padding);
C_EXPORT qreal QTextFrameFormat_padding(QTextFrameFormatH handle);
C_EXPORT void QTextFrameFormat_setWidth(QTextFrameFormatH handle, qreal width);
C_EXPORT void QTextFrameFormat_setWidth2(QTextFrameFormatH handle, const QTextLengthH length);
C_EXPORT void QTextFrameFormat_width(QTextFrameFormatH handle, QTextLengthH retval);
C_EXPORT void QTextFrameFormat_setHeight(QTextFrameFormatH handle, qreal height);
C_EXPORT void QTextFrameFormat_setHeight2(QTextFrameFormatH handle, const QTextLengthH height);
C_EXPORT void QTextFrameFormat_height(QTextFrameFormatH handle, QTextLengthH retval);
C_EXPORT void QTextFrameFormat_setPageBreakPolicy(QTextFrameFormatH handle, unsigned int flags);
C_EXPORT unsigned int QTextFrameFormat_pageBreakPolicy(QTextFrameFormatH handle);

C_EXPORT QTextTableFormatH QTextTableFormat_Create();
C_EXPORT void QTextTableFormat_Destroy(QTextTableFormatH handle);
C_EXPORT bool QTextTableFormat_isValid(QTextTableFormatH handle);
C_EXPORT int QTextTableFormat_columns(QTextTableFormatH handle);
C_EXPORT void QTextTableFormat_setColumns(QTextTableFormatH handle, int columns);
C_EXPORT void QTextTableFormat_clearColumnWidthConstraints(QTextTableFormatH handle);
C_EXPORT qreal QTextTableFormat_cellSpacing(QTextTableFormatH handle);
C_EXPORT void QTextTableFormat_setCellSpacing(QTextTableFormatH handle, qreal spacing);
C_EXPORT qreal QTextTableFormat_cellPadding(QTextTableFormatH handle);
C_EXPORT void QTextTableFormat_setCellPadding(QTextTableFormatH handle, qreal padding);
C_EXPORT void QTextTableFormat_setAlignment(QTextTableFormatH handle, Qt::Alignment alignment);
C_EXPORT Qt::Alignment QTextTableFormat_alignment(QTextTableFormatH handle);
C_EXPORT void QTextTableFormat_setHeaderRowCount(QTextTableFormatH handle, int count);
C_EXPORT int QTextTableFormat_headerRowCount(QTextTableFormatH handle);
C_EXPORT bool QTextTableFormat_borderCollapse(QTextTableFormatH handle);
C_EXPORT void QTextTableFormat_setBorderCollapse(QTextTableFormatH handle, bool borderCollapse);

C_EXPORT QTextTableCellFormatH QTextTableCellFormat_Create();
C_EXPORT void QTextTableCellFormat_Destroy(QTextTableCellFormatH handle);
C_EXPORT bool QTextTableCellFormat_isValid(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setTopPadding(QTextTableCellFormatH handle, qreal padding);
C_EXPORT qreal QTextTableCellFormat_topPadding(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setBottomPadding(QTextTableCellFormatH handle, qreal padding);
C_EXPORT qreal QTextTableCellFormat_bottomPadding(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setLeftPadding(QTextTableCellFormatH handle, qreal padding);
C_EXPORT qreal QTextTableCellFormat_leftPadding(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setRightPadding(QTextTableCellFormatH handle, qreal padding);
C_EXPORT qreal QTextTableCellFormat_rightPadding(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setPadding(QTextTableCellFormatH handle, qreal padding);

C_EXPORT void QTextTableCellFormat_setBorder(QTextTableCellFormatH handle, qreal width);
C_EXPORT void QTextTableCellFormat_setBorderBrush(QTextTableCellFormatH handle, QBrushH brush);
C_EXPORT void QTextTableCellFormat_setBorderStyle(QTextTableCellFormatH handle, QTextFrameFormat::BorderStyle style);

C_EXPORT qreal QTextTableCellFormat_bottomBorder(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_bottomBorderBrush(QTextTableCellFormatH handle, QBrushH retval);
C_EXPORT QTextFrameFormat::BorderStyle QTextTableCellFormat_bottomBorderStyle(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setBottomBorder(QTextTableCellFormatH handle, qreal width);
C_EXPORT void QTextTableCellFormat_setBottomBorderBrush(QTextTableCellFormatH handle, QBrushH brush);
C_EXPORT void QTextTableCellFormat_setBottomBorderStyle(QTextTableCellFormatH handle, QTextFrameFormat::BorderStyle style);

C_EXPORT qreal QTextTableCellFormat_leftBorder(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_leftBorderBrush(QTextTableCellFormatH handle, QBrushH retval);
C_EXPORT QTextFrameFormat::BorderStyle QTextTableCellFormat_leftBorderStyle(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setLeftBorder(QTextTableCellFormatH handle, qreal width);
C_EXPORT void QTextTableCellFormat_setLeftBorderBrush(QTextTableCellFormatH handle, QBrushH brush);
C_EXPORT void QTextTableCellFormat_setLeftBorderStyle(QTextTableCellFormatH handle, QTextFrameFormat::BorderStyle style);

C_EXPORT qreal QTextTableCellFormat_rightBorder(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_rightBorderBrush(QTextTableCellFormatH handle, QBrushH retval);
C_EXPORT QTextFrameFormat::BorderStyle QTextTableCellFormat_rightBorderStyle(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setRightBorder(QTextTableCellFormatH handle, qreal width);
C_EXPORT void QTextTableCellFormat_setRightBorderBrush(QTextTableCellFormatH handle, QBrushH brush);
C_EXPORT void QTextTableCellFormat_setRightBorderStyle(QTextTableCellFormatH handle, QTextFrameFormat::BorderStyle style);

C_EXPORT qreal QTextTableCellFormat_topBorder(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_topBorderBrush(QTextTableCellFormatH handle, QBrushH retval);
C_EXPORT QTextFrameFormat::BorderStyle QTextTableCellFormat_topBorderStyle(QTextTableCellFormatH handle);
C_EXPORT void QTextTableCellFormat_setTopBorder(QTextTableCellFormatH handle, qreal width);
C_EXPORT void QTextTableCellFormat_setTopBorderBrush(QTextTableCellFormatH handle, QBrushH brush);
C_EXPORT void QTextTableCellFormat_setTopBorderStyle(QTextTableCellFormatH handle, QTextFrameFormat::BorderStyle style);

#endif
