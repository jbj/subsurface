// SPDX-License-Identifier: GPL-2.0

#include "core/connectionlistmodel.h"

ConnectionListModel::ConnectionListModel(QObject *parent) :
	QAbstractListModel(parent)
{
}

QVariant ConnectionListModel::data(const QModelIndex &index, int role) const
{
	if (index.row() < 0 || index.row() >= m_addresses.count())
		return QVariant();
	if (role != Qt::DisplayRole)
		return QVariant();
	return m_addresses[index.row()];
}

int ConnectionListModel::rowCount(const QModelIndex&) const
{
	return m_addresses.count();
}

void ConnectionListModel::addAddress(const QString address)
{
	if (!m_addresses.contains(address)) {
		beginInsertRows(QModelIndex(), rowCount(), rowCount());
		m_addresses.append(address);
		endInsertRows();
	}
}

void ConnectionListModel::removeAllAddresses()
{
	beginRemoveRows(QModelIndex(), 0, rowCount());
	m_addresses.clear();
	endRemoveRows();
}

int ConnectionListModel::indexOf(QString address)
{
	const QRegExp re(".*" + address + ".*", Qt::CaseInsensitive);
	return m_addresses.indexOf(re);
}
