//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageMaskedBubbleView.h"

@class UIButton, UIImageView, WWKMessageLocation;

@interface WWKConversationLocationBubbleView : WWKConversationMessageMaskedBubbleView
{
    UIButton *_locationNameButton;
    UIImageView *_locationPin;
}

@property(retain, nonatomic) UIImageView *locationPin; // @synthesize locationPin=_locationPin;
@property(retain, nonatomic) UIButton *locationNameButton; // @synthesize locationNameButton=_locationNameButton;
- (void).cxx_destruct;
- (id)contextMenuItems;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageLocation *messageItem; // @dynamic messageItem;

@end
