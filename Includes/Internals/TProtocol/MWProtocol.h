#pragma once

#include "ProtocolBase.h"


//////////////////////////////////////////////////////////////////////
// TWorldSvr message Protocol

#define MW_CONNECT_ACK						(MW_BASE + 0x0001)
// WORD wServerID
// BYTE bCount
// {
// BYTE bChannel
// }
// ==============================================
// Remark wServerID
// ==============================================
// wServerID = MAKEWORD( bServerID, bServerType)

#define MW_ADDCHAR_ACK						(MW_BASE + 0x0002)
// DWORD dwCharID
// DWORD dwKEY
// DWORD dwIPAddr
// WORD wPort
// DWORD dwUserID

#define MW_CHARDATA_REQ						(MW_BASE + 0x0003)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key

#define MW_CHARDATA_ACK						(MW_BASE + 0x0004)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key
// WORD wMapID			: Map ID
// FLOAT fPosX			: Pos X
// FLOAT fPosY			: Pos Y
// FLOAT fPosZ			: Pos Z

#define MW_ENTERCHAR_REQ					(MW_BASE + 0x0005)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key
// STRING strNAME		: Char Name
// WORD wMapID			: Map ID
// FLOAT fPosX			: Pos X
// FLOAT fPosY			: Pos Y
// FLOAT fPosZ			: Pos Z
// BYTE bMain			: If TRUE, Main map server

#define MW_ENTERCHAR_ACK					(MW_BASE + 0x0006)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key

#define MW_ENTERSVR_REQ						(MW_BASE + 0x0007)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key

#define MW_ENTERSVR_ACK						(MW_BASE + 0x0008)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key
// BYTE bLogout			: Logout flag
// BYTE bSave			: Save flag
// BYTE bResult			: enum TCONNECT_RESULT value

#define MW_INVALIDCHAR_REQ					(MW_BASE + 0x0009)
// DWORD dwCharID
// DWORD dwKEY

#define MW_CONRESULT_REQ					(MW_BASE + 0x000A)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key
// BYTE bResult			: enum TCONNECT_RESULT value

#define MW_CLOSECHAR_REQ					(MW_BASE + 0x000B)
// DWORD dwCharID
// DWORD dwKEY

#define MW_CLOSECHAR_ACK					(MW_BASE + 0x000C)
// DWORD dwCharID
// DWORD dwKEY

#define MW_DELCHAR_REQ						(MW_BASE + 0x000D)
// DWORD dwCharID		: Char ID
// DWORD dwKEY			: Enter key
// BYTE bLogout			: Logout flag
// BYTE bSave			: Save flag

#define MW_CHARINFO_REQ						(MW_BASE + 0x000E)
// DWORD dwCharID
// DWORD dwKEY

#define MW_ROUTE_REQ						(MW_BASE + 0x000F)
// DWORD dwCharID
// DWORD dwKEY

#define MW_ROUTE_ACK						(MW_BASE + 0x0010)
// DWORD dwCharID
// DWORD dwKEY
// BYTE bCount
// {
// DWORD dwIPAddr
// WORD wPort
// BYTE bServerID
// }

#define MW_ADDCONNECT_REQ					(MW_BASE + 0x0011)
// DWORD dwCharID
// DWORD dwKEY
// BYTE bCount
// {
// DWORD dwIPAddr
// WORD wPort
// BYTE bServerID
// }

#define MW_MAPSVRLIST_REQ					(MW_BASE + 0x0012)
// DWORD dwCharID
// DWORD dwKEY

#define MW_MAPSVRLIST_ACK					(MW_BASE + 0x0013)
// DWORD dwCharID
// DWORD dwKEY
// BYTE bCount
// {
// BYTE bServerID
// }

#define MW_ROUTELIST_REQ					(MW_BASE + 0x0014)
// DWORD dwCharID
// DWORD dwKEY
// BYTE bCount
// {
// BYTE bServerID
// }

#define MW_RELEASEMAIN_REQ					(MW_BASE + 0x0016)
// DWORD dwCharID
// DWORD dwKEY

#define MW_RELEASEMAIN_ACK					(MW_BASE + 0x0017)
// DWORD dwCharID
// DWORD dwKEY

#define MW_PARTYADD_REQ						(MW_BASE + 0x0018)
// STRING strRequestID
// STRING strTargetID

#define MW_PARTYADD_ACK						(MW_BASE + 0x0019)
// DWORD TargetID,
// DWORD TargetKEY,
// STRING strRequestID,
// STRING strTargetID,
// BYTE	Result

