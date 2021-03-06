/* Copyright 2020 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#define PRODUCT_ID 0xE851 // E8.5 Hotswap
#define PRODUCT E8.5 Hotswap PCB

#define BACKLIGHT_PIN B6
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 6
#define FORCE_NKRO
#define BACKLIGHT_CAPS_LOCK

// these two features are disabled for Link Time Optimization to work
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
