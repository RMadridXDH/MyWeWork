//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, WWKApplicationItem;

@interface WWKApplicationPageCollectionMoreCell : UICollectionViewCell
{
    WWKApplicationItem *_item;
    UIView *_bottomSeperatorLine;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *bottomSeperatorLine; // @synthesize bottomSeperatorLine=_bottomSeperatorLine;
@property(retain, nonatomic) WWKApplicationItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