#define MW_PARTYJOIN_REQ					(MW_BASE + 0x0020)
#define MW_PARTYJOIN_ACK					(MW_BASE + 0x0021)
#define MW_PARTYDEL_REQ						(MW_BASE + 0x0022)
#define MW_PARTYDEL_ACK						(MW_BASE + 0x0023)
#define MW_PARTYMANSTAT_REQ					(MW_BASE + 0x0024)
#define MW_PARTYMANSTAT_ACK					(MW_BASE + 0x0025)

#define MW_LEVELUP_REQ						(MW_BASE + 0x0026)
#define MW_LEVELUP_ACK						(MW_BASE + 0x0027)

#define MW_GUILDESTABLISH_REQ				(MW_BASE + 0x002A)
#define MW_GUILDESTABLISH_ACK				(MW_BASE + 0x002B)
#define MW_GUILDDISORGANIZATION_REQ			(MW_BASE + 0x002C)
#define MW_GUILDDISORGANIZATION_ACK			(MW_BASE + 0x002D)
#define MW_GUILDINVITE_REQ					(MW_BASE + 0x002E)
#define MW_GUILDINVITE_ACK					(MW_BASE + 0x002F)
#define MW_GUILDINVITEANSWER_ACK			(MW_BASE + 0x0030)
#define MW_GUILDJOIN_REQ					(MW_BASE + 0x0031)
#define MW_GUILDLEAVE_REQ					(MW_BASE + 0x0032)
#define MW_GUILDLEAVE_ACK					(MW_BASE + 0x0033)
#define MW_GUILDDUTY_REQ					(MW_BASE + 0x0034)
#define MW_GUILDDUTY_ACK					(MW_BASE + 0x0035)
#define MW_GUILDPEER_REQ					(MW_BASE + 0x0036)
#define MW_GUILDPEER_ACK					(MW_BASE + 0x0037)
#define MW_GUILDINFO_REQ					(MW_BASE + 0x0038)
#define MW_GUILDINFO_ACK					(MW_BASE + 0x0039)
#define MW_GUILDKICKOUT_ACK					(MW_BASE + 0x003A)
#define MW_GUILDMEMBERLIST_REQ				(MW_BASE + 0x003B)
#define MW_GUILDMEMBERLIST_ACK				(MW_BASE + 0x003C)

#define MW_CHAT_REQ							(MW_BASE + 0x003D)
#define MW_CHAT_ACK							(MW_BASE + 0x003E)

#define MW_RESETCONNECTION_REQ				(MW_BASE + 0x0040)
#define MW_RESETCONNECTION_ACK				(MW_BASE + 0x0041)
#define MW_MONSTERDIE_REQ					(MW_BASE + 0x0042)
#define MW_MONSTERDIE_ACK					(MW_BASE + 0x0043)
#define MW_TAKEMONMONEY_REQ					(MW_BASE + 0x0044)
#define MW_TAKEMONMONEY_ACK					(MW_BASE + 0x0045)
#define MW_ADDITEM_REQ						(MW_BASE + 0x0046)
#define MW_ADDITEM_ACK						(MW_BASE + 0x0047)
#define MW_PARTYORDERTAKEITEM_REQ			(MW_BASE + 0x0048)
#define MW_PARTYORDERTAKEITEM_ACK			(MW_BASE + 0x0049)
#define MW_PARTYATTR_REQ					(MW_BASE + 0x004A)

#define MW_FRIENDASK_REQ					(MW_BASE + 0x0050)
#define MW_FRIENDASK_ACK					(MW_BASE + 0x0051)
#define MW_FRIENDADD_REQ					(MW_BASE + 0x0052)
#define MW_FRIENDREPLY_ACK					(MW_BASE + 0x0053)
#define MW_FRIENDERASE_REQ					(MW_BASE + 0x0054)
#define MW_FRIENDERASE_ACK					(MW_BASE + 0x0055)
#define MW_FRIENDLIST_REQ					(MW_BASE + 0x0056)
#define MW_FRIENDREGION_REQ					(MW_BASE + 0x0057)
#define MW_FRIENDCONNECTION_REQ				(MW_BASE + 0x0058)

