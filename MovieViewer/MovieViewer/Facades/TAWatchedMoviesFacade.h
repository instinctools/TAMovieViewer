//
//  TAWatchedMoviesFacade.h
//  MovieViewer
//
//  Created by Alex Rudyak on 7/23/15.
//  Copyright (c) 2015 *instinctools. All rights reserved.
//

#import "TAFacadeAbstract.h"

@class TALoginFacade;

typedef void(^ta_facade_watched_success_block)(NSArray *movies);
typedef void(^ta_facade_watched_failure_block)(NSError *error);

@interface TAWatchedMoviesFacade : TAFacadeAbstract

@property (nonatomic) NSUInteger pageSize;

@property (nonatomic) TALoginFacade *loginFacade;

- (void)getMoviesOnPage:(NSUInteger)page success:(ta_facade_watched_success_block)success failure:(ta_facade_watched_failure_block)failure;

@end
