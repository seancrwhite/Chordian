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
            
    private:
        std::string _buildChordForChromogram(std::vector<double> chroma);
};

#endif