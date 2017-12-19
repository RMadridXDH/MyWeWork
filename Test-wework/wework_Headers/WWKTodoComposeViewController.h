//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QMUITextFieldDelegate-Protocol.h"
#import "QMUITextViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"
#import "WWKTodoToolBarDelegate-Protocol.h"

@class NSAttributedString, NSString, QMUITextView, UIButton, UIImage, UIImageView, UIScrollView, UITapGestureRecognizer, UIView;
@protocol WWKTodoComposeViewControllerDelegate;

@interface WWKTodoComposeViewController : UIViewController <QMUITextFieldDelegate, QMUITextViewDelegate, UIScrollViewDelegate, WWKTodoToolBarDelegate, WWKSelectContactsViewControllerDelegate, UIGestureRecognizerDelegate>
{
    double _keyBoardHeight;
    unsigned long long _controllerType;
    NSAttributedString *_attributedText;
    vector_89e6321f _selected_users;
    scoped_refptr_c1fa851d _message;
    _Bool _isInFloatView;
    _Bool _hasEditText;
    UIImage *_image;
    id <WWKTodoComposeViewControllerDelegate> _delegate;
    QMUITextView *_contentTextView;
    UIScrollView *_scrollView;
    UIButton *_followButton;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIView *_separatorView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_textViewTapGestureRecognizer;
    UIButton *_addTodoButton;
    UIView *_toolbarView;
    UIImageView *_backgroundImageView;
    UIView *_backgroundWhiteView;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *backgroundWhiteView; // @synthesize backgroundWhiteView=_backgroundWhiteView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) UIButton *addTodoButton; // @synthesize addTodoButton=_addTodoButton;
@property(retain, nonatomic) UITapGestureRecognizer *textViewTapGestureRecognizer; // @synthesize textViewTapGestureRecognizer=_textViewTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) QMUITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak id <WWKTodoComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_addBackgroundImageView2;
- (void)p_addBackgroundImageView;
- (void)p_showFirstAddTodoDialog;
- (void)p_updateUI;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (id)titleForNumberExceedMax:(id)arg1;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidTap:(id)arg1;
- (void)cancelButtonDidClick;
- (void)okButtonDidClick;
- (void)followButtonDidClick:(id)arg1;
- (void)todoButtonDidClick:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithMessage:(scoped_refptr_c1fa851d)arg1;
- (id)initWithControllerType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
