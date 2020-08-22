/*
*   This file is part of Anemone3DS
*   Copyright (C) 2016-2018 Contributors in CONTRIBUTORS.md
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

#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "draw.h"
#include "colors.h"

Instructions_s normal_instructions[MODE_AMOUNT] = {
    {
        .info_line = NULL,
        .instructions = {
            {
                "\uE000 按住以安装",
                "\uE001 随机播放主题"
            },
            {
                "\uE002 按住获取更多",
                "\uE003 预览主题"
            },
            {
                "\uE004 切换至开机动画",
                "\uE005 扫描二维码"
            },
            {
                "退出",
                "从SD卡中删除"
            }
        }
    },
    {
        .info_line = NULL,
        .instructions = {
            {
                "\uE000 安装开机动画",
                "\uE001 删除已安装的动画"
            },
            {
                "\uE002 按住获取更多",
                "\uE003 预览开启动画"
            },
            {
                "\uE004 切换至主题",
                "\uE005 扫描二维码"
            },
            {
                "退出",
                "从SD卡中删除"
            }
        }
    }
};

Instructions_s install_instructions = {
    .info_line = "放开 \uE000 取消或按住 \uE006 并放开 \uE000 来安装",
    .instructions = {
        {
            "\uE079 普通安装",
            "\uE07A 随机安装"
        },
        {
            "\uE07B 只安装BGM",
            "\uE07C 只安装主题图片"
        },
        {
            NULL,
            NULL
        },
        {
            "退出",
            NULL
        }
    }
};

Instructions_s extra_instructions[3] = {
    {
        .info_line = "放开 \uE002 取消或按住 \uE006 并放开 \uE002 来安装",
        .instructions = {
            {
                "\uE079 按名称排序",
                "\uE07A 按作者排序"
            },
            {
                "\uE07B 按文件名称排序",
                NULL
            },
            {
                NULL,
                NULL
            },
            {
                "退出",
                NULL
            }
        }
    },
    {
        .info_line = "Release \uE002 to cancel or hold \uE006 and release \uE002 to do stuff",
        .instructions = {
            {
                "\uE079 Jump in the list",
                "\uE07A Reload broken icons"
            },
            {
                "\uE07B Browse ThemePlaza",
                NULL,
            },
            {
                "\uE004 Sorting menu",
                NULL
            },
            {
                "Exit",
                NULL
            }
        }
    },
};

#endif