//
//  JXGroupMessageGet.h
//  JXIMSdk
//
//  Created by weiyongjian on 2022/1/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXGroupMessageGet : NSObject

/** 服务端唯一消息号 */
@property(nonatomic, assign) int64_t msgId;

/** 群id */
@property(nonatomic, copy) NSString *groupId;

@end

/**
 * GroupMessageGet c2s: 群消息收到通知
 **/
@interface JXGroupMessageGetResp : NSObject

/** 服务端唯一消息号 */
@property(nonatomic, assign) NSInteger msgId;

/** 操作人openid */
@property(nonatomic, copy) NSString *openId;

/** 群id */
@property(nonatomic, copy) NSString *groupId;

@end

NS_ASSUME_NONNULL_END
