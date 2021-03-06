//
//  TAActionProtocol.h
//  MovieViewer
//
//  Created by Alex Rudyak on 7/24/15.
//  Copyright (c) 2015 *instinctools. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TAServiceProvider;

@protocol TAActionProtocol <NSObject>

@required

- (void)do:(void(^)(BOOL success))completion;

@optional

@property (nonatomic, strong) TAServiceProvider *serviceProvider;

@end
