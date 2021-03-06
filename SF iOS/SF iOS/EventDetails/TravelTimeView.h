//
//  TravelTimeView.h
//  SF iOS
//
//  Created by Amit Jain on 8/3/17.
//  Copyright © 2017 Amit Jain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TravelTime.h"
#import "DirectionsRequestHandler.h"

typedef NS_ENUM(NSUInteger, Arrival) {
    ArrivalOnTime,
    ArrivalAboutTime,
    ArrivalLate,
};

NS_ASSUME_NONNULL_BEGIN
@interface TravelTimeView : UIControl

- (instancetype)initWithTravelTime:(TravelTime *)travelTime arrival:(Arrival)arrival directionsRequestHandler:(DirectionsRequestHandler)directionsRequestHandler NS_DESIGNATED_INITIALIZER;

@end
NS_ASSUME_NONNULL_END
