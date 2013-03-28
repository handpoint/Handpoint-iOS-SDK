//
//  FinanceTransactionOperation.h
//  headstart
//

#import "IHostProcessor.h"

class RequestCommand;
@class HeftConnection;
@protocol IResponseProcessor;

@interface FinanceTransactionOperation : NSOperation<IHostProcessor>

- (id)initWithRequest:(RequestCommand*)aRequest connection:(HeftConnection*)aConnection resultsProcessor:(id<IResponseProcessor>)processor sharedSecret:(NSData*)aSharedSecret;

@end
