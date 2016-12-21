//
//  QCWeChatPayHandler.h
//  QCWeChatPay
//
//  Created by JHQ0228 on 2016/12/20.
//  Copyright © 2016年 QianQian-Studio. All rights reserved.
//

/**
 *  微信支付调用工具类
 */

#import <Foundation/Foundation.h>

@interface QCWeChatPayHandler : NSObject

/// 发起微信商户服务器端签名支付
+ (void)QCWeChatPay_SER;

/// 发起微信 APP 端签名支付
+ (void)QCWeChatPay_APP;

@end
