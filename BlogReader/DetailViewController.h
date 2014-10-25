//
//  DetailViewController.h
//  BlogReader
//
//  Created by Hannah Gibson on 10/25/14.
//  Copyright (c) 2014 Hannah Gibson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