#define MW_FRIENDGROUPMAKE_REQ				(MW_BASE + 0x0059)
#define MW_FRIENDGROUPMAKE_ACK				(MW_BASE + 0x005A)
#define MW_FRIENDGROUPDELETE_REQ			(MW_BASE + 0x005B)
#define MW_FRIENDGROUPDELETE_ACK			(MW_BASE + 0x005C)
#define MW_FRIENDGROUPCHANGE_REQ			(MW_BASE + 0x005D)
#define MW_FRIENDGROUPCHANGE_ACK			(MW_BASE + 0x005E)
#define MW_FRIENDGROUPNAME_REQ				(MW_BASE + 0x005F)
#define MW_FRIENDGROUPNAME_ACK				(MW_BASE + 0x0060)

#define MW_ADDITEMRESULT_REQ				(MW_BASE + 0x0061)
#define MW_ADDITEMRESULT_ACK				(MW_BASE + 0x0062)
#define MW_CHARSTATINFO_REQ					(MW_BASE + 0x0063)
#define MW_CHARSTATINFO_ACK					(MW_BASE + 0x0064)
#define MW_CHARSTATINFOANS_REQ				(MW_BASE + 0x0065)
#define MW_CHARSTATINFOANS_ACK				(MW_BASE + 0x0066)

#define MW_LOCALENABLE_REQ					(MW_BASE + 0x0067)
#define MW_LOCALENABLE_ACK					(MW_BASE + 0x0068)
#define MW_LOCALOCCUPY_REQ					(MW_BASE + 0x0069)
#define MW_LOCALOCCUPY_ACK					(MW_BASE + 0x006A)

#define MW_CORPSASK_REQ						(MW_BASE + 0x006B)
#define MW_CORPSASK_ACK						(MW_BASE + 0x006C)
#define MW_CORPSREPLY_REQ					(MW_BASE + 0x006D)
#define MW_CORPSREPLY_ACK					(MW_BASE + 0x006E)
#define MW_CORPSJOIN_REQ					(MW_BASE + 0x006F)
#define MW_ADDSQUAD_REQ						(MW_BASE + 0x0070)
#define MW_DELSQUAD_REQ						(MW_BASE + 0x0071)
#define MW_CORPSLEAVE_ACK					(MW_BASE + 0x0072)
#define MW_DELCORPSUNIT_REQ					(MW_BASE + 0x0073)
#define MW_ADDCORPSUNIT_REQ					(MW_BASE + 0x0074)
#define MW_CORPSCMD_REQ						(MW_BASE + 0x0075)

#define MW_TMSSEND_ACK						(MW_BASE + 0x0076)
#define MW_TMSRECV_REQ						(MW_BASE + 0x0077)
#define MW_TMSINVITE_REQ					(MW_BASE + 0x0078)
#define MW_TMSINVITE_ACK					(MW_BASE + 0x0079)
#define MW_TMSOUT_REQ						(MW_BASE + 0x007A)
#define MW_TMSOUT_ACK						(MW_BASE + 0x007B)

#define MW_POSTRECV_REQ						(MW_BASE + 0x007C)
#define MW_POSTRECV_ACK						(MW_BASE + 0x007D)
#define MW_CASTLEENABLE_REQ					(MW_BASE + 0x007E)
#define MW_CASTLEENABLE_ACK					(MW_BASE + 0x007F)
#define MW_CASTLEAPPLY_REQ					(MW_BASE + 0x0080)
#define MW_CASTLEAPPLY_ACK					(MW_BASE + 0x0081)
#define MW_CASTLEJOIN_REQ					(MW_BASE + 0x0082)
#define MW_CASTLEJOIN_ACK					(MW_BASE + 0x0083)
#define MW_CASTLEINFO_REQ					(MW_BASE + 0x0084)
#define MW_CASTLEOCCUPY_REQ					(MW_BASE + 0x0085)
#define MW_CASTLEOCCUPY_ACK					(MW_BASE + 0x0086)
#define MW_MONTEMPT_REQ						(MW_BASE + 0x0087)
#define MW_MONTEMPT_ACK						(MW_BASE + 0x0088)
#define MW_GETBLOOD_REQ						(MW_BASE + 0x0089)
#define MW_GETBLOOD_ACK						(MW_BASE + 0x008A)

#define MW_PROTECTEDCHECK_ACK				(MW_BASE + 0x008B)
#define MW_FRIENDPROTECTEDASK_ACK			(MW_BASE + 0x008D)

#define MW_ENEMYPOS_REQ						(MW_BASE + 0x0090)
#define MW_ENEMYPOS_ACK						(MW_BASE + 0x0091)

