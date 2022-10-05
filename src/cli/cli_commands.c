/*
 * SPDX-FileCopyrightText: 2021 Kyunghwan Kwon <k@mononn.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include "cli_commands.h"

const struct cli_cmd cli_commands[] = {
	{"exit", cli_cmd_exit, "Exit the CLI" },
	{"help", cli_cmd_help, "List available commands" },
	{"info", cli_cmd_info, "info [version|sn|build] to get device info" },
	{"reboot", cli_cmd_reboot, "Reboot the device" },
	{"md", cli_cmd_memdump, "md <addr> <len>" },
	{"wifi", cli_cmd_wifi, "wifi [scan|connect|disconnect] <ssid> <pass>" },
	{"test", cli_cmd_test, "test [mqtt]" },
};

const size_t cli_commands_len = sizeof(cli_commands) / sizeof(*cli_commands);
