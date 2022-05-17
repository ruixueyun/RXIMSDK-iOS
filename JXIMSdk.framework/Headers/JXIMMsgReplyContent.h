//
//  JXIMMsgReplyContent.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/7.
//

#import <Foundation/Foundation.h>
#import "JXIMMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JXIMReferenceMsg : NSObject

/** 发送人id */
@property(nonatomic, copy) NSString *sender;

/** 会话类型 */
@property (nonatomic, assign) JXIMSessionType sessionType;

/** 消息类型 */
@property(nonatomic, assign) JXIMMessageType messageType;

/** 服务端唯一消息号 */
@property(nonatomic, assign) NSInteger msgId;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

/** 消息内容 */
@property (nonatomic, strong) id content;

@end

@interface JXIMMsgReplyContent : NSObject

/** 关联的消息 */
@property(nonatomic, strong) JXIMReferenceMsg *referenceMsg;

/** 回复的内容 */
@property(nonatomic, strong) NSString *replyContent;

@end

NS_ASSUME_NONNULL_END
