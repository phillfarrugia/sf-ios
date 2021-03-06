//
//  NSAttributedString+EventAddress.m
//  SF iOS
//
//  Created by Amit Jain on 8/2/17.
//  Copyright © 2017 Amit Jain. All rights reserved.
//

#import "NSAttributedString+EventAddress.h"
@import UIKit;

@implementation NSAttributedString (Kerning)

+ (NSAttributedString *)kernedStringFromString:(NSString *)string {
    NSDictionary<NSAttributedStringKey, id> *kerning = @{NSKernAttributeName : @(0.82)};
    return [[NSAttributedString alloc] initWithString:[string uppercaseString] attributes:kerning];
}

@end
