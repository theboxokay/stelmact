#include "GPXParser.h"

GPXdoc *createGPXdoc(char *fileName)
{

}

char *GPXdocToString(GPXdoc *doc)
{

}

void deleteGPXdoc(GPXdoc *doc)
{
    
}

void deleteAttribute(void *data);
char *attributeToString(void *data);
int compareAttributes(const void *first, const void *second);
void deleteWaypoint(void *data);
char *waypointToString(void *data);
int compareWaypoints(const void *first, const void *second);
void deleteRoute(void *data);
char *routeToString(void *data);
int compareRoutes(const void *first, const void *second);
void deleteTrackSegment(void *data);
char *trackSegmentToString(void *data);
int compareTrackSegments(const void *first, const void *second);
void deleteTrack(void *data);
char *trackToString(void *data);
int compareTracks(const void *first, const void *second);