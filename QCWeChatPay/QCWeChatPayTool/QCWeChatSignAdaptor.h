//
//  QCWeChatSignAdaptor.h
//  QCWeChatPay
//
//  Created by JHQ0228 on 2016/12/20.
//  Copyright © 2016年 QianQian-Studio. All rights reserved.
//

/**
 *  微信支付签名工具类
 */

#import <Foundation/Foundation.h>

@interface QCWeChatSignAdaptor : NSObject

@property (nonatomic,strong) NSMutableDictionary *dic;

- (instancetype)initWithWechatAppId:(NSString *)wechatAppId
                        wechatMCHId:(NSString *)wechatMCHId
                            tradeNo:(NSString *)tradeNo
                   wechatPartnerKey:(NSString *)wechatPartnerKey
                           payTitle:(NSString *)payTitle
                           orderNo :(NSString *)orderNo
                           totalFee:(NSString *)totalFee
                           deviceIp:(NSString *)deviceIp
                          notifyUrl:(NSString *)notifyUrl
                          tradeType:(NSString *)tradeType;

/// 创建发起支付时的 sign 签名(二次签名)
- (NSString *)createMD5SingForPay:(NSString *)appid_key
                        partnerid:(NSString *)partnerid_key
                         prepayid:(NSString *)prepayid_key
                          package:(NSString *)package_key
                         noncestr:(NSString *)noncestr_key
                        timestamp:(UInt32)timestamp_key;

@end