#define MW_CORPSCMD_ACK						(MW_BASE + 0x0092)
#define MW_CORPSENEMYLIST_REQ				(MW_BASE + 0x0093)
#define MW_CORPSENEMYLIST_ACK				(MW_BASE + 0x0094)
#define MW_MOVECORPSENEMY_REQ				(MW_BASE + 0x0095)
#define MW_MOVECORPSENEMY_ACK				(MW_BASE + 0x0096)
#define MW_MOVECORPSUNIT_REQ				(MW_BASE + 0x0097)
#define MW_MOVECORPSUNIT_ACK				(MW_BASE + 0x0098)
#define MW_ADDCORPSENEMY_REQ				(MW_BASE + 0x0099)
#define MW_ADDCORPSENEMY_ACK				(MW_BASE + 0x009A)
#define MW_DELCORPSENEMY_REQ				(MW_BASE + 0x009B)
#define MW_DELCORPSENEMY_ACK				(MW_BASE + 0x009C)
#define MW_CORPSHP_REQ						(MW_BASE + 0x009D)
#define MW_CORPSHP_ACK						(MW_BASE + 0x009E)
#define MW_PARTYMOVE_REQ					(MW_BASE + 0x009F)
#define MW_PARTYMOVE_ACK					(MW_BASE + 0x00A0)

#define MW_CHGPARTYCHIEF_ACK				(MW_BASE + 0x00A1)
#define MW_CHGPARTYCHIEF_REQ				(MW_BASE + 0x00A2)
#define MW_CHGCORPSCOMMANDER_ACK			(MW_BASE + 0x00A3)
#define MW_CHGCORPSCOMMANDER_REQ			(MW_BASE + 0x00A4)
#define MW_REPORTENEMYLIST_REQ				(MW_BASE + 0x00A5)
#define MW_CHGSQUADCHIEF_REQ				(MW_BASE + 0x00A6)

#define MW_DEALITEMASK_REQ					(MW_BASE + 0x00A7)
#define MW_DEALITEMASK_ACK					(MW_BASE + 0x00A8)
#define MW_DEALITEMRLY_REQ					(MW_BASE + 0x00A9)
#define MW_DEALITEMRLY_ACK					(MW_BASE + 0x00AA)
#define MW_DEALITEMADD_REQ					(MW_BASE + 0x00AB)
#define MW_DEALITEMADD_ACK					(MW_BASE + 0x00AC)
#define MW_DEALITEMERROR_REQ				(MW_BASE + 0x00AD)
#define MW_DEALITEMERROR_ACK				(MW_BASE + 0x00AE)
#define MW_DEALITEM_REQ						(MW_BASE + 0x00AF)
#define MW_DEALITEM_ACK						(MW_BASE + 0x00B0)
#define MW_MAGICMIRROR_REQ					(MW_BASE + 0x00B5)
#define MW_MAGICMIRROR_ACK					(MW_BASE + 0x00B6)
#define MW_CREATERECALLMON_REQ				(MW_BASE + 0x00B8)
#define MW_CREATERECALLMON_ACK				(MW_BASE + 0x00B9)
#define MW_RECALLMONDEL_REQ					(MW_BASE + 0x00BA)
#define MW_RECALLMONDEL_ACK					(MW_BASE + 0x00BB)
#define MW_REGION_ACK						(MW_BASE + 0x00BC)
#define MW_TELEPORT_REQ						(MW_BASE + 0x00BD)
#define MW_TELEPORT_ACK						(MW_BASE + 0x00BE)
#define MW_CONLIST_REQ						(MW_BASE + 0x00BF)
#define MW_CONLIST_ACK						(MW_BASE + 0x00C0)
#define MW_ENTERSOLOMAP_REQ					(MW_BASE + 0x00C1)
#define MW_ENTERSOLOMAP_ACK					(MW_BASE + 0x00C2)
#define MW_LEAVESOLOMAP_ACK					(MW_BASE + 0x00C3)
#define MW_CHECKMAIN_REQ					(MW_BASE + 0x00C4)
#define MW_CHECKMAIN_ACK					(MW_BASE + 0x00C5)
#define MW_USERPOSITION_REQ					(MW_BASE + 0x00C6)
#define MW_BEGINTELEPORT_ACK				(MW_BASE + 0x00C7)
#define MW_STARTTELEPORT_REQ				(MW_BASE + 0x00C8)
#define MW_CHECKCONNECT_ACK					(MW_BASE + 0x00C9)

