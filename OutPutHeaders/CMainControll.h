/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMKernelExt.h"
#import "PBMessageObserverDelegate.h"
#import "NotifyFromEventDelegate.h"
#import "MMObject.h"
#import "NetworkStatusDelegate.h"

@class CMMDB, NSDate, MMTimer, NSString, NSMutableString, CNetworkStatus, NSMutableArray, MMTracerouteExecutor, NSRecursiveLock;
@protocol NotifyFromMainCtrlDelegate;

@interface CMainControll : MMObject <NotifyFromEventDelegate, NetworkStatusDelegate, MMKernelExt, PBMessageObserverDelegate> {
	CMMDB* m_oMMDB;
	NSRecursiveLock* m_oLock;
	NSString* m_nsDocPath;
	MMTimer* m_oTimerCheckEvent;
	id<NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl;
	NSMutableArray* m_arrMessageList;
	NSString* m_nsToken;
	NSString* m_nsResendToken;
	unsigned long m_uiTokenStatus;
	NSString* m_nsSound;
	NSString* m_nsVoipSound;
	unsigned long m_uiTimerCount;
	BOOL m_bSendingToken;
	BOOL m_bNeedSend;
	unsigned long m_uiLastNetworkStatus;
	unsigned long m_uiNetworkReachabilitySeed;
	unsigned long long m_unLastDNS;
	NSDate* m_dtLastSyncSend;
	unsigned long m_uiSyncSendCount;
	NSDate* m_dtLastSyncForAuth;
	NSDate* m_dtLastGetUpdateInfo;
	CNetworkStatus* m_oNetworkStatus;
	BOOL m_bNeedSyncAddressBook;
	BOOL m_bSyncAddrFromAuth;
	unsigned long m_uiSyncScene;
	NSRecursiveLock* m_oMsgQueLock;
	BOOL m_bStop;
	unsigned long m_uiLastApnsSetting;
	BOOL m_bReportAddMsgFail;
	BOOL m_didTraceRouteFail;
	NSMutableString* m_statusMessage;
	MMTracerouteExecutor* m_tracerouteExcutor;
	NSDate* _m_tLastNotify;
	NSDate* _m_tLastLongConnDisconnect;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMTracerouteExecutor* m_tracerouteExcutor;
@property(retain, nonatomic) NSMutableString* m_statusMessage;
@property(assign, nonatomic) BOOL m_didTraceRouteFail;
@property(retain, nonatomic) CMMDB* m_oMMDB;
@property(retain, nonatomic) NSRecursiveLock* m_oLock;
@property(retain, nonatomic) NSString* m_nsDocPath;
@property(retain, nonatomic) CNetworkStatus* m_oNetworkStatus;
@property(retain, nonatomic) NSDate* m_tLastLongConnDisconnect;
@property(retain, nonatomic) NSDate* m_tLastNotify;
@property(retain, nonatomic) NSDate* m_dtLastGetUpdateInfo;
@property(retain, nonatomic) NSDate* m_dtLastSyncForAuth;
@property(retain, nonatomic) NSDate* m_dtLastSyncSend;
@property(retain, nonatomic) NSString* m_nsVoipSound;
@property(retain, nonatomic) NSString* m_nsSound;
@property(assign, nonatomic) unsigned long m_uiTokenStatus;
@property(retain, nonatomic) NSString* m_nsToken;
@property(assign, nonatomic) __weak id<NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl;
-(void).cxx_destruct;
-(void)didTrancerouteEnd;
-(void)tracerouteExecutor:(id)executor startedPingingWithTTL:(id)ttl;
-(void)tracerouteExecutor:(id)executor traceRouteStepDone:(id)done;
-(void)tracerouteExecutor:(id)executor tracerouteFailed:(id)failed;
-(void)tracerouteExecutor:(id)executor endedTracerouteWithSteps:(id)steps;
-(void)startTracerouteWithIpAddress:(const char*)ipAddress;
-(void)ReportApnsSetting:(BOOL)setting;
-(void)TimerSync;
-(void)onLoginOK;
-(void)onAuthOK;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleRespForGetUpdateInfo:(id)getUpdateInfo;
-(void)CheckUpdate:(id)update;
-(void)HandleRespForSendToken:(id)sendToken;
-(void)CreateSendTokenEventWithScene:(unsigned)scene;
-(void)SendToken:(id)token Status:(unsigned long)status Sound:(id)sound VoipSound:(id)sound4;
-(void)onKickQuit;
-(void)HandleNewSyncPush:(id)push;
-(void)HandleSpecialMessage:(id)message;
-(void)speedyDispacthMessage:(id)message;
-(void)SpeedyNotifyFromEvent:(id)event Message:(unsigned long)message MessageInfo:(id)info;
-(void)NotifyFromEvent:(id)event Message:(unsigned long)message MessageInfo:(id)info;
-(void)ReachabilityChange:(unsigned long)change;
-(void)handleIPXXMessage:(id)message;
-(void)RaiseEvent:(unsigned long)event MessageID:(unsigned long)anId MessageInfo:(id)info;
-(id)GetLocalInfo;
-(void)GetBottleContact;
-(unsigned long)GetNetworkReachabilitySeed;
-(unsigned long)CheckVersion;
-(BOOL)IsNewUser;
-(void)CheckWhatsnew;
-(void)SetShowWhatsnew:(BOOL)whatsnew;
-(void)CreateSyncTimer;
-(void)HandleQQChanged;
-(void)CheckResend;
-(void)SendMsg:(BOOL)msg;
-(BOOL)IsInit;
-(BOOL)IsLogIn;
-(void)ReloadData:(BOOL)data;
-(void)ReloadServiceData_InMainThread;
-(void)ClearData;
-(void)TimerCheckEvent;
-(void)CheckSyncAddressBook;
-(void)HandleAuthAtFirstTime;
-(void)StopAllEvent;
-(void)Stop;
-(unsigned long)Start:(id)start;
-(void)LoadLastSvrID;
-(void)dealloc;
-(id)init;
@end

