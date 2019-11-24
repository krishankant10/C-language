2. Solution: 
In the line bool op==(WeekDays& w1, WeekDays& w2), the op should be specified fully as operator.

The correct program is:

#include <iostream.h>

enum WeekDays
{
	mSunday,
	mMonday,
	mTuesday,
	mWednesday,
	mThursday,
	mFriday,
	mSaturday
};

bool operator==(WeekDays& w1, WeekDays& w2)
{
	if(w1== mSunday && w2 == mSunday)
		return 1;
	else if(w1== mSunday && w2 == mSunday)
		return 1;
	else if(w1== mSunday && w2 == mSunday)
		return 1;
	else if(w1== mSunday && w2 == mSunday)
		return 1;
	else if(w1== mSunday && w2 == mSunday)
		return 1;
	else if(w1== mSunday && w2 == mSunday)
		return 1;
	else if(w1== mSunday && w2 == mSunday)
		return 1;
	else
		return 0;
}
void main()
{
	WeekDays w1 = mSunday, w2 = mSunday;
	if(w1==w2)
		cout << "Same day";
	else
		cout << "Different day";
}
