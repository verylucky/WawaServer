//
// Created by junling on 2017/9/1.
//

#ifndef WAWA_HANDLER_H
#define WAWA_HANDLER_H

struct Pkg;
struct Channel;

int handle_register_client_req(Pkg &pkg);
int handle_stream_data_ntf(Pkg &pkg);
int handle_choose_server_req(Pkg &pkg);
int response_pkg(Pkg &pkg);
int handle_remote_to_raspi_req(Pkg &pkg);

#endif //WAWA_HANDLER_H
