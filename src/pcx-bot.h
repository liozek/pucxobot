/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2019  Neil Roberts
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
 */

#ifndef PCX_BOT_H
#define PCX_BOT_H

#include "pcx-error.h"

extern struct pcx_error_domain
pcx_bot_error;

enum pcx_bot_error {
        PCX_BOT_ERROR_CONFIG
};

struct pcx_bot;

struct pcx_bot *
pcx_bot_new(struct pcx_error **error);

void
pcx_bot_free(struct pcx_bot *bot);

#endif /* PCX_BOT_H */