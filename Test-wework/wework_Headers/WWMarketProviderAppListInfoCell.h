//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, UIImageView, UILabel;

@interface WWMarketProviderAppListInfoCell : UITableViewCell
{
    CALayer *_iconBorderLayer;
    UIImageView *_iconImageView;
    UILabel *_brandLbl;
    UILabel *_corpLbl;
}

@property(retain, nonatomic) UILabel *corpLbl; // @synthesize corpLbl=_corpLbl;
@property(retain, nonatomic) UILabel *brandLbl; // @synthesize brandLbl=_brandLbl;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CALayer *iconBorderLayer; // @synthesize iconBorderLayer=_iconBorderLayer;
- (void).cxx_destruct;
- (void)updateWithServiceCorp:(const struct ServiceCorp *)arg1;
- (double)p_layoutForHeightWithParentWidth:(double)arg1;
- (void)p_doInit;
- (double)cellHeightWithParentWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
