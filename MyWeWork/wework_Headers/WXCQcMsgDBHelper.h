//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WXCFMDatabase;

@interface WXCQcMsgDBHelper : NSObject
{
    WXCFMDatabase *_dataBase;
    WXCFMDatabase *_feedBackdataBase;
}

+ (id)getUniqueIndexSql;
+ (id)getCreateTableMsgSql;
- (void)closeFeedBackMsgDB;
- (id)openFeedBackMsgDB;
- (void)closeQcMsgDB;
- (id)openQcMsgDB;
- (void)dealloc;

@end
