#ifndef _Read_File_H
#define _Read_File_H


#include "Solid.h"
#include "Array.h"
#include "Point.h"


namespace MeshLib
{
    //!	 Read_File.
    /*!	This class defines reading file in format m/n
        and generating corresponding mesh file/n
    */

    class Read_File
    {
    private:
        //!	vertex id
        int vID;
        //!	face id
        int fID;

    public:
        //!	 Constructor
        Read_File ();

        //!	Destructor
        ~Read_File();

        //!	read input file, handle different contents
        void readToSolid( Solid *mesh, std::istream &in);

        //how about w value, the format?
        ////////////////////////////////
        //...............................

        //! double to string convertor
        std::string d2String( double value);

    };
}
#endif