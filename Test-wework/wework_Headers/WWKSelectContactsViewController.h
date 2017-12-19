//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SmartDepartmentProxyObserverDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKSelectButtonTableViewCellDelegate-Protocol.h"
#import "WWKSelectContactsBottomBarDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UITapGestureRecognizer, WWKOrganizationDataSource, WWKSearchBar, WWKSearchNoResultView, WWKSelectContactsBottomBar, WWKWebBrowserTitleView;
@protocol WWKSelectContactsViewControllerDelegate;

@interface WWKSelectContactsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WWKSelectContactsBottomBarDelegate, UISearchBarDelegate, WWKSelectButtonTableViewCellDelegate, SmartDepartmentProxyObserverDelegate>
{
    vector_89e6321f users_unable_selected;
    vector_a024b487 department_unable_selected;
    vector_89e6321f user_search_list;
    vector_a024b487 department_search_list;
    double _currentKeyboardHeight;
    UITapGestureRecognizer *_tapToDismissSearchViewGesture;
    _Bool _isSelectDepartmentMode;
    vector_46470f89 recent_user_vector_;
    vector_46470f89 valid_recent_user_vector_;
    scoped_refptr_85c18dd7 current_department_;
    scoped_refptr_cb88aa54 departmentUserIdMap;
    scoped_refptr_fd92d7bf _wxRoomInviteConversation;
    vector_89e6321f preselect_user_list;
    vector_a024b487 preselect_department_list;
    _Bool _updateBottomBarFrame;
    struct unique_ptr<SmartDepartmentProxyObserver, std::__1::default_delete<SmartDepartmentProxyObserver>> _departmentProxyObserver;
    unsigned long long _cropPersonCount;
    _Bool _showUnableSelectedOnBottomBar;
    _Bool _dontSelectExternalContacts;
    _Bool _dontShowExternalContacts;
    _Bool _onlyShowDepartments;
    _Bool _needShowRootDepartment;
    _Bool _canSelectDepartment;
    _Bool _isFirstAppear;
    id <WWKSelectContactsViewControllerDelegate> _delegate;
    NSString *_customTitle;
    unsigned long long _preSetCanMaxSelectCnt;
    NSString *_preSetExceedMaxTips;
    NSString *_clickUnableSelectedTips;
    WWKSelectContactsViewController *_preContactViewController;
    CDUnknownBlockType _filter;
    unsigned long long _selectSrcType;
    unsigned long long _openApiSelectOption;
    UITableView *_departmentTableView;
    UITableView *_searchTableView;
    UITableView *_recentUsersTableView;
    WWKOrganizationDataSource *_organizationDatasource;
    WWKSearchBar *_searchBar;
    WWKWebBrowserTitleView *_titleView;
    WWKSearchNoResultView *_noResultView;
    NSString *_mCustomizedRecentSectionTitle;
    WWKSelectContactsBottomBar *_contactsBottomBar;
    NSMutableArray *_recentSectionTypes;
    NSMutableArray *_selectContactsDataSource;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _multiSelectBlock;
    CDUnknownBlockType _clickWeChatInvite;
}

