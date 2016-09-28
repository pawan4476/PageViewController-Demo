//
//  ViewController.h
//  PageViewController
//
//  Created by Nagam Pawan on 9/22/16.
//  Copyright © 2016 Nagam Pawan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController<UIPageViewControllerDataSource>


- (IBAction)startWalkThrough:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitle;
@property (strong, nonatomic) NSArray *pageImages;
@end

