//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QDataCacheProtocol-Protocol.h"

@class NSString;

@interface QDataCacheBase : NSObject <QDataCacheProtocol>
{
    NSString *_name;
    NSString *_styleName;
    unsigned long long _mapLanguage;
    NSString *_languageCode;
    NSString *_basePath;
}

+ (void)clearCacheByName:(id)arg1;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned long long mapLanguage; // @synthesize mapLanguage=_mapLanguage;
@property(copy, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 scene:(id)arg2 version:(id)arg3;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic) NSString *rootName;
- (void)setupSelf:(id)arg1;
@property(copy, nonatomic) NSString *version;
- (id)cacheDataWithTile:(CDStruct_74b02b43)arg1;
- (_Bool)writeCacheData:(id)arg1 tile:(CDStruct_74b02b43)arg2 version:(id)arg3;
- (_Bool)creatCacheDataFilePathDir:(id)arg1 withIndexName:(id)arg2 withDataName:(id)arg3;
- (id)pathDictionaryFor:(CDStruct_74b02b43)arg1 language:(id)arg2;
- (int)offsetWithIndexPath:(id)arg1 tile:(CDStruct_74b02b43)arg2;
@property(readonly, nonatomic) NSString *logoPath;
- (CDStruct_1ef3fb1f)mergeDirectionForTile:(CDStruct_74b02b43)arg1;
- (CDStruct_1ef3fb1f)mergeGridForTile:(CDStruct_74b02b43)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
