/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IRadarSearchExt <NSObject>
@optional
-(void)OnRetrieveLocationOk;
-(void)OnRetrieveLocationTimeout;
-(void)OnRetrieveLocationError:(int)error;
-(void)OnVerifyUsr:(id)usr ErrCode:(int)code;
-(void)OnAddFriend:(id)aFriend ErrCode:(int)code;
-(void)OnRadarSearch:(id)search ErrCode:(int)code;
@end

