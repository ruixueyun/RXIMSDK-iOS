//
//  JXIMSendMessage.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/19.
//

#import <Foundation/Foundation.h>
#import "JXIMMessage.h"
#import "JXGroupAtInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface JXIMSendMessage : NSObject

/** 目标id 单聊为对方id，群聊为群id */
@property(nonatomic, copy) NSString *target;

/** 会话类型 */
@property (nonatomic, assign) JXIMSessionType sessionType;

/** 消息类型 */
@property(nonatomic, assign) JXIMMessageType messageType;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

/** 消息内容 */
@property (nonatomic, strong) id content;

/** 群聊@ */
@property(nonatomic, strong) NSMutableDictionary<NSString*, JXGroupAtInfo*> *at;

@end

NS_ASSUME_NONNULL_END
