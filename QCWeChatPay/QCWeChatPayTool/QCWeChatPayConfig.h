//
//  QCWeChatPayConfig.h
//  QCWeChatPay
//
//  Created by JHQ0228 on 2016/12/20.
//  Copyright © 2016年 QianQian-Studio. All rights reserved.
//

/**
 *  微信支付配置文件
 */

#ifndef QCWeChatPayConfig_h
#define QCWeChatPayConfig_h


#import <UIKit/UIKit.h>
#import "WXApi.h"
#import "QCWeChatPayManager.h"      // 微信支付结果回调类
#import "QCWeChatPayHandler.h"      // 微信支付调用类
#import "QCWeChatSignAdaptor.h"     // 微信签名工具类
#import "XMLDictionary.h"           // XML 转换工具类

/**
 * -----------------------------------
 *  发起微信支付需要配置的参数
 * -----------------------------------
 */

// 开放平台开发者中心获取的 APPID https://open.weixin.qq.com
#define QCWechatAPPID               @"wxb4ba3c02aa476ea1"   // @"wxbff3f84cc71554c*"

// 开放平台开发者中心获取的 商户号
#define QCWechatMCHID               @"13809*9002"

// 开放平台开发者中心获取的 AppSecret
#define QCWechatAPPSecret           @"e5d5a34eb45ad58b64d*bf2eef8b7*22"

// 商户平台设置的 “API密钥” http://pay.weixin.qq.com
// 安全校验码（MD5）密钥，为了安全，设置为以数字和字母组成的 32 字符串
#define QCWechatPartnerKey          @"6de04e7247f9aab635966cee18*ccced"


/**
 * -----------------------------------
 *  商户微信支付后台接口
 * -----------------------------------
 */

#define QCUrlUserWeChatPay          @"test"


/**
 * -----------------------------------
 *  统一下单接口
 * -----------------------------------
 */

#define QCUrlWeChatUnifiedOrder     @"https://api.mch.weixin.qq.com/pay/unifiedorder"


/**
 * -----------------------------------
 *  统一下单请求参数键值
 * -----------------------------------
 */

// 必填请求参数
#define WXAPPID         @"appid"            // 应用id，微信开放平台审核通过的应用 APPID
#define WXMCHID         @"mch_id"           // 商户号，微信支付分配的商户号
#define WXNONCESTR      @"nonce_str"        // 随机字符串，随机字符串，不长于 32 位。推荐随机数生成算法
#define WXSIGN          @"sign"             // 签名，详见签名生成算法
#define WXBODY          @"body"             // 商品描述，APP——需传入应用市场上的 APP 名字-实际商品名称，天天爱消除-游戏充值。
#define WXOUTTRADENO    @"out_trade_no"     // 商户订单号，商户系统内部的订单号,32 个字符内、可包含字母, 其他说明见商户订单号
#define WXTOTALFEE      @"total_fee"        // 总金额，订单总金额，单位为分，详见支付金额
#define WXEQUIPMENTIP   @"spbill_create_ip" // 终端 IP，用户端实际 ip
#define WXNOTIFYURL     @"notify_url"       // 通知地址，接收微信支付异步通知回调地址，通知url必须为直接可访问的url，不能携带参数。
#define WXTRADETYPE     @"trade_type"       // 交易类型，支付类型

// 返回参数
#define WXPREPAYID      @"prepay_id"        // 预支付交易会话标识，微信生成的预支付回话标识，用于后续接口调用中使用，该值有效期为2小时


#endif /* QCWeChatPayConfig_h */
