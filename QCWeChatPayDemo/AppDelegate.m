//
//  AppDelegate.m
//  QCWeChatPay
//
//  Created by JHQ0228 on 2016/12/20.
//  Copyright © 2016年 QianQian-Studio. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    // 向微信终端程序注册第三方应用 APPID
    [WXApi registerApp:QCWechatAPPID withDescription:@"QCWeChatPay"];
    
    return YES;
}

// 微信支付回调，当用户通过其他应用启动本应用时，会回调这个方法

// NS_DEPRECATED_IOS(2_0, 9_0)
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url {
    return  [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

// NS_DEPRECATED_IOS(2_0, 9_0)
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

// NS_AVAILABLE_IOS(9_0) 9.0 以后使用新 API 接口
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options {
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}


@end
