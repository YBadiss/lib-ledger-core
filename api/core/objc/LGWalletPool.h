// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#import "LGBitcoinLikeNetworkParameters.h"
#import <Foundation/Foundation.h>
@class LGBitcoinLikeExtendedPublicKeyProvider;
@class LGConfiguration;
@class LGLogger;
@class LGPreferences;
@protocol LGBitcoinLikeNetworkParametersCallback;
@protocol LGGetBitcoinLikeWalletCallback;


@interface LGWalletPool : NSObject

- (void)getOrCreateBitcoinLikeWallet:(nullable LGBitcoinLikeExtendedPublicKeyProvider *)publicKeyProvider
                       networkParams:(nonnull LGBitcoinLikeNetworkParameters *)networkParams
                       configuration:(nullable LGConfiguration *)configuration
                            callback:(nullable id<LGGetBitcoinLikeWalletCallback>)callback;

- (void)getBitcoinLikeWallet:(nonnull NSString *)identifier
                    callback:(nullable id<LGGetBitcoinLikeWalletCallback>)callback;

- (void)getSupportedBitcoinLikeNetworkParameters:(nullable id<LGBitcoinLikeNetworkParametersCallback>)callback;

- (void)addBitcoinLikeNetworkParameters:(nonnull LGBitcoinLikeNetworkParameters *)params;

- (void)removeBitcoinLikenetworkParameters:(nonnull LGBitcoinLikeNetworkParameters *)params;

- (nullable LGLogger *)getLogger;

- (nullable LGPreferences *)getPreferences;

- (nullable LGPreferences *)getWalletPreferences:(nonnull NSString *)walletIdentifier;

- (nullable LGPreferences *)getAccountPreferences:(nonnull NSString *)walletIdentifier
                                    accountNumber:(int32_t)accountNumber;

- (nullable LGPreferences *)getOperationPreferences:(nonnull NSString *)uid;

@end
