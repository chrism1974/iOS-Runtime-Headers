/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class PLPacketDecoder, PLProcessPortMap;

@interface PLNetworkLogger : PLLogger {
    struct ifmibdata_supplemental { 
        struct if_traffic_class { 
            unsigned long long ifi_ibepackets; 
            unsigned long long ifi_ibebytes; 
            unsigned long long ifi_obepackets; 
            unsigned long long ifi_obebytes; 
            unsigned long long ifi_ibkpackets; 
            unsigned long long ifi_ibkbytes; 
            unsigned long long ifi_obkpackets; 
            unsigned long long ifi_obkbytes; 
            unsigned long long ifi_ivipackets; 
            unsigned long long ifi_ivibytes; 
            unsigned long long ifi_ovipackets; 
            unsigned long long ifi_ovibytes; 
            unsigned long long ifi_ivopackets; 
            unsigned long long ifi_ivobytes; 
            unsigned long long ifi_ovopackets; 
            unsigned long long ifi_ovobytes; 
            unsigned long long ifi_ipvpackets; 
            unsigned long long ifi_ipvbytes; 
            unsigned long long ifi_opvpackets; 
            unsigned long long ifi_opvbytes; 
        } ifmd_traffic_class; 
        struct if_data_extended { 
            unsigned long long ifi_alignerrs; 
            unsigned long long ifi_dt_bytes; 
            unsigned long long ifi_fpackets; 
            unsigned long long ifi_fbytes; 
            unsigned long long reserved[12]; 
        } ifmd_data_extended; 
        struct if_packet_stats { 
            unsigned long long ifi_tcp_badformat; 
            unsigned long long ifi_tcp_unspecv6; 
            unsigned long long ifi_tcp_synfin; 
            unsigned long long ifi_tcp_badformatipsec; 
            unsigned long long ifi_tcp_noconnnolist; 
            unsigned long long ifi_tcp_noconnlist; 
            unsigned long long ifi_tcp_listbadsyn; 
            unsigned long long ifi_tcp_icmp6unreach; 
            unsigned long long ifi_tcp_deprecate6; 
            unsigned long long ifi_tcp_rstinsynrcv; 
            unsigned long long ifi_tcp_ooopacket; 
            unsigned long long ifi_tcp_dospacket; 
            unsigned long long ifi_tcp_cleanup; 
            unsigned long long ifi_tcp_synwindow; 
            unsigned long long reserved[6]; 
            unsigned long long ifi_udp_port_unreach; 
            unsigned long long ifi_udp_faithprefix; 
            unsigned long long ifi_udp_port0; 
            unsigned long long ifi_udp_badlength; 
            unsigned long long ifi_udp_badchksum; 
            unsigned long long ifi_udp_badmcast; 
            unsigned long long ifi_udp_cleanup; 
            unsigned long long ifi_udp_badipsec; 
            unsigned long long _reserved[4]; 
        } ifmd_packet_stats; 
        struct if_rxpoll_stats { 
            unsigned int ifi_poll_off_req; 
            unsigned int ifi_poll_off_err; 
            unsigned int ifi_poll_on_req; 
            unsigned int ifi_poll_on_err; 
            unsigned int ifi_poll_wakeups_avg; 
            unsigned int ifi_poll_wakeups_lowat; 
            unsigned int ifi_poll_wakeups_hiwat; 
            unsigned long long ifi_poll_packets; 
            unsigned int ifi_poll_packets_avg; 
            unsigned int ifi_poll_packets_min; 
            unsigned int ifi_poll_packets_max; 
            unsigned int ifi_poll_packets_lowat; 
            unsigned int ifi_poll_packets_hiwat; 
            unsigned long long ifi_poll_bytes; 
            unsigned int ifi_poll_bytes_avg; 
            unsigned int ifi_poll_bytes_min; 
            unsigned int ifi_poll_bytes_max; 
            unsigned int ifi_poll_bytes_lowat; 
            unsigned int ifi_poll_bytes_hiwat; 
            unsigned int ifi_poll_packets_limit; 
            unsigned long long ifi_poll_interval_time; 
        } ifmd_rxpoll_stats; 
    } ifmsupp;
    int mib[6];
    unsigned long miblen;
    PLPacketDecoder *packetDecoder;
    PLProcessPortMap *portMap;
    double prevNetworkTrafficIn;
    double prevNetworkTrafficOut;
    long prevTime;
}

- (void)dealloc;
- (void)deviceGotPacket:(id)arg1;
- (void)deviceWillSleep:(id)arg1;
- (void)handleNetworkUsageRequest:(id)arg1;
- (id)init;
- (void)log;
- (void)logNetworkSupplementalStatsForInterface:(char *)arg1;
- (void)logProcessInformationWithPort:(unsigned short)arg1;
- (id)networkUsageEntry;

@end