@property(copy, nonatomic) CDUnknownBlockType clickWeChatInvite; // @synthesize clickWeChatInvite=_clickWeChatInvite;
@property(copy, nonatomic) CDUnknownBlockType multiSelectBlock; // @synthesize multiSelectBlock=_multiSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) NSMutableArray *selectContactsDataSource; // @synthesize selectContactsDataSource=_selectContactsDataSource;
@property(retain, nonatomic) NSMutableArray *recentSectionTypes; // @synthesize recentSectionTypes=_recentSectionTypes;
@property(retain, nonatomic) WWKSelectContactsBottomBar *contactsBottomBar; // @synthesize contactsBottomBar=_contactsBottomBar;
@property(copy, nonatomic) NSString *mCustomizedRecentSectionTitle; // @synthesize mCustomizedRecentSectionTitle=_mCustomizedRecentSectionTitle;
@property(retain, nonatomic) WWKSearchNoResultView *noResultView; // @synthesize noResultView=_noResultView;
@property(retain, nonatomic) WWKWebBrowserTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WWKOrganizationDataSource *organizationDatasource; // @synthesize organizationDatasource=_organizationDatasource;
@property(retain, nonatomic) UITableView *recentUsersTableView; // @synthesize recentUsersTableView=_recentUsersTableView;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) UITableView *departmentTableView; // @synthesize departmentTableView=_departmentTableView;
@property(nonatomic) unsigned long long openApiSelectOption; // @synthesize openApiSelectOption=_openApiSelectOption;
@property(nonatomic) _Bool canSelectDepartment; // @synthesize canSelectDepartment=_canSelectDepartment;
@property(nonatomic) _Bool needShowRootDepartment; // @synthesize needShowRootDepartment=_needShowRootDepartment;
@property(nonatomic) _Bool onlyShowDepartments; // @synthesize onlyShowDepartments=_onlyShowDepartments;
@property(nonatomic) _Bool dontShowExternalContacts; // @synthesize dontShowExternalContacts=_dontShowExternalContacts;
@property(nonatomic) _Bool dontSelectExternalContacts; // @synthesize dontSelectExternalContacts=_dontSelectExternalContacts;
@property(nonatomic) unsigned long long selectSrcType; // @synthesize selectSrcType=_selectSrcType;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(nonatomic) __weak WWKSelectContactsViewController *preContactViewController; // @synthesize preContactViewController=_preContactViewController;
@property(retain, nonatomic) NSString *clickUnableSelectedTips; // @synthesize clickUnableSelectedTips=_clickUnableSelectedTips;
@property(nonatomic) _Bool showUnableSelectedOnBottomBar; // @synthesize showUnableSelectedOnBottomBar=_showUnableSelectedOnBottomBar;
@property(copy, nonatomic) NSString *preSetExceedMaxTips; // @synthesize preSetExceedMaxTips=_preSetExceedMaxTips;
@property(nonatomic) unsigned long long preSetCanMaxSelectCnt; // @synthesize preSetCanMaxSelectCnt=_preSetCanMaxSelectCnt;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) __weak id <WWKSelectContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)needShowSingleSelect;
- (_Bool)canPushToDepartment:(const scoped_refptr_85c18dd7 *)arg1;
- (_Bool)needSelectDepartment;
- (_Bool)needShowCorpDepartment;
- (_Bool)needShowUser;
- (_Bool)checkAndShowCustomLimitedAlert:(long long)arg1;
- (_Bool)p_isSearchTableViewAppear;
- (void)p_searchTableViewRemove;
- (void)removeSearchTableViewWhenSearchKeyIsEmpty;
- (void)clearSearchTableView;
- (_Bool)isDepartmentEnableToSelect:(scoped_refptr_85c18dd7)arg1;
- (_Bool)isUserEnableToSelect:(scoped_refptr_e1f85e48)arg1;
- (_Bool)isDepartmentHasSelected:(scoped_refptr_85c18dd7)arg1;
- (_Bool)isUserHasSelected:(scoped_refptr_e1f85e48)arg1;
- (void)resetRootViewControllerWithDepartment:(scoped_refptr_85c18dd7)arg1;
- (void)pushToNextNavigationWithDepartment:(scoped_refptr_85c18dd7)arg1;
- (id)sectionIndexTitlesForRecentContactsTableView;
- (void)checkBottomButtonIfShouldAppear;
- (void)p_cloudDiskHandleDepartmentSelected:(_Bool)arg1 withDepartment:(scoped_refptr_85c18dd7)arg2;
- (long long)totalSelectedCountByAddUsers:(const set_4cedab1c *)arg1 includeUnableSelectedDepartment:(_Bool)arg2;
- (void)loadCorpTotalMemberCount;
- (void)tapOnSearchTableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)doWithSearchResultUser:(const vector_89e6321f *)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)canDeleteUser:(scoped_refptr_e1f85e48)arg1 needTips:(_Bool)arg2;
- (void)selectContactsBottomBar:(id)arg1 didClickSureButtonWithContacts:(id)arg2;
- (void)selectContactsBottomBar:(id)arg1 didRemoveContacts:(id)arg2;
- (void)p_selectButtonTableViewCell:(id)arg1 selected:(_Bool)arg2;
- (void)selectButtonTableViewCell:(id)arg1 selected:(_Bool)arg2;
- (void)p_selectAll:(_Bool)arg1 department:(scoped_refptr_85c18dd7 *)arg2;
- (void)OnDepartmentChildsChanged:(vector_7dcb3552)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)departmentTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)recentUsersTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isIntend2SelectUser:(id)arg1 index:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)searchTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)departmentTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)recentUsersTableview:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)orientChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)p_updateNavigationBar;
- (void)p_cancelSelectAllItemPressed:(id)arg1;
- (void)p_selectAllItemPressed:(id)arg1;
- (void)p_cancelItemPressed:(id)arg1;
- (void)p_confirmItemsPressed:(id)arg1;
- (id)initInnerSelectContactsWithDepartment:(scoped_refptr_85c18dd7)arg1;
- (void)resetParentControllersChain;
- (_Bool)isSearching;
- (void)allowUpdateBottomBarFrame:(_Bool)arg1;
- (void)removeSelectedDepartment:(scoped_refptr_85c18dd7)arg1;
- (void)removeSelectedContact:(scoped_refptr_e1f85e48)arg1;
- (scoped_refptr_fd92d7bf)wxRoomInviteConversation;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)buildRecentUsersTableViewIfNeed;
- (void)buildDepartmentTableViewIfNeed;
- (void)p_setupFooterRefresh;
- (void)convertOrganizationDataSourceToSelectContactModels;
- (void)reloadDepartmentDataSource;
- (void)reloadRecentTableViewStyle;
- (void)setPreSelectedDepartmentList:(const vector_a024b487 *)arg1;
- (void)setPreSelectedUserList:(const vector_89e6321f *)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithUserList:(vector_89e6321f)arg1 customizedRecentUsers:(vector_89e6321f)arg2 customizedTitle:(id)arg3 selectSrcType:(unsigned long long)arg4;
- (void)setDepartmentUserIdMap:(scoped_refptr_cb88aa54)arg1;
- (id)initWithWithPreselectUsers:(vector_89e6321f)arg1 preselectDepartment:(vector_a024b487)arg2 isWithoutRecentUsers:(_Bool)arg3 selectSrcType:(unsigned long long)arg4;
- (id)initWithUserListWithoutRecentUsers:(vector_89e6321f)arg1 withoutDepartment:(vector_a024b487)arg2 selectSrcType:(unsigned long long)arg3;
- (id)initWithUserList:(vector_89e6321f)arg1 department:(scoped_refptr_85c18dd7)arg2 withoutDepartment:(vector_a024b487)arg3 selectSrcType:(unsigned long long)arg4;
- (id)initWithUserList:(vector_89e6321f)arg1 department:(scoped_refptr_85c18dd7)arg2 withoutDepartment:(vector_a024b487)arg3;
- (id)initWithUserListWithoutRecentUsers:(vector_89e6321f)arg1;
- (id)initWithSelectedUserList:(vector_89e6321f)arg1 fixSelectedUserList:(vector_89e6321f)arg2 selectSrcType:(unsigned long long)arg3 maxCount:(unsigned long long)arg4 preSetMaxCountTips:(id)arg5 didSelectContactCalback:(CDUnknownBlockType)arg6 didWeChatInviteCellClicked:(CDUnknownBlockType)arg7;
- (id)initWithSelectedUserList:(vector_89e6321f)arg1 selectSrcType:(unsigned long long)arg2;
- (id)initWithMemberList:(vector_4ea3d2e4)arg1;
- (id)initWithUserList:(vector_89e6321f)arg1 departmentList:(vector_a024b487)arg2 selectSrcType:(unsigned long long)arg3 didSelectContactCalback:(CDUnknownBlockType)arg4 didWeChatInviteCellClicked:(CDUnknownBlockType)arg5;
- (id)initWithUserList:(vector_89e6321f)arg1 selectSrcType:(unsigned long long)arg2;
- (id)initWithUserList:(vector_89e6321f)arg1 departmentList:(vector_a024b487)arg2 selectSrcType:(unsigned long long)arg3;
- (id)initWithUserList:(vector_89e6321f)arg1 selectSrcType:(unsigned long long)arg2 didSelectContactCalback:(CDUnknownBlockType)arg3 didWeChatInviteCellClicked:(CDUnknownBlockType)arg4;
- (id)initWithUserList:(vector_89e6321f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
