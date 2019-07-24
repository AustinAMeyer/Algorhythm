//
//  PlaylistDetailViewController.h
//  Algorhythm
//
//  Created by Austin Meyer on 7/23/19.
//  Copyright © 2019 Austin Meyer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlaylistDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *buttonPressLabel;
@property (nonatomic, strong) NSString *segueLableText;

@end

NS_ASSUME_NONNULL_END
