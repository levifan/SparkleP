//
//  SessionConfig.m
//  Sparkle
//
//  Created by Levi Fan on 4/26/23.
//  Copyright © 2023 Sparkle Project. All rights reserved.
//

#import "SPSessionConfig.h"

@implementation SPSessionConfig

@synthesize sessionConfig = _sessionConfig;

+ (instancetype)sharedInstance {
    static SPSessionConfig *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[SPSessionConfig alloc] initPrivate];
    });
    return sharedInstance;
}

- (instancetype)initPrivate {
    return [self initWithConfiguration:[NSURLSessionConfiguration defaultSessionConfiguration]];
}

- (instancetype)initWithConfiguration:(NSURLSessionConfiguration *)configuration {
    self = [super init];
    if (self) {
        _sessionConfig = configuration;
    }
    return self;
}

- (instancetype)init {
    [NSException raise:NSInternalInconsistencyException
                format:@"[%@] cannot be called directly. Use +[%@ sharedInstance] instead.",
                       NSStringFromSelector(_cmd), NSStringFromClass([self class])];
    return nil;
}

@end

