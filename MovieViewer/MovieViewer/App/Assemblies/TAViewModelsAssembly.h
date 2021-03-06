//
//  ADViewModelsAssembly.h
//  MovieViewer
//
//  Created by Alex Rudyak on 7/20/15.
//  Copyright (c) 2015 *instinctools. All rights reserved.
//

#import "TyphoonAssembly.h"

@class TAApplicationAssembly,
TAFacadesAssembly,
TAViewModel;

@protocol TAViewModelsDataSource <NSObject>

- (TAViewModel *)rootViewModel;

- (TAViewModel *)menuViewModel;

- (TAViewModel *)loginViewModel;

- (TAViewModel *)discoveryViewModel;

- (TAViewModel *)favoritesViewModel;

- (TAViewModel *)watchedViewModel;

@end

@interface TAViewModelsAssembly : TyphoonAssembly <TAViewModelsDataSource>

@property (nonatomic) TAApplicationAssembly *applicationAssembly;

@property (nonatomic) TAFacadesAssembly *facadesAssembly;

@end
