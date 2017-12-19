//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WWKWSShareActionSheetDelegate-Protocol.h"

@class NSString, UIButton, WWKNewWSShareView, WWKWSShareActionSheet, WWKWSShareInscribeView;

@interface WWKWSSharePreViewController : UIViewController <WWKWSShareActionSheetDelegate, UIGestureRecognizerDelegate>
{
    WWKNewWSShareView *_shareView;
    UIButton *_cancelButton;
    WWKWSShareActionSheet *_scrollActionSheet;
    WWKWSShareInscribeView *_incribeView;
}

- (void).cxx_destruct;
- (void)onDidSelectedIncribeIndex:(long long)arg1;
- (void)actionSaveToLocal;
- (void)actionShareToQQ;
- (void)actionShareToWeiBo;
- (void)actionShareToWx;
- (id)shareTitle;
- (id)shareImage;
- (id)str_actionSaveToLocal;
- (id)str_actionShareToQQ;
- (id)str_actionShareToWeiBo;
- (id)str_actionShareToWx;
- (void)hideLayout;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)animateWithDuration:(double)arg1 to:(SEL)arg2 delay:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissLayout;
- (void)idleLayout4;
- (void)idleLayout3;
- (void)idleLayout2;
- (void)idleLayout;
- (void)initLayout;
- (void)show;
- (void)inscribeViewLayout;
- (void)actionSheetLayout;
- (void)shareViewLayout;
- (void)cancelButtonLayout;
- (void)viewWillLayoutSubviews;
- (void)onCacel;
- (void)hide;
- (double)shareButtonTopMargin;
- (double)shareButtonBottomMargin;
- (void)p_addActionItemTitle:(id)arg1 andIcon:(id)arg2 toRowArray:(id)arg3;
- (void)setupInscribeView;
- (void)setupActionSheet;
- (void)setupCancelButton;
- (struct HolidayInfo)selectedStatus;
-     // Error parsing type: ^{User=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::UserObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::UserObserver *, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}^^{UserObserver}{__compressed_pair<model::UserObserver **, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}}}ii}{ObserverList<model::UserObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::UserObserver *, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}^^{UserObserver}{__compressed_pair<model::UserObserver **, std::__1::allocator<model::UserObserver *> >=^^{UserObserver}}}ii}{unique_ptr<pb::User, std::__1::default_delete<pb::User> >={__compressed_pair<pb::User *, std::__1::default_delete<pb::User> >=^{User}}}{scoped_refptr<model::Company>=^{Company}}}16@0:8, name: loginUser
- (void)initSubView;
- (void)viewDidLoad;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
