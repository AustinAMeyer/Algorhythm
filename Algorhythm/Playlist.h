//
//  Playlist.h
//  Algorhythm
//
//  Created by Austin Meyer on 7/28/19.
//  Copyright © 2019 Austin Meyer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;

- (instancetype)initWithIndex: (NSUInteger) index;

@end

NS_ASSUME_NONNULL_END
