struct sin_list;

int sin_ip4_icmp_taste(struct sin_pkt *pkt);
int sin_ip4_icmp_repl_taste(struct sin_pkt *pkt);
void sin_ip4_icmp_req2rpl(struct sin_pkt *pkt);
void sin_ip4_icmp_debug(struct sin_pkt *pkt);
void sin_ip4_icmp_proc(struct sin_list *pl, void *arg);
