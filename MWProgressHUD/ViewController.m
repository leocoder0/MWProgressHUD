//
//  ViewController.m
//  MWProgressHUD
//
//  Created by caifeng on 2017/1/4.
//  Copyright © 2017年 facaishu. All rights reserved.
//

#import "ViewController.h"
#import "MWProgressHUD.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    
}

- (IBAction)showGif:(id)sender {
    
    [MWProgressHUD showGifHUDOnView:self.view];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        //        [MWProgressHUD hideHUDFromView:self.view];  //隐藏HUD
        [MWProgressHUD showMessage:@"加载成功" onView:self.view]; // 显示加载结果 自动隐藏
    });
}

- (IBAction)showIndicator:(id)sender {
    
    [MWProgressHUD showIndicatorHUDOnView:self.view];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [MWProgressHUD showMessage:@"加载成功" onView:self.view];
    });

    
}

- (IBAction)showMessage:(id)sender {
    
    [MWProgressHUD showMessage:@"iOS是世界上最好的系统，OC是世界上最好的语言" onView:self.view];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
