//
//  PtpCamera.h
//  PtpWebcamAssistantService
//
//  Created by Dömötör Gulyás on 25.07.2020.
//  Copyright © 2020 Doemoetoer Gulyas. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <ImageCaptureCore/ImageCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PtpCameraDelegate;

@interface PtpCamera : NSObject <ICCameraDeviceDelegate, NSPortDelegate>

@property(weak) id <PtpCameraDelegate> delegate;

@property ICCameraDevice* icCamera;
@property id cameraId;

@property NSString* make;
@property NSString* model;

@property NSDictionary* ptpDeviceInfo;
@property NSDictionary* ptpPropertyInfos;

@property size_t liveViewHeaderLength;

- (uint32_t) nextTransactionId;

- (instancetype) initWithIcCamera: (ICCameraDevice*) camera delegate: (id <PtpCameraDelegate>) delegate;

+ (nullable NSDictionary*) isDeviceSupported: (ICDevice*) device;

- (BOOL) isPtpOperationSupported: (uint16_t) opId;
- (void) ptpGetPropertyDescription: (uint32_t) property;
- (void) ptpSetProperty: (uint32_t) property toValue: (id) value;
- (void) ptpQueryKnownDeviceProperties;
- (void) requestSendPtpCommandWithCode: (int) code;

- (void) startLiveView;
- (void) stopLiveView;
- (void) requestLiveViewImage;

@end

@protocol PtpCameraDelegate <NSObject>

- (void) receivedCameraProperty: (NSDictionary*) propertyInfo withId: (NSNumber*) propertyId fromCamera: (PtpCamera*) camera;
- (void) receivedLiveViewJpegImage: (NSData*) jpegData withInfo: (NSDictionary*) info fromCamera: (PtpCamera*) camera;

- (void) cameraDidBecomeReadyForUse: (PtpCamera*) camera;
- (void) cameraDidBecomeReadyForLiveViewStreaming: (PtpCamera*) camera;
- (void) cameraWasRemoved: (PtpCamera*) camera;

@end

NS_ASSUME_NONNULL_END