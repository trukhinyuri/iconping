//
//  iconpingAppDelegate.h
//  iconping
//
//  Created by Salvatore Sanfilippo on 25/07/11.
//  Updated by Yuri Trukhin <yuri@trukhin.com> on 01/05/17.
//  Copyright Salvatore Sanfilippo, Yuri Trukhin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface iconpingAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    NSStatusItem *myStatusItem;
    NSImage *myStatusImageOK, *myStatusImageSLOW, *myStatusImageKO;
    NSMenu *myMenu;
    NSMenuItem *statusMenuItem, *openAtStartupMenuItem;
    uint16_t icmp_id;
    uint16_t icmp_seq;
    int64_t last_received_time;
    int last_rtt;
    int icmp_socket;
    int connection_state;
}

- (void) changeConnectionState: (int) state;

@property (assign) IBOutlet NSWindow *window;
@end

int setSocketNonBlocking(int fd);
int64_t ustime(void);
