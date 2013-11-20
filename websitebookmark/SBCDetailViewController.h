//
//  SBCDetailViewController.h
//  websitebookmark
//
//  Created by Sanket Chauhan on 11/19/13.
//  Copyright (c) 2013 Sanket Chauhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBCDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
