//
//  ViewController.m
//  Algorhythm
//
//  Created by Austin Meyer on 7/23/19.
//  Copyright © 2019 Austin Meyer. All rights reserved.
//

#import "PlaylistMasterViewController.h"
#import "PlaylistDetailViewController.h"
#import "Playlist.h"

@interface PlaylistMasterViewController ()

@end

@implementation PlaylistMasterViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    for (NSUInteger index = 0; index < self.playlistImageView.count; index++){
        Playlist *playlist = [[Playlist alloc] initWithIndex:index];
        UIImageView *playlistImageView = self.playlistImageView[index];
        playlistImageView.image = playlist.playlistIcon;
        playlistImageView.backgroundColor = playlist.backgroundColor;
    }
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
    if ([segue.identifier isEqual:@"showPlaylistDetail"]) {
        
        UIImageView *playlistImageView = [sender view];
        
        if ([self.playlistImageView containsObject:playlistImageView]){
            NSUInteger index = [self.playlistImageView indexOfObject:playlistImageView];
            PlaylistDetailViewController *playlistDetailController = (PlaylistDetailViewController *)segue.destinationViewController;
            playlistDetailController.playlist = [[Playlist alloc] initWithIndex:index];
        }
    }
}

- (IBAction)showPlaylistDetail:(id)sender {
    [self performSegueWithIdentifier:@"showPlaylistDetail" sender:sender];
}



@end
