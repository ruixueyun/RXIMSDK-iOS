//
//  JXIMMessage.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/8/24.
//

#import <Foundation/Foundation.h>
#import "JXGroupAtInfo.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    /** 未知 */
    JXIMMessageType_UnknownMt = 0,
    /** 文字 */
    JXIMMessageType_Text = 1,
    /** 表情 */
    JXIMMessageType_Face = 2,
    /** 图片 */
    JXIMMessageType_Image = 3,
    /** 语音 */
    JXIMMessageType_Audio = 4,
    /** 视频 */
    JXIMMessageType_Video = 5,
    /** 文件 */
    JXIMMessageType_File = 6,
    /** 位置 */
    JXIMMessageType_Position = 7,
    /** 回复 */
    JXIMMessageType_Reply = 8,
    /** 合并转发 */
    JXIMMessageType_MergeTransmit = 9,
    /** 自定义 */
    JXIMMessageType_Custom = 255,
} JXIMMessageType;

typedef enum : NSUInteger {
    /** 未知 */
    JXIMSessionType_UnknownTt = 0,
    /** 单聊 */
    JXIMSessionType_single,
    /** 群聊 */
    JXIMSessionType_group,
} JXIMSessionType;

typedef enum : NSUInteger {
    /** 发送失败 */
    JXIMMsgStatus_failed = 0,
    /** 发送成功 */
    JXIMMsgStatus_success = 1,
    /** 发送中 */
    JXIMMsgStatus_sending = 2,
} JXIMMsgStatus;

typedef enum : NSUInteger {
    /** 发送失败 */
    JXIMMsgAttr_read = 1,
    /** 发送成功 */
    JXIMMsgAttr_recall = 2,
    /** 发送中 */
    JXIMMsgAttr_delete = 4,
} JXIMMsgAttr;

typedef enum : NSUInteger {
    /** 群创建 */
    JXGroupOptioinType_create = 1,
} JXGroupOptioinType;

@interface JXIMMessage : NSObject

/** 发送人id */
@property(nonatomic, copy) NSString *sender;

/** 目标id 单聊为对方id，群聊为群id */
@property(nonatomic, copy) NSString *target;

/** 会话类型 */
@property (nonatomic, assign) JXIMSessionType sessionType;

/** 消息类型 */
@property(nonatomic, assign) JXIMMessageType messageType;

/** 消息状态 */
@property(nonatomic, assign) JXIMMsgStatus messageStatus;

/** 子消息类型 */
@property(nonatomic, assign) NSInteger subType;

/** 发送人客户端类型 */
@property(nonatomic, assign) NSInteger clientType;

/** 服务端唯一消息号 */
@property(nonatomic, assign) NSInteger msgId;

/** 消息发送者本地消息序号, 仅在客户端发送消息时有值 */
@property(nonatomic, assign) NSInteger localId;

/** 时间戳, 精确到毫秒 */
@property(nonatomic, assign) NSInteger timestamp;

/** 推送信息(json) */
@property(nonatomic, copy) NSString *pushBody;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

/** 消息内容 */
@property (nonatomic, strong) id content;

/** 是否为撤回消息 */
@property (nonatomic, assign) BOOL isRevoke;

/** 是否已读 */
@property (nonatomic, assign) BOOL isRead;

/** 是否删除 */
@property (nonatomic,assign) BOOL isDelete;

//群消息
/** 对于\@用户的推送信息(json) */
@property(nonatomic, copy) NSString *atPushBody;

/** \@ 用户 OpenID 列表 */
@property(nonatomic, strong) NSMutableDictionary<NSString*, JXGroupAtInfo*> *at;

/** 群操作类型 */
@property (nonatomic,assign) JXGroupOptioinType optionType;

@end

NS_ASSUME_NONNULL_END