#define MW_CHGPARTYTYPE_REQ					(MW_BASE + 0x00CA)
#define MW_CHGPARTYTYPE_ACK					(MW_BASE + 0x00CB)

#define MW_TMSINVITEASK_REQ					(MW_BASE + 0x00CC)
#define MW_TMSINVITEASK_ACK					(MW_BASE + 0x00CD)
#define MW_PETRIDING_REQ					(MW_BASE + 0x00CE)
#define MW_PETRIDING_ACK					(MW_BASE + 0x00CF)

/*		< ��� �߰� >		*/
#define MW_GUILDCABINETLIST_REQ				(MW_BASE + 0x00D0)
#define MW_GUILDCABINETLIST_ACK				(MW_BASE + 0x00D1)

#define MW_GUILDCABINETPUTIN_REQ			(MW_BASE + 0x00D2)
#define MW_GUILDCABINETPUTIN_ACK			(MW_BASE + 0x00D3)

#define MW_GUILDCABINETTAKEOUT_REQ			(MW_BASE + 0x00D4)
#define MW_GUILDCABINETTAKEOUT_ACK			(MW_BASE + 0x00D5)

#define MW_GUILDCONTRIBUTION_REQ			(MW_BASE + 0x00D6)
#define MW_GUILDCONTRIBUTION_ACK			(MW_BASE + 0x00D7)

#define MW_GUILDARTICLELIST_REQ				(MW_BASE + 0x00D8)
#define MW_GUILDARTICLELIST_ACK				(MW_BASE + 0x00D9)

#define MW_GUILDARTICLEADD_REQ				(MW_BASE + 0x00DA)
#define MW_GUILDARTICLEADD_ACK				(MW_BASE + 0x00DB)

#define MW_GUILDARTICLEDEL_REQ				(MW_BASE + 0x00DC)
#define MW_GUILDARTICLEDEL_ACK				(MW_BASE + 0x00DD)

#define MW_GUILDFAME_REQ					(MW_BASE + 0x00DE)
#define MW_GUILDFAME_ACK					(MW_BASE + 0x00DF)
#define MW_GUILDARTICLEUPDATE_REQ			(MW_BASE + 0x00E0)
#define MW_GUILDARTICLEUPDATE_ACK			(MW_BASE + 0x00E1)
#define MW_GUILDWANTEDADD_REQ				(MW_BASE + 0x00E2)
#define MW_GUILDWANTEDADD_ACK				(MW_BASE + 0x00E3)
#define MW_GUILDWANTEDDEL_REQ				(MW_BASE + 0x00E4)
#define MW_GUILDWANTEDDEL_ACK				(MW_BASE + 0x00E5)
#define MW_GUILDWANTEDLIST_REQ				(MW_BASE + 0x00E6)
#define MW_GUILDWANTEDLIST_ACK				(MW_BASE + 0x00E7)
#define MW_GUILDVOLUNTEERING_REQ			(MW_BASE + 0x00E8)
#define MW_GUILDVOLUNTEERING_ACK			(MW_BASE + 0x00E9)
#define MW_GUILDVOLUNTEERINGDEL_REQ			(MW_BASE + 0x00EA)
#define MW_GUILDVOLUNTEERINGDEL_ACK			(MW_BASE + 0x00EB)
#define MW_GUILDVOLUNTEERLIST_REQ			(MW_BASE + 0x00EC)
#define MW_GUILDVOLUNTEERLIST_ACK			(MW_BASE + 0x00ED)
#define MW_GUILDVOLUNTEERREPLY_REQ			(MW_BASE + 0x00EE)
#define MW_GUILDVOLUNTEERREPLY_ACK			(MW_BASE + 0x00EF)
#define MW_GUILDTACTICSWANTEDADD_REQ		(MW_BASE + 0x00F0)
#define MW_GUILDTACTICSWANTEDADD_ACK		(MW_BASE + 0x00F1)
#define MW_GUILDTACTICSWANTEDDEL_REQ		(MW_BASE + 0x00F2)
#define MW_GUILDTACTICSWANTEDDEL_ACK		(MW_BASE + 0x00F3)
#define MW_GUILDTACTICSWANTEDLIST_REQ		(MW_BASE + 0x00F4)
#define MW_GUILDTACTICSWANTEDLIST_ACK		(MW_BASE + 0x00F5)
#define MW_GUILDTACTICSVOLUNTEERING_REQ		(MW_BASE + 0x00F6)
#define MW_GUILDTACTICSVOLUNTEERING_ACK		(MW_BASE + 0x00F7)
#define MW_GUILDTACTICSVOLUNTEERINGDEL_REQ	(MW_BASE + 0x00F8)
#define MW_GUILDTACTICSVOLUNTEERINGDEL_ACK	(MW_BASE + 0x00F9)
#define MW_GUILDTACTICSVOLUNTEERLIST_REQ	(MW_BASE + 0x00FA)
#define MW_GUILDTACTICSVOLUNTEERLIST_ACK	(MW_BASE + 0x00FB)
#define MW_GUILDTACTICSREPLY_REQ			(MW_BASE + 0x00FC)
#define MW_GUILDTACTICSREPLY_ACK			(MW_BASE + 0x00FD)
#define MW_GUILDTACTICSKICKOUT_REQ			(MW_BASE + 0x00FE)
#define MW_GUILDTACTICSKICKOUT_ACK			(MW_BASE + 0x00FF)

