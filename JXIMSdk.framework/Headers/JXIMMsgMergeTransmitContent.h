//
//  JXIMMsgMergeTransmitContent.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/7.
//

#import <Foundation/Foundation.h>
#import "JXIMMsgPubSimpleContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface JXIMMsgMergeTransmit : NSObject

/** 发送人id */
@property(nonatomic, copy) NSString *sender;
/** 目标id 单聊为对方id，群聊为群id */
@property(nonatomic, copy) NSString *target;
/** 服务端唯一消息号 */
@property(nonatomic, assign) NSInteger msgId;
/** 时间戳, 精确到毫秒 */
@property(nonatomic, assign) NSInteger timestamp;
/** 消息内容 */
@property(nonatomic, strong) JXIMMsgPubSimpleContent *content;

@end

@interface JXIMMsgMergeTransmitContent : NSObject

@property(nonatomic, strong) NSArray <JXIMMsgMergeTransmit *> *mergeContent;

@end

NS_ASSUME_NONNULL_END
