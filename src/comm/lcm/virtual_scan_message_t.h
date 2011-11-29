/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _virtual_scan_message_t_h
#define _virtual_scan_message_t_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _virtual_scan_message_t virtual_scan_message_t;
struct _virtual_scan_message_t
{
    int64_t    utime;
    float      elevation_angle_min;
    float      elevation_angle_max;
    float      azimuth_angle_min;
    float      azimuth_angle_max;
    float      angle_increment;
    int16_t    range_min;
    int16_t    range_max;
    double     origin[3];
    double     camera_to_world_rot[9];
    int32_t    num_rays;
    int16_t    *ray_endpoints;
};
 
virtual_scan_message_t   *virtual_scan_message_t_copy(const virtual_scan_message_t *p);
void virtual_scan_message_t_destroy(virtual_scan_message_t *p);

typedef struct _virtual_scan_message_t_subscription_t virtual_scan_message_t_subscription_t;
typedef void(*virtual_scan_message_t_handler_t)(const lcm_recv_buf_t *rbuf, 
             const char *channel, const virtual_scan_message_t *msg, void *user);

int virtual_scan_message_t_publish(lcm_t *lcm, const char *channel, const virtual_scan_message_t *p);
virtual_scan_message_t_subscription_t* virtual_scan_message_t_subscribe(lcm_t *lcm, const char *channel, virtual_scan_message_t_handler_t f, void *userdata);
int virtual_scan_message_t_unsubscribe(lcm_t *lcm, virtual_scan_message_t_subscription_t* hid);
int virtual_scan_message_t_subscription_set_queue_capacity(virtual_scan_message_t_subscription_t* subs, 
                              int num_messages);


int  virtual_scan_message_t_encode(void *buf, int offset, int maxlen, const virtual_scan_message_t *p);
int  virtual_scan_message_t_decode(const void *buf, int offset, int maxlen, virtual_scan_message_t *p);
int  virtual_scan_message_t_decode_cleanup(virtual_scan_message_t *p);
int  virtual_scan_message_t_encoded_size(const virtual_scan_message_t *p);

// LCM support functions. Users should not call these
int64_t __virtual_scan_message_t_get_hash(void);
int64_t __virtual_scan_message_t_hash_recursive(const __lcm_hash_ptr *p);
int     __virtual_scan_message_t_encode_array(void *buf, int offset, int maxlen, const virtual_scan_message_t *p, int elements);
int     __virtual_scan_message_t_decode_array(const void *buf, int offset, int maxlen, virtual_scan_message_t *p, int elements);
int     __virtual_scan_message_t_decode_array_cleanup(virtual_scan_message_t *p, int elements);
int     __virtual_scan_message_t_encoded_array_size(const virtual_scan_message_t *p, int elements);
int     __virtual_scan_message_t_clone_array(const virtual_scan_message_t *p, virtual_scan_message_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