///////////////////////////////////////////////////////////////////
#define MW_EVENTQUARTER_REQ					(MW_BASE + 0x0100)

#define MW_HELMETHIDE_REQ					(MW_BASE + 0x0101)
#define MW_HELMETHIDE_ACK					(MW_BASE + 0x0102)

#define MW_PARTYMEMBERRECALL_REQ			(MW_BASE + 0x0103)
#define MW_PARTYMEMBERRECALL_ACK			(MW_BASE + 0x0104)

#define MW_SOULMATE_REQ						(MW_BASE + 0x0105)
#define MW_SOULMATE_ACK						(MW_BASE + 0x0106)
#define MW_SOULMATESEARCH_REQ				(MW_BASE + 0x0107)
#define MW_SOULMATESEARCH_ACK				(MW_BASE + 0x0108)
#define MW_SOULMATEREG_REQ					(MW_BASE + 0x0109)
#define MW_SOULMATEREG_ACK					(MW_BASE + 0x010A)
#define MW_SOULMATEEND_REQ					(MW_BASE + 0x010B)
#define MW_SOULMATEEND_ACK					(MW_BASE + 0x010C)
#define MW_SOULMATEDEL_REQ					(MW_BASE + 0x010D)
#define MW_SOULMATEDEL_ACK					(MW_BASE + 0x010E)
#define MW_CASTLEWARINFO_REQ				(MW_BASE + 0x010F)
#define MW_CASTLEWARINFO_ACK				(MW_BASE + 0x0110)
#define MW_ENDWAR_REQ						(MW_BASE + 0x0111)
#define MW_ENDWAR_ACK						(MW_BASE + 0x0112)

#define MW_PARTYMEMBERRECALLANS_REQ			(MW_BASE + 0x0113)
#define MW_PARTYMEMBERRECALLANS_ACK			(MW_BASE + 0x0114)

#define MW_CHATBAN_REQ						(MW_BASE + 0x0115)  
#define MW_CHATBAN_ACK						(MW_BASE + 0x0116)  
#define MW_RECALLMONDATA_REQ				(MW_BASE + 0x0117)
#define MW_RECALLMONDATA_ACK				(MW_BASE + 0x0118)
#define MW_CHANGECHARBASE_REQ				(MW_BASE + 0x0119)
#define MW_CHANGECHARBASE_ACK				(MW_BASE + 0x011A)
#define MW_HEROSELECT_REQ					(MW_BASE + 0x011B) 
#define MW_HEROSELECT_ACK					(MW_BASE + 0x011C) 
#define MW_RELAYCONNECT_REQ					(MW_BASE + 0x011D)
#define MW_CHARMSG_REQ						(MW_BASE + 0x011E)

#define MW_ITEMSTATE_REQ					(MW_BASE + 0x011F)
#define MW_GAINPVPPOINT_REQ					(MW_BASE + 0x0120)
#define MW_GAINPVPPOINT_ACK					(MW_BASE + 0x0121)
#define MW_LOCALRECORD_ACK					(MW_BASE + 0x0122)
#define MW_GUILDPOINTLOG_REQ				(MW_BASE + 0x0123)
#define MW_GUILDPOINTLOG_ACK				(MW_BASE + 0x0124)
#define MW_GUILDPOINTREWARD_REQ				(MW_BASE + 0x0125)
#define MW_GUILDPOINTREWARD_ACK				(MW_BASE + 0x0126)
#define MW_GUILDPVPRECORD_REQ				(MW_BASE + 0x0127)
#define MW_GUILDPVPRECORD_ACK				(MW_BASE + 0x0128)
#define MW_GUILDPOINTTAKE_REQ				(MW_BASE + 0x0129)
#define MW_MONSTERBUY_REQ					(MW_BASE + 0x012A)
#define MW_MONSTERBUY_ACK					(MW_BASE + 0x012B)
#define MW_GUILDMONEYRECOVER_ACK			(MW_BASE + 0x012C)
#define MW_CASTLEGUILDCHG_REQ				(MW_BASE + 0x012D)
#define MW_FRIENDLIST_ACK					(MW_BASE + 0x012E)

