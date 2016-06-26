#include <stdio.h>
#include <netlink/netlink.h>


static struct nl_sock *sk;

int main() {
	printf("Hello, world.\n");
        /* Allocate a new socket */
        sk = nl_socket_alloc();
	nl_socket_free(sk);
	return 0;
}
