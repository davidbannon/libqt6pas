//******************************************************************************
//  Copyright (c) 2005-2022 by Jan Van hijfte, Željan Rikalo
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qprinterinfo_c.h"

QPrinterInfoH QPrinterInfo_Create()
{
	return (QPrinterInfoH) new QPrinterInfo();
}

void QPrinterInfo_Destroy(QPrinterInfoH handle)
{
	delete (QPrinterInfo *)handle;
}

QPrinterInfoH QPrinterInfo_Create2(const QPrinterInfoH other)
{
	return (QPrinterInfoH) new QPrinterInfo(*(const QPrinterInfo*)other);
}

QPrinterInfoH QPrinterInfo_Create3(const QPrinterH printer)
{
	return (QPrinterInfoH) new QPrinterInfo(*(const QPrinter*)printer);
}

void QPrinterInfo_printerName(QPrinterInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinterInfo *)handle)->printerName();
	copyQStringToPWideString(t_retval, retval);
}

void QPrinterInfo_description(QPrinterInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinterInfo *)handle)->description();
	copyQStringToPWideString(t_retval, retval);
}

void QPrinterInfo_location(QPrinterInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinterInfo *)handle)->location();
	copyQStringToPWideString(t_retval, retval);
}

void QPrinterInfo_makeAndModel(QPrinterInfoH handle, PWideString retval)
{
	QString t_retval;
	t_retval = ((QPrinterInfo *)handle)->makeAndModel();
	copyQStringToPWideString(t_retval, retval);
}

bool QPrinterInfo_isNull(QPrinterInfoH handle)
{
	return (bool) ((QPrinterInfo *)handle)->isNull();
}

bool QPrinterInfo_isDefault(QPrinterInfoH handle)
{
	return (bool) ((QPrinterInfo *)handle)->isDefault();
}

void QPrinterInfo_supportedPageSizes(QPrinterInfoH handle, PPtrIntArray retval)
{
	QList<QPageSize> t_retval;
	t_retval = ((QPrinterInfo *)handle)->supportedPageSizes();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}


QPrinter::ColorMode QPrinterInfo_defaultColorMode(QPrinterInfoH handle)
{
  return (QPrinter::ColorMode) ((QPrinterInfo *)handle)->defaultColorMode();
}

QPrinter::DuplexMode QPrinterInfo_defaultDuplexMode(QPrinterInfoH handle)
{
  return (QPrinter::DuplexMode) ((QPrinterInfo *)handle)->defaultDuplexMode();
}

void QPrinterInfo_defaultPageSize(QPrinterInfoH handle, QPageSizeH retval)
{
  *(QPageSize*)retval = ((QPrinterInfo *)handle)->defaultPageSize();
}

bool QPrinterInfo_isRemote(QPrinterInfoH handle)
{
  return (bool) ((QPrinterInfo *)handle)->isRemote();
}

void QPrinterInfo_maximumPhysicalPageSize(QPrinterInfoH handle, QPageSizeH retval)
{
  *(QPageSize*)retval = ((QPrinterInfo *)handle)->maximumPhysicalPageSize();
}

void QPrinterInfo_minimumPhysicalPageSize(QPrinterInfoH handle, QPageSizeH retval)
{
  *(QPageSize*)retval = ((QPrinterInfo *)handle)->minimumPhysicalPageSize();
}

QPrinter::PrinterState QPrinterInfo_state(QPrinterInfoH handle)
{
  return (QPrinter::PrinterState) ((QPrinterInfo *)handle)->state();
}

void QPrinterInfo_supportedColorModes(QPrinterInfoH handle, PPtrIntArray retval)
{
  QList<QPrinter::ColorMode> t_retval;
  t_retval = ((QPrinterInfo *)handle)->supportedColorModes();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

void QPrinterInfo_supportedDuplexModes(QPrinterInfoH handle, PPtrIntArray retval)
{
  QList<QPrinter::DuplexMode> t_retval;
  t_retval = ((QPrinterInfo *)handle)->supportedDuplexModes();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

void QPrinterInfo_supportedResolutions(QPrinterInfoH handle, PPtrIntArray retval)
{
  QList<int> t_retval;
  t_retval = ((QPrinterInfo *)handle)->supportedResolutions();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}


void QPrinterInfo_defaultPrinterName(PWideString retval)
{
	QString t_retval;
	t_retval = QPrinterInfo::defaultPrinterName();
	copyQStringToPWideString(t_retval, retval);
}


void QPrinterInfo_availablePrinters(PPtrIntArray retval)
{
	QList<QPrinterInfo> t_retval;
	t_retval = QPrinterInfo::availablePrinters();
	copyQListTemplateToPtrIntArrayWithNew(t_retval, retval);
}

void QPrinterInfo_availablePrinterNames(QStringListH retval)
{
  *(QStringList *)retval = QPrinterInfo::availablePrinterNames();
}

void QPrinterInfo_defaultPrinter(QPrinterInfoH retval)
{
	*(QPrinterInfo *)retval = QPrinterInfo::defaultPrinter();
}

void QPrinterInfo_printerInfo(QPrinterInfoH retval, PWideString printerName)
{
	QString t_printerName;
	copyPWideStringToQString(printerName, t_printerName);
	*(QPrinterInfo *)retval = QPrinterInfo::printerInfo(t_printerName);
}

