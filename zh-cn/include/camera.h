/*
*   This file is part of Anemone3DS
*   Copyright (C) 2016-2020 Contributors in CONTRIBUTORS.md
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
// This File is From Theopse (Self@theopse.org)
// Licensed under GPL v3
// File:	camera.h (Anemone3DS-i18n-zh/zh-cn/include/camera.h)
// Content:	(None)
// Copyright (c) 2020 Theopse Organization All rights reserved
// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

#ifndef CAMERA_H
#define CAMERA_H

#include "common.h"

typedef struct {
    //C2D_Image image;

    //C3D_Tex *tex;
    //Handle mutex;
    //volatile bool finished;
    //volatile bool closed;
    //volatile bool success;
    //Handle cancel;
    //Handle started;

    //bool capturing;
    
    u16* camera_buffer;

    Handle event_stop;
    Thread cam_thread, ui_thread;

    LightEvent event_cam_info, event_ui_info;

    CondVar cond;
    LightLock mut;
    u32 num_readers_active;
    bool writer_waiting;
    bool writer_active;

    bool any_update;
    
    
    struct quirc* context;
} qr_data;

bool init_qr(void);
/*void exit_qr(qr_data *data);
void take_picture(void);*/

#endif