#define MW_EVENTUPDATE_REQ					(MW_BASE + 0x012F)
#define MW_EVENTUPDATE_ACK					(MW_BASE + 0x0130)
#define MW_EVENTMSG_REQ						(MW_BASE + 0x0131)
#define MW_CASHSHOPSTOP_REQ					(MW_BASE + 0x0132)
#define MW_CASHITEMSALE_REQ					(MW_BASE + 0x0133)
#define MW_CASHITEMSALE_ACK					(MW_BASE + 0x0134)

#define MW_GUILDTACTICSINVITE_REQ			(MW_BASE + 0x0135)
#define MW_GUILDTACTICSINVITE_ACK			(MW_BASE + 0x0136)
#define MW_GUILDTACTICSANSWER_REQ			(MW_BASE + 0x0137)
#define MW_GUILDTACTICSANSWER_ACK			(MW_BASE + 0x0138)
#define MW_GUILDTACTICSLIST_REQ				(MW_BASE + 0x0139)
#define MW_GUILDTACTICSLIST_ACK				(MW_BASE + 0x013A)

#define MW_WORLDPOSTSEND_REQ				(MW_BASE + 0x013B)
#define MW_CASTLEAPPLICANTCOUNT_REQ			(MW_BASE + 0x013C)

#define MW_MONTHRANKUPDATE_REQ				(MW_BASE + 0x013D)
#define MW_MONTHRANKUPDATE_ACK				(MW_BASE + 0x013E)
#define MW_MONTHRANKLIST_REQ				(MW_BASE + 0x013F)
#define MW_MONTHRANKRESET_REQ				(MW_BASE + 0x0140)
#define MW_WARLORDSAY_REQ					(MW_BASE + 0x0141)
#define MW_WARLORDSAY_ACK					(MW_BASE + 0x0142)
#define MW_FIRSTGRADEGROUP_REQ				(MW_BASE + 0x0143)

#define MW_TOURNAMENTENABLE_REQ				(MW_BASE + 0x0144)
#define MW_TOURNAMENT_REQ					(MW_BASE + 0x0145)
#define MW_TOURNAMENT_ACK					(MW_BASE + 0x0146)

