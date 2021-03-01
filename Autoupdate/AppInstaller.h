//
//  AppInstaller.h
//  Sparkle
//
//  Created by Mayur Pawashe on 3/7/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUUnarchiverProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface AppInstaller : NSObject

- (instancetype)initWithHostBundleIdentifier:(NSString *)hostBundleIdentifier;

- (void)start;

- (void)cleanupAndExitWithStatus:(int)status error:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
