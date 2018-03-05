//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, WWKCommonEmptyView;

@interface WWKCustomerServiceController : UITableViewController
{
    double _cacheCellHeight;
    scoped_refptr_fd92d7bf _oriConversation;
    NSMutableArray *_dataSources;
    WWKCommonEmptyView *_emptyView;
}

@property(retain, nonatomic) WWKCommonEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) scoped_refptr_fd92d7bf oriConversation; // @synthesize oriConversation=_oriConversation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)needAddTitleObject:(id)arg1;
- (void)initDataSource;
- (void)updateNavigationItems;
- (void)initSubviews;
- (void)viewDidLoad;
- (id)initWithConversation:(const scoped_refptr_fd92d7bf *)arg1;
- (id)initWithFakeData;

@end
