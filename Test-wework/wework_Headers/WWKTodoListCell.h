//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, WWKTodoListModel;
@protocol WWKTodoListCellDelegate;

@interface WWKTodoListCell : UITableViewCell
{
    UILabel *_contentLabel;
    UILabel *_followerLabel;
    UIView *_separatorView;
    UIButton *_selectButton;
    id <WWKTodoListCellDelegate> _delegate;
    WWKTodoListModel *_model;
}

@property(retain, nonatomic) WWKTodoListModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <WWKTodoListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *followerLabel; // @synthesize followerLabel=_followerLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)onClickSelectButton;
- (void)showHighLight;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
