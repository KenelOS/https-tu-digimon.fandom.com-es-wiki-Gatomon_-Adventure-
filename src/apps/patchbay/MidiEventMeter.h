/* MidiEventMeter.h
 * ----------------
 * A UI widget that measures the amount of MIDI data generated by a
 * consumer.
 *
 * Copyright 2013, Haiku, Inc. All rights reserved.
 * Distributed under the terms of the MIT License.
 *
 * Revisions by Pete Goodeve
 *
 * Copyright 1999, Be Incorporated.   All Rights Reserved.
 * This file may be used under the terms of the Be Sample Code License.
 */
#ifndef MIDIEVENTMETER_H
#define MIDIEVENTMETER_H

#include <Point.h>
#include <Rect.h>

class BMidiProducer;
class CountEventConsumer;
class BView;

class MidiEventMeter
{
public:
	MidiEventMeter(int32 producerID);
	~MidiEventMeter();

	void Pulse(BView* view);		
	BRect Bounds() const;
	void Draw(BView* view);

private:
	int32 CalcMeterLevel(int32 eventCount) const;
	
	CountEventConsumer* fCounter;
	int32 fMeterLevel;
};

#endif /* MIDIEVENTMETER_H */
