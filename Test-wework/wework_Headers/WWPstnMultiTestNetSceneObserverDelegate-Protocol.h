//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WWPstnMultiTestNetSceneObserverDelegate <NSObject>
- (void)onErr:(int)arg1;
- (void)onTalkingMember:(const vector_1017db16 *)arg1;
- (void)onMemberStateChange:(scoped_refptr_f8a95905)arg1;
- (void)onInviteRoom:(scoped_refptr_f8a95905)arg1;
- (void)onEnterRoomSucc;
- (void)onAddMemberSucc;
- (void)onCreateRoomSucc;
@end
