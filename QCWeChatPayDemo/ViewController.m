//
//  ViewController.m
//  QCWeChatPay
//
//  Created by JHQ0228 on 2016/12/20.
//  Copyright © 2016年 QianQian-Studio. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (IBAction)WeChatPayClick:(UIButton *)sender {
    
    // 发起微信支付
    [QCWeChatPayHandler QCWeChatPay_APP];
}

@end
