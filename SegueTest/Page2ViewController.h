//
//  Page2ViewController.h
//  SegueTest
//
//  Created by csdc-iMac on 15/8/13.
//  Copyright (c) 2015年 csdc. All rights reserved.
//

#import <UIKit/UIKit.h>
// 声明一个协议
@protocol Page2Delegate
// 协议中的方法
- (void)passValue:(NSString *)value;

@end

@interface Page2ViewController : UIViewController
@property (weak, nonatomic) NSString *string;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)toPage1:(id)sender;

// 采用上面协议的物件
@property (weak) id delegate;
@end
