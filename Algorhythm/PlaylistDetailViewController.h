//
//  PlaylistDetailViewController.h
//  Algorhythm
//
//  Created by Austin Meyer on 7/23/19.
//  Copyright © 2019 Austin Meyer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Playlist;

NS_ASSUME_NONNULL_BEGIN

@interface PlaylistDetailViewController : UIViewController
@property (strong, nonatomic) Playlist *playlist;
@property (weak, nonatomic) IBOutlet UIImageView *playlistCoverImage;
@property (weak, nonatomic) IBOutlet UILabel *playlistTitle;

@property (weak, nonatomic) IBOutlet UILabel *playlistDescription;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist0;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist1;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist2;




@end

NS_ASSUME_NONNULL_END
