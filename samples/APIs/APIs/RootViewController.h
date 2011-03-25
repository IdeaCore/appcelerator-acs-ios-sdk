//
//  RootViewController.h
//  APIs
//
//  Created by Wei Kong on 3/18/11.
//  Copyright 2011 Cocoafish Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Cocoafish.h"
#import "CheckinViewController.h"

typedef enum SECTIONS {
    USERS,
    PLACES,
    STATUSES,
    KEY_VALUES,
    CHECKINS,
//    MESSAGES,
    PHOTOS,
    NUM_SECTIONS
} sections;

@interface RootViewController : UITableViewController <UIAlertViewDelegate, CCNetworkManagerDelegate, CCFBSessionDelegate> {
    CCPlace *testPlace;
    NSIndexPath *lastIndexPath;
    CCNetworkManager *_ccNetworkManager;
    CCPhoto *testPhoto;
}


@end