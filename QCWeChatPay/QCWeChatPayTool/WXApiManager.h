//
//  WXApiManager.h
//  QCWeChatPay
//
//  Created by JHQ0228 on 2016/12/20.
//  Copyright © 2016年 QianQian-Studio. All rights reserved.
//

/**
 *  微信支付结果回调类
 */

#import <Foundation/Foundation.h>

@interface WXApiManager : NSObject <WXApiDelegate>

+ (instancetype)sharedManager;

@end
