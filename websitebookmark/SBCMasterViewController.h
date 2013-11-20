//
//  SBCMasterViewController.h
//  websitebookmark
//
//  Created by Sanket Chauhan on 11/19/13.
//  Copyright (c) 2013 Sanket Chauhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SBCDetailViewController;

@interface SBCMasterViewController : UITableViewController

@property (strong, nonatomic) SBCDetailViewController *detailViewController;

@end
