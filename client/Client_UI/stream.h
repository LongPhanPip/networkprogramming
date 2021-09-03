#pragma once
#include <winsock2.h>
#include <ws2tcpip.h>
#include "constant.h"

#pragma comment(lib, "ws2_32.lib")

/* Socket to connect to server
    * @param	client_socket   socket
    * @param	port_number	    portnumber
    * @param	ip_address      ip of the server
    
*/
class Socket {
public:
    SOCKET client_socket;
    int port_number;
    char ip_address[INET_ADDRSTRLEN];

    Socket();
    Socket(int port_number, char* ip_address);
    ~Socket();

    /* Set timeout for socket
        * @param	time   [IN]    number of time
        * @return NULL
    */
    void set_timeout(int time);
    
    /* request to connect to server
        * @return result_code
    */
    int connect_to_server();
    
    /* Send data to server
        * @param	code      [IN]    code of the packet
        * @param	payload   [IN]    data to send to server
        * @return result_code
    */
    int tcp_send(char* code, char* payload);
    
    /* Receive data from server
        * @param	code      [IN]    code of the packet
        * @param	payload   [IN]    data to send to server
        * @return result_code
    */
    int tcp_receive(char*code, char* payload);
    
    int Receive(char *buffer);
};

