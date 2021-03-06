//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg.
//

#ifndef _GPSRROUTINGPACKET_M_H_
#define _GPSRROUTINGPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "RoutingPacket_m.h"
#include "GeoMathHelper.h"
// }}

/**
 * Enum generated from <tt>src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg:11</tt> by nedtool.
 * <pre>
 * enum GpsrForwardingMode
 * {
 * 
 *     GPSR_GREEDY_ROUTING = 0;
 *     GPSR_PERIMETER_ROUTING = 1;
 * }
 * </pre>
 */
enum GpsrForwardingMode {
    GPSR_GREEDY_ROUTING = 0,
    GPSR_PERIMETER_ROUTING = 1
};

/**
 * Enum generated from <tt>src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg:16</tt> by nedtool.
 * <pre>
 * enum GpsrPacketDef
 * {
 * 
 *     GPSR_DATA_PACKET = 0;       // data packet
 *     GPSR_HELLO_MSG_PACKET = 1;      // hello msg
 *     GPSR_REP_HELLO_MSG_PACKET = 2;     // rep hello msg 
 *     GPSR_SINK_ADDRESS_PACKET = 3;    // sink address
 * }
 * </pre>
 */
enum GpsrPacketDef {
    GPSR_DATA_PACKET = 0,
    GPSR_HELLO_MSG_PACKET = 1,
    GPSR_REP_HELLO_MSG_PACKET = 2,
    GPSR_SINK_ADDRESS_PACKET = 3
};

/**
 * Class generated from <tt>src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg:23</tt> by nedtool.
 * <pre>
 * packet GpsrPacket extends RoutingPacket
 * {
 *     int packetId;
 *     int GpsrPacketKind @enum(GpsrPacketDef);
 *     int routingMode @enum(GpsrForwardingMode);
 *     int previousId;
 *     Point previousLocation; // to determine last edge
 *     Point destLocation; // Ld
 *     Point perimeterRoutingStartLocation; // Lp
 *     Point perimeterRoutingFaceLocation; // Lf
 *     int currentFaceFirstSender; // e0
 *     int currentFaceFirstReceiver; // e0
 * }
 * </pre>
 */
class GpsrPacket : public ::RoutingPacket
{
  protected:
    int packetId_var;
    int GpsrPacketKind_var;
    int routingMode_var;
    int previousId_var;
    Point previousLocation_var;
    Point destLocation_var;
    Point perimeterRoutingStartLocation_var;
    Point perimeterRoutingFaceLocation_var;
    int currentFaceFirstSender_var;
    int currentFaceFirstReceiver_var;

  private:
    void copy(const GpsrPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GpsrPacket&);

  public:
    GpsrPacket(const char *name=NULL, int kind=0);
    GpsrPacket(const GpsrPacket& other);
    virtual ~GpsrPacket();
    GpsrPacket& operator=(const GpsrPacket& other);
    virtual GpsrPacket *dup() const {return new GpsrPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPacketId() const;
    virtual void setPacketId(int packetId);
    virtual int getGpsrPacketKind() const;
    virtual void setGpsrPacketKind(int GpsrPacketKind);
    virtual int getRoutingMode() const;
    virtual void setRoutingMode(int routingMode);
    virtual int getPreviousId() const;
    virtual void setPreviousId(int previousId);
    virtual Point& getPreviousLocation();
    virtual const Point& getPreviousLocation() const {return const_cast<GpsrPacket*>(this)->getPreviousLocation();}
    virtual void setPreviousLocation(const Point& previousLocation);
    virtual Point& getDestLocation();
    virtual const Point& getDestLocation() const {return const_cast<GpsrPacket*>(this)->getDestLocation();}
    virtual void setDestLocation(const Point& destLocation);
    virtual Point& getPerimeterRoutingStartLocation();
    virtual const Point& getPerimeterRoutingStartLocation() const {return const_cast<GpsrPacket*>(this)->getPerimeterRoutingStartLocation();}
    virtual void setPerimeterRoutingStartLocation(const Point& perimeterRoutingStartLocation);
    virtual Point& getPerimeterRoutingFaceLocation();
    virtual const Point& getPerimeterRoutingFaceLocation() const {return const_cast<GpsrPacket*>(this)->getPerimeterRoutingFaceLocation();}
    virtual void setPerimeterRoutingFaceLocation(const Point& perimeterRoutingFaceLocation);
    virtual int getCurrentFaceFirstSender() const;
    virtual void setCurrentFaceFirstSender(int currentFaceFirstSender);
    virtual int getCurrentFaceFirstReceiver() const;
    virtual void setCurrentFaceFirstReceiver(int currentFaceFirstReceiver);
};

inline void doPacking(cCommBuffer *b, GpsrPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GpsrPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _GPSRROUTINGPACKET_M_H_

