/** @author Sean White and Matthew Doran */

#ifndef CHORDBUILDER_H
#define CHORDBUILDER_H

#include <vector>
#include <string>

class ChordBuilder
{
	public:
		/** Constructor */
		ChordBuilder();
		      /** Accepts some vector of 12 doubles*/
			std::string buildChord(std::vector<double> frame);
		      /** Accepts some array of 12 doubles*/
			std::string buildChord(double* frame);

			int test(int n);

      std::string _buildChordForChromogram(std::vector<double> chroma);
};

#include "nbind/nbind.h"

NBIND_CLASS(ChordBuilder){
  construct<>();
  method(buildChord);
  method(test);
  method(_buildChordForChromogram);
}

#endif
