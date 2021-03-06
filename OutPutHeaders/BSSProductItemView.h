/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSSBaseItemView.h"

@class AttributeLabel, BSBusinessProductItem, MMWebImageView, NSArray, UILabel;

@interface BSSProductItemView : BSSBaseItemView {
	BSBusinessProductItem* _dataItem;
	NSArray* _keywordList;
	MMWebImageView* _headImgView;
	AttributeLabel* _titleLabel;
	UILabel* _priceLabel;
	UILabel* _sellerLabel;
}
@property(retain, nonatomic) UILabel* sellerLabel;
@property(retain, nonatomic) UILabel* priceLabel;
@property(retain, nonatomic) AttributeLabel* titleLabel;
@property(retain, nonatomic) MMWebImageView* headImgView;
@property(retain, nonatomic) NSArray* keywordList;
@property(retain, nonatomic) BSBusinessProductItem* dataItem;
+(float)heightForItem;
-(void).cxx_destruct;
-(void)initView;
-(id)initWithProductItem:(id)productItem andKeyWordList:(id)list;
-(void)dealloc;
@end

