//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, NSURL, UIImage, WWCMROCRVCardInfo, WWCameraViewController;

@protocol WWCameraViewControllerDelegate <NSObject>
- (void)onDidFinishContinuousMode:(NSArray *)arg1;
- (void)cameraController:(WWCameraViewController *)arg1 didFinishRecordVideo:(NSURL *)arg2;
- (void)cameraController:(WWCameraViewController *)arg1 didFinishScanDocWithVCardInfo:(WWCMROCRVCardInfo *)arg2;
- (void)cameraController:(WWCameraViewController *)arg1 didFinishScanDocWithPDFData:(NSData *)arg2 withName:(NSString *)arg3;
- (void)cameraController:(WWCameraViewController *)arg1 didFinishScanDocWithImageFilePathArr:(NSArray *)arg2 withNameArr:(NSArray *)arg3;
- (void)cameraController:(WWCameraViewController *)arg1 didFinishScanDocWithImageArr:(NSArray *)arg2 withNameArr:(NSArray *)arg3;
- (void)cameraController:(WWCameraViewController *)arg1 didFinishTakeImage:(UIImage *)arg2;
@end
