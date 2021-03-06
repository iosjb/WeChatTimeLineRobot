/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MultiImageScrollViewDelegate.h"
#import "MMUIViewController.h"

@class NSDictionary, UILabel, UIView, NSString, MultiImageScrollView, UIButton, UIActivityIndicatorView, NSMutableArray, NSData;
@protocol ImageBrowseDelegate;

@interface MMCapturePreviewBrowserController : MMUIViewController <MultiImageScrollViewDelegate> {
	MultiImageScrollView* _pagingScrollView;
	UIView* _bottomBar;
	UIButton* _sendButton;
	UIButton* _originImageCheck;
	UILabel* _originImageLabel;
	NSMutableArray* _imageScrollViewPool;
	NSDictionary* _imageInfo;
	NSData* _imageData;
	long _originImageSize;
	UIActivityIndicatorView* _originIndictorView;
	BOOL _canSendOriginalImage;
	BOOL m_hasClickSendButton;
	id<ImageBrowseDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_hasClickSendButton;
@property(assign, nonatomic) BOOL canSendOriginalImage;
@property(assign, nonatomic) long originImageSize;
@property(assign, nonatomic) __weak id<ImageBrowseDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onSingleTap:(id)tap;
-(id)imageAtPage:(unsigned long)page;
-(id)viewAtPage:(unsigned long)page frame:(CGRect)frame;
-(void)OnFullScreenChanged;
-(void)onOriginImageCheck:(id)check;
-(void)getOriginSize;
-(void)OnOriginSizeGot:(id)got;
-(void)OnSend:(id)send;
-(void)OnCancel:(id)cancel;
-(id)getfullScreenImage;
-(void)viewDidTransitionToNewSize;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(BOOL)interactivePopGestureRecognizerShouldBegin:(id)interactivePopGestureRecognizer;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)initBottomBar;
-(void)initData;
-(void)dealloc;
-(id)initWithImageInfo:(id)imageInfo;
-(id)init;
@end

