//
//  ViewController.m
//  SegueTest
//
//  Created by csdc-iMac on 15/8/13.
//  Copyright (c) 2015年 csdc. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // 将page2变量设为segue所跳转的界面控制器
    id page2 = segue.destinationViewController;
    // 对page2中的变量设置值
    [page2 setValue:self.textField.text forKey:@"string"];
    
    [page2 setValue:self forKey:@"delegate"];
}

- (void)passValue:(NSString *)value {
    // 设定编辑框内容为协议传过来的值
    self.textField.text = value;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
