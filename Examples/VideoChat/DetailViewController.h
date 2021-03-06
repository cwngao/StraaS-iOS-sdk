//
//  DetailViewController.h
//  VideoChat
//
//  Created by Luke Jang on 8/26/16.
//  Copyright © 2016 StraaS.io. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const STSMessagingServiceKeyword;
extern NSString * const STSStreamingServiceKeyword;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (nonatomic, readonly) UIViewController * contentViewController;
@end

