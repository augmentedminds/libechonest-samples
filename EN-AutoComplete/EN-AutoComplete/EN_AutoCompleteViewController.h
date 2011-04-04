//
//  EN_AutoCompleteViewController.h
//  EN-AutoComplete
//
//  Created by Art Gillespie on 3/17/11. art@tapsquare.com
//

#import <UIKit/UIKit.h>
#import "ENAPIRequest.h"

@interface EN_AutoCompleteViewController : UITableViewController <UISearchBarDelegate, ENAPIRequestDelegate> {
    @private
    NSMutableArray *suggestResults;
    ENAPIRequest *suggestRequest;
}

@end
