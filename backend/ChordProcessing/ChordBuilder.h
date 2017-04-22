/** @author Sean White and Matthew Doran */

#ifndef CHORDBUILDER_H
#define CHORDBUILDER_H

#include <vector>

class ChordBuilder
{
	public:
		/** Constructor */
		ChordBuilder();
		      /** Accepts some vector of 12 doubles*/
			void buildChord(std::vector<double> chroma);
		      /** Accepts some array of 12 doubles*/
			void buildChord(double* chroma);
};

#endif