/* Copyright (C) 2018 Ernestas Kulik <ernestask@gnome.org>
 *
 * This file is part of libnautilus-extension.
 *
 * libnautilus-extension is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * libnautilus-extension is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libnautilus-extension.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef NAUTILUS_EXTENSION_H
#define NAUTILUS_EXTENSION_H

#include <libnautilus-extension/nautilus-column-provider.h>
#include <libnautilus-extension/nautilus-column.h>
#include <libnautilus-extension/nautilus-extension-enum-types.h>
#include <libnautilus-extension/nautilus-file-info.h>
#include <libnautilus-extension/nautilus-info-provider.h>
#include <libnautilus-extension/nautilus-location-widget-provider.h>
#include <libnautilus-extension/nautilus-menu.h>
#include <libnautilus-extension/nautilus-menu-provider.h>
#include <libnautilus-extension/nautilus-property-page.h>
#include <libnautilus-extension/nautilus-property-page-provider.h>

/**
 * SECTION:nautilus-extension
 * @title: Extension entry points
 */

void nautilus_module_initialize (GTypeModule  *module);
void nautilus_module_shutdown   (void);
void nautilus_module_list_types (const GType **types,
                                 int          *num_types);

#endif