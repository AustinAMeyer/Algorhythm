//
//  MusicLibrary.h
//  Algorhythm
//
//  Created by Austin Meyer on 7/28/19.
//  Copyright © 2019 Austin Meyer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (nonatomic, strong) NSArray *library;

@end

NS_ASSUME_NONNULL_END
