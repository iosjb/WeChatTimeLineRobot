/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "FavForwardConfirmViewDelegate.h"
#import "IMsgRevokeExt.h"
#import "UIAlertViewDelegate.h"
#import "SessionSelectControllerDelegate.h"

@class FavForwardConfirmView, NSMutableArray, SessionSelectController, NSArray, NSString, MMLoadingView, CMessageWrap;
@protocol ForwardMessageLogicDelegate;

@interface ForwardMessageLogicController : MMObject <FavForwardConfirmViewDelegate, SessionSelectControllerDelegate, IMsgRevokeExt, UIAlertViewDelegate> {
	id<ForwardMessageLogicDelegate> m_delegate;
	CMessageWrap* m_messageWrap;
	NSMutableArray* m_msgList;
	NSArray* m_toContacts;
	int m_forwardScene;
	FavForwardConfirmView* m_favForwardConfirmView;
	MMLoadingView* m_loadingView;
	BOOL m_isPresent;
	SessionSelectController* m_sessionSelectController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int forwardScene;
@property(retain, nonatomic) NSArray* toContacts;
@property(retain, nonatomic) CMessageWrap* messageWrap;
@property(assign, nonatomic) __weak id<ForwardMessageLogicDelegate> delegate;
-(void).cxx_destruct;
-(void)OnMsgRevoked:(id)revoked n64MsgId:(long long)anId SysMsg:(id)msg;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)OnSelectSessionCancel:(id)cancel;
-(void)ForwardMsg:(id)msg ToContact:(id)contact NeedSrcInfo:(BOOL)info;
-(void)ForwardMsgList:(id)list ToContact:(id)contact NeedSrcInfo:(BOOL)info;
-(void)OnMultiMsgForwardSendWithType:(unsigned)type;
-(void)OnFavItemForwardCancel;
-(void)OnFavItemForwardSend;
-(void)OnSelectSessionForRecord:(id)record;
-(void)OnSelectSessions:(id)sessions SessionSelectController:(id)controller;
-(void)dismissViewController;
-(void)showTips;
-(void)showContactSelectViewController;
-(void)forwardMultiMsgList:(id)list andMessage:(id)message;
-(void)forwardMsgList:(id)list;
-(void)forwardMessage:(id)message isPresent:(BOOL)present;
-(void)dealloc;
-(id)init;
@end

