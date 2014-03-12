#ifndef DT_AV_TYPE_H
#define DT_AV_TYPE_H

typedef enum{
    MEDIA_FORMAT_INVALID = -1,
	MEDIA_FORMAT_MPEGTS,
	MEDIA_FORMAT_MPEGPS,
	MEDIA_FORMAT_RM,
	MEDIA_FORMAT_AVI,
	MEDIA_FORMAT_MKV,
	MEDIA_FORMAT_MOV,
	MEDIA_FORMAT_MP4,
	MEDIA_FORMAT_FLV,
	MEDIA_FORMAT_AAC,
	MEDIA_FORMAT_AC3,
	MEDIA_FORMAT_MP3,
	MEDIA_FORMAT_WAV,
	MEDIA_FORMAT_DTS,
	MEDIA_FORMAT_FLAC,
	MEDIA_FORMAT_H264,
	MEDIA_FORMAT_AVS,
	MEDIA_FORMAT_M2V,
	MEDIA_FORMAT_P2P,
	MEDIA_FORMAT_ASF,
	MEDIA_FORMAT_RTSP,
	MEDIA_FORMAT_APE,
	MEDIA_FORMAT_AMR,
	MEDIA_FORMAT_UNKOWN,
}media_format_t;

typedef enum{
    VIDEO_FORMAT_INVALID = -1,
	VIDEO_FORMAT_UNKOWN,
}video_format_t;

typedef enum{
    AUDIO_FORMAT_INVALID = -1,
	AUDIO_FORMAT_UNKOWN,
}audio_format_t;

typedef enum{
    SUBTITLE_FORMAT_INVALID = -1,
    SUBTITLE_FORMAT_UNKOWN,
}subtitle_format_t;


#endif