//
//  SMOPDeviceManager.h
//  SM1Password Sync
//
//  Created by sam on 3/18/13.
//  Copyright 2013 Sam Marshall. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SMOPFunctions.h"

@interface SMOPDeviceManager : NSObject <MobileDeviceAccessListener> {
	MobileDeviceAccess *manager;
}
@property (nonatomic, readonly) NSArray *managerDevices;

- (BOOL)watchForConnection;
- (NSArray *)devicesWithOnePassword4:(NSArray *)devices;
- (AMDevice *)getDeviceWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark MobileDeviceAccessListener

- (void)deviceConnected:(AMDevice *)device;
- (void)deviceDisconnected:(AMDevice *)device;

@end
