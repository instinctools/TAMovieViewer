//
//  TARootViewModel.m
//  MovieViewer
//
//  Created by Alex Rudyak on 7/20/15.
//  Copyright (c) 2015 *instinctools. All rights reserved.
//

#import "TARootViewModel.h"

@implementation TARootViewModel
@synthesize viewDelegate;

- (void)preloadScreen
{
    [self.router presentLoginScreen:^{

    }];
}

@end
