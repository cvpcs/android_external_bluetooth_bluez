/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2006-2007  Nokia Corporation
 *  Copyright (C) 2004-2008  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifdef __cplusplus
extern "C" {
#endif

typedef void* a2dpData;

int a2dp_init(int rate, int channels, a2dpData* dataPtr);
void a2dp_set_sink(a2dpData data, const char* address);
int a2dp_write(a2dpData data, const void* buffer, int count);
int a2dp_stop(a2dpData data);
void a2dp_cleanup(a2dpData data);

#ifdef SHADOW_HARDWARE
// stubs for motorola shadow-based hardware (DX/D2/etc)
void a2dp_reconfigure(int codec, uint32_t bitrate, int rate, int channels, a2dpData d);
int a2dp_get_codec_supported(a2dpData d, int codec);
#endif //SHADOW_HARDWARE

#ifdef __cplusplus
}
#endif
