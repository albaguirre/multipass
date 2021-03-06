/*
 * Copyright (C) 2017 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_UTILS_H
#define MULTIPASS_UTILS_H

#include <string>
#include <vector>

#include <QDir>
#include <QString>

namespace multipass
{
namespace utils
{
enum class QuoteType
{
    no_quotes,
    quote_every_arg
};

QDir base_dir(const QString& path);
bool valid_memory_value(const QString& mem_string);
bool valid_hostname(const QString& name_string);
std::string to_cmd(const std::vector<std::string>& args, QuoteType type);
}
}
#endif // MULTIPASS_UTILS_H
