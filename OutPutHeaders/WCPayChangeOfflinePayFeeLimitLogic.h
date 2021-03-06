/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayChangeOfflinePayLimitFeeViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"
#import "WCPayControlLogic.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class NSString;

@interface WCPayChangeOfflinePayFeeLimitLogic : WCPayControlLogic <WCPayChangeOfflinePayLimitFeeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate> {
	int m_enWCPayChangeOfflinePayFeeLimitLogicScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_enWCPayChangeOfflinePayFeeLimitLogicScene;
-(void)OnChangeOfflinePayLimit:(id)limit Error:(id)error;
-(void)OnWCPayChangeOfflinePayLimitFeeViewControllerChangeToLimit:(long long)limit;
-(void)OnWCPayChangeOfflinePayLimitFeeViewControllerBack;
-(void)PayPwdRightActionBack;
-(void)PayPwdBack;
-(void)VerifyPayPwdNext:(id)next;
-(void)VerifyPayCardAgain:(id)again;
-(void)VerifyPayCardNext:(id)next;
-(void)VerifyPayCardBack;
-(void)EndChangeOfflinePayFeeLimit;
-(void)startLogic;
-(id)initWithData:(id)data;
@end

