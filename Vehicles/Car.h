//
//  Car.h
//  Vehicles
//
//  Created by Spencer Symington on 2019-01-13.
//  Copyright © 2019 Designated Nerd Software. All rights reserved.
//

#import "Vehicle.h"

NS_ASSUME_NONNULL_BEGIN

@interface Car : Vehicle

#pragma mark - Private method implementations

@property (nonatomic, assign) BOOL isConvertible;
@property (nonatomic, assign) BOOL isHatchback;
@property (nonatomic, assign) BOOL hasSunroof;
@property (nonatomic, assign) NSInteger numberOfDoors;

- (id)init;

@end

NS_ASSUME_NONNULL_END
