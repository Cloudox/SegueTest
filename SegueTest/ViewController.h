//
//  ViewController.h
//  SegueTest
//
//  Created by csdc-iMac on 15/8/13.
//  Copyright (c) 2015年 csdc. All rights reserved.
//

#import <UIKit/UIKit.h>
// 引用Page2
#import "Page2ViewController.h"

@interface ViewController : UIViewController <Page2Delegate>// 采用Page2的协议
@property (weak, nonatomic) IBOutlet UITextField *textField;


@end

