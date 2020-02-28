#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../utils/log.h"
#include "../gateway/gateway.h"
#include "../game_stype.h"
#include "cener_config.h"

int main(int argc, char** argv) {
	init_log();
	LOGINFO("center server starting !!!!!\n");
	init_server_gateway(WEB_SOCKET_IO, JSON_PROTOCAL);
	// init_server_gateway(WEB_SOCKET_IO, BIN_PROTOCAL);
	// init_server_gateway(TCP_SOCKET_IO, BIN_PROTOCAL);
	// init_server_gateway(TCP_SOCKET_IO, JSON_PROTOCAL);
	// ע������ģ��;
	// end
	start_server(CENTER_CONF.ip, CENTER_CONF.port);
	exit_server_gateway(); 

	return 0;
}
