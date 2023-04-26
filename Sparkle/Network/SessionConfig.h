//
//  SessionConfig.h
//  Sparkle
//
//  Created by Levi Fan on 4/26/23.
//  Copyright © 2023 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@interface SessionConfig : NSObject

@property (nonatomic, strong, readonly) NSURLSessionConfiguration *sessionConfig;

+ (instancetype)sharedInstance;

- (instancetype)initWithConfiguration:(NSURLSessionConfiguration *)configuration NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end
