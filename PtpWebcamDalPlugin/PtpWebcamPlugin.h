//
//  PtpWebcamPlugin.h
//  PtpWebcamDalPlugin
//
//  Created by Dömötör Gulyás on 30.05.2020.
//  Copyright © 2020 Doemoetoer Gulyas. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <CoreMediaIo/CMIOHardwarePlugIn.h>
#import <ImageCaptureCore/ICDeviceBrowser.h>

#import "PtpWebcamObject.h"
#import "PtpWebcamAssistantServiceProtocol.h"
#import "PtpCamera.h"

NS_ASSUME_NONNULL_BEGIN

@interface PtpWebcamPlugin : PtpWebcamObject <ICDeviceBrowserDelegate, ICDeviceDelegate, PtpWebcamAssistantDelegateProtocol, PtpCameraDelegate>
{
	CMIOHardwarePlugInInterface* _pluginInterface;
	dispatch_source_t deviceEventDispatchSource;
}

@property CMIOHardwarePlugInInterface* pluginInterface;

// CMIO devies and PtpCameras
@property NSArray* cmioDevices;
@property NSArray* cameras;

- (OSStatus) initialize;
- (OSStatus) teardown;

@end

NS_ASSUME_NONNULL_END
