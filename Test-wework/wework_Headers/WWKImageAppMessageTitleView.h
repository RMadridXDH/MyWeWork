//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageTitleView.h"

@class UIImageView;

@interface WWKImageAppMessageTitleView : WWKBaseAppMessageTitleView
{
    UIImageView *_imageView;
    UIImageView *_waterMaskImageView;
    struct ImageMsg _imgMsg;
}

@property(retain, nonatomic) UIImageView *waterMaskImageView; // @synthesize waterMaskImageView=_waterMaskImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct ImageMsg imgMsg; // @synthesize imgMsg=_imgMsg;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)bottomMargin;
- (double)topMargin;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (struct CGSize)layoutSubViewsInTitleViewWithLimitWidth:(double)arg1;
- (void)setAppMessage:(scoped_refptr_d3a1e30c)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