#define MW_TOURNAMENTAPPLYINFO_REQ			(MW_BASE + 0x0147)
#define MW_TOURNAMENTAPPLYINFO_ACK			(MW_BASE + 0x0148)
#define MW_TOURNAMENTAPPLY_REQ				(MW_BASE + 0x0149)
#define MW_TOURNAMENTAPPLY_ACK				(MW_BASE + 0x014A)
#define MW_TOURNAMENTJOINLIST_REQ			(MW_BASE + 0x014B)
#define MW_TOURNAMENTJOINLIST_ACK			(MW_BASE + 0x014C)
#define MW_TOURNAMENTPARTYLIST_REQ			(MW_BASE + 0x014D)
#define MW_TOURNAMENTPARTYLIST_ACK			(MW_BASE + 0x014E)
#define MW_TOURNAMENTPARTYADD_REQ			(MW_BASE + 0x014F)
#define MW_TOURNAMENTPARTYADD_ACK			(MW_BASE + 0x0150)
#define MW_TOURNAMENTMATCHLIST_REQ			(MW_BASE + 0x0151)
#define MW_TOURNAMENTMATCHLIST_ACK			(MW_BASE + 0x0152)
#define MW_TOURNAMENTEVENTLIST_REQ			(MW_BASE + 0x0153)
#define MW_TOURNAMENTEVENTLIST_ACK			(MW_BASE + 0x0154)
#define MW_TOURNAMENTEVENTINFO_REQ			(MW_BASE + 0x0155)
#define MW_TOURNAMENTEVENTINFO_ACK			(MW_BASE + 0x0156)
#define MW_TOURNAMENTEVENTJOIN_REQ			(MW_BASE + 0x0157)
#define MW_TOURNAMENTEVENTJOIN_ACK			(MW_BASE + 0x0158)
#define MW_TOURNAMENTMATCH_REQ				(MW_BASE + 0x0159)
#define MW_TOURNAMENTINFO_REQ				(MW_BASE + 0x015A)
#define MW_TOURNAMENTENTERGATE_ACK			(MW_BASE + 0x015B)
#define MW_TOURNAMENTRESULT_REQ				(MW_BASE + 0x015C)
#define MW_TOURNAMENTRESULT_ACK				(MW_BASE + 0x015D)
#define MW_TOURNAMENTPARTYDEL_ACK			(MW_BASE + 0x015E)
#define MW_TOURNAMENTSCHEDULE_REQ			(MW_BASE + 0x015F)
#define MW_TOURNAMENTSCHEDULE_ACK			(MW_BASE + 0x0160)
#define MW_TOURNAMENTBATPOINT_REQ			(MW_BASE + 0x0161)
#define MW_TERMINATE_REQ					(MW_BASE + 0x0162)
#define MW_TERMINATE_ACK					(MW_BASE + 0x0163)
#define MW_HELPMESSAGE_REQ					(MW_BASE + 0x0164)
#define MW_MISSIONENABLE_REQ				(MW_BASE + 0x0165)
#define MW_MISSIONOCCUPY_REQ				(MW_BASE + 0x0166)
#define MW_MISSIONOCCUPY_ACK				(MW_BASE + 0x0167)
#define MW_EVENTMSGLOTTERY_REQ				(MW_BASE + 0x0168)
#define MW_FAMERANKUPDATE_REQ				(MW_BASE + 0x0169)
#define MW_FAMERANKUPDATE_ACK				(MW_BASE + 0x016A)
#define MW_RPSGAME_REQ						(MW_BASE + 0x016B)
#define MW_RPSGAME_ACK						(MW_BASE + 0x016C)
#define MW_RPSGAMECHANGE_REQ				(MW_BASE + 0x016D)
#define MW_MONTHRANKRESETCHAR_REQ			(MW_BASE + 0x016E)
#define MW_MONTHRANKRESETCHAR_ACK			(MW_BASE + 0x016F)
#define MW_WARCOUNTRYBALANCE_REQ			(MW_BASE + 0x0170)
#define MW_WARCOUNTRYBALANCE_ACK			(MW_BASE + 0x0171)
#define MW_MEETINGROOM_REQ					(MW_BASE + 0x0172)
#define MW_MEETINGROOM_ACK					(MW_BASE + 0x0173)
#define MW_ARENAJOIN_ACK					(MW_BASE + 0x0174)
#define MW_CMGIFT_REQ						(MW_BASE + 0x0175)
#define MW_CMGIFT_ACK						(MW_BASE + 0x0176)
#define MW_CMGIFTRESULT_REQ					(MW_BASE + 0x0177)
#define MW_CMGIFTRESULT_ACK					(MW_BASE + 0x0177)
#define MW_ASSISTANT_REQ					(MW_BASE + 0x0178)
#define MW_ASSISTANT_ACK					(MW_BASE + 0x0178)
#define MW_ASSISTANTANSWER_REQ				(MW_BASE + 0x0179)
#define MW_ASSISTANTANSWER_ACK				(MW_BASE + 0x0179)
#define MW_ASSISTANTDEL_REQ					(MW_BASE + 0x0180)
#define MW_ASSISTANTDEL_ACK					(MW_BASE + 0x0180)
#define MW_SKYGARDENENABLE_REQ				(MW_BASE + 0x0181)
#define MW_SKYGARDENENABLE_ACK				(MW_BASE + 0x0182)
#define MW_SKYGARDENOCCUPY_REQ				(MW_BASE + 0x0183)
#define MW_SKYGARDENOCCUPY_ACK				(MW_BASE + 0x0184)
#define MW_MONTEMPTEVO_ACK					(MW_BASE + 0x0185)
#define MW_MONTEMPTEVO_REQ					(MW_BASE + 0x0186)

////Apex/////////////////////////////////////////////////////////////////////
#define MW_APEXDATA_REQ						(MW_BASE + 0x0900)
#define MW_APEXDATA_ACK						(MW_BASE + 0x0901)
#define MW_APEXSTART_ACK					(MW_BASE + 0x0902)
