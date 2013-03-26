/*
 [auto_generated]
 boost/numeric/odeint/external/thrust/thrust_algebra.hpp

 [begin_description]
 An algebra for thrusts device_vectors.
 [end_description]

 Copyright 2009-2011 Karsten Ahnert
 Copyright 2009-2011 Mario Mulansky

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
 */


#ifndef BOOST_NUMERIC_ODEINT_EXTERNAL_THRUST_THRUST_ALGEBRA_HPP_INCLUDED
#define BOOST_NUMERIC_ODEINT_EXTERNAL_THRUST_THRUST_ALGEBRA_HPP_INCLUDED


#include <thrust/device_vector.h>
#include <thrust/for_each.h>
#include <thrust/iterator/zip_iterator.h>

#include <boost/range.hpp>

namespace boost {
namespace numeric {
namespace odeint {



/** ToDO extend until for_each14 for rk78 */

/*
 * The const versions are needed for boost.range to work, i.e.
 * it allows you to do
 * for_each1( make_pair( vec1.begin() , vec1.begin() + 10 ) , op );
 */

struct thrust_algebra
{
    template< class StateType , class Operation >
    static void for_each1( StateType &s , Operation op )
    {
        thrust::for_each( boost::begin(s) , boost::begin(s) , op );
    }

    template< class StateType1 , class StateType2 , class Operation >
    static void for_each2( StateType1 &s1 , StateType2 &s2 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ) ) ,
                        thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                                boost::end(s2) ) ) ,
                                op);
    }

    template< class StateType1 , class StateType2 , class StateType3 , class Operation >
    static void for_each3( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ) ) ,
                        thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                                boost::end(s2) ,
                                boost::end(s3) ) ) ,
                                op);
    }

    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class Operation >
    static void for_each4( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ) ) ,
                        thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                                boost::end(s2) ,
                                boost::end(s3) ,
                                boost::end(s4) ) ) ,
                                op);
    }

    template< class StateType1 , class StateType2 , class StateType3 ,
    class StateType4 , class StateType5 ,class Operation >
    static void for_each5( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ) ) ,
                        thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                                boost::end(s2) ,
                                boost::end(s3) ,
                                boost::end(s4) ,
                                boost::end(s5) ) ) ,
                                op);
    }

    template< class StateType1 , class StateType2 , class StateType3 ,
    class StateType4 , class StateType5 , class StateType6 , class Operation >
    static void for_each6( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ) ) ,
                        thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                                boost::end(s2) ,
                                boost::end(s3) ,
                                boost::end(s4) ,
                                boost::end(s5) ,
                                boost::end(s6) ) ) ,
                                op);
    }

    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class Operation >
    static void for_each7( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ) ) ,
                        thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                                boost::end(s2) ,
                                boost::end(s3) ,
                                boost::end(s4) ,
                                boost::end(s5) ,
                                boost::end(s6) ,
                                boost::end(s7) ) ) ,
                                op);
    }

    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , class Operation >
    static void for_each8( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ,
                        boost::begin(s8) ) ) ,
                thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                        boost::end(s2) ,
                        boost::end(s3) ,
                        boost::end(s4) ,
                        boost::end(s5) ,
                        boost::end(s6) ,
                        boost::end(s7) ,
                        boost::end(s8) ) ) ,
                op);
    }

//Added 9
    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , 
    class StateType9 , class Operation >
    static void for_each9( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , 
            StateType9 &s9 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ,
                        boost::begin(s8) ,
                        boost::begin(s9) ) ) ,
                thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                        boost::end(s2) ,
                        boost::end(s3) ,
                        boost::end(s4) ,
                        boost::end(s5) ,
                        boost::end(s6) ,
                        boost::end(s7) ,
                        boost::end(s8) ,
                        boost::end(s9) ) ) ,
                op);
    }

//Added 10 - FIXME
    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , 
    class StateType9 , class StateType10 , class Operation >
    static void for_each10( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , 
            StateType9 &s9 , StateType10 &s10 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ,
                        boost::begin(s8) ,
                        boost::begin(s9) ,
                        boost::begin(s10) ) ),
                thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                        boost::end(s2) ,
                        boost::end(s3) ,
                        boost::end(s4) ,
                        boost::end(s5) ,
                        boost::end(s6) ,
                        boost::end(s7) ,
                        boost::end(s8) ,
                        boost::end(s9) ,
                        boost::end(s10) ) ) ,
                op);
    }

//Added 11 - FIXME
    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , 
    class StateType9 , class StateType10 , class Operation >
    static void for_each11( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , 
            StateType9 &s9 , StateType10 &s10 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator(
                    thrust::make_tuple(
                        thrust::make_tuple(boost::begin(s1)) ,
                        thrust::make_tuple(boost::begin(s2)) ,
                        thrust::make_tuple(boost::begin(s3)) ,
                        thrust::make_tuple(boost::begin(s4)) ,
                        thrust::make_tuple(boost::begin(s5)) ,
                        thrust::make_tuple(boost::begin(s6)) ,
                        thrust::make_tuple(boost::begin(s7)) ,
                        thrust::make_tuple(boost::begin(s8)) ,
                        thrust::make_tuple(boost::begin(s9)) ,
                        thrust::make_tuple(boost::begin(s10) , boost::begin(s11) ) ) ),
                thrust::make_zip_iterator(
                    thrust::make_tuple(
                        thrust::make_tuple(boost::end(s1)) ,
                        thrust::make_tuple(boost::end(s2)) ,
                        thrust::make_tuple(boost::end(s3)) ,
                        thrust::make_tuple(boost::end(s4)) ,
                        thrust::make_tuple(boost::end(s5)) ,
                        thrust::make_tuple(boost::end(s6)) ,
                        thrust::make_tuple(boost::end(s7)) ,
                        thrust::make_tuple(boost::end(s8)) ,
                        thrust::make_tuple(boost::end(s9)) ,
                        thrust::make_tuple(boost::end(s10) , boost::end(s11) ) ) ),
                op);
    }

//Added 12 - FIXME
    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , 
    class StateType9 , class TupleType10 , class Operation >
    static void for_each12( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , 
            StateType9 &s9 , TupleType10 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ,
                        boost::begin(s8) ,
                        boost::begin(s9) ,
                    thrust::make_tuple(
                        boost::begin(s10) ,
                        boost::begin(s11) ,
                        boost::begin(s12) ) ) ),
                thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                        boost::end(s2) ,
                        boost::end(s3) ,
                        boost::end(s4) ,
                        boost::end(s5) ,
                        boost::end(s6) ,
                        boost::end(s7) ,
                        boost::end(s8) ,
                        boost::end(s9) ,
                    thrust::make_tuple(
                        boost::end(s10) ,
                        boost::end(s11) ,
                        boost::end(s12) ) ) ),
                op);
    }

//Added 13 - FIXME
    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , 
    class StateType9 , class TupleType10 , class Operation >
    static void for_each13( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , 
            StateType9 &s9 , TupleType10 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ,
                        boost::begin(s8) ,
                        boost::begin(s9) ,
                    thrust::make_tuple(
                        boost::begin(s10) ,
                        boost::begin(s11) ,
                        boost::begin(s12) ,
                        boost::begin(s13) ) ) ),
                thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                        boost::end(s2) ,
                        boost::end(s3) ,
                        boost::end(s4) ,
                        boost::end(s5) ,
                        boost::end(s6) ,
                        boost::end(s7) ,
                        boost::end(s8) ,
                        boost::end(s9) ,
                    thrust::make_tuple(
                        boost::end(s10) ,
                        boost::end(s11) ,
                        boost::end(s12) ,
                        boost::end(s13) ) ) ),
                op);
    }

//Added 14 - FIXME
    template< class StateType1 , class StateType2 , class StateType3 , class StateType4 ,
    class StateType5 , class StateType6 , class StateType7 , class StateType8 , 
    class StateType9 , class TupleType10 , class Operation >
    static void for_each14( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 ,
            StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , StateType8 &s8 , 
            StateType9 &s9 , TupleType10 , Operation op )
    {
        thrust::for_each(
                thrust::make_zip_iterator( thrust::make_tuple( boost::begin(s1) ,
                        boost::begin(s2) ,
                        boost::begin(s3) ,
                        boost::begin(s4) ,
                        boost::begin(s5) ,
                        boost::begin(s6) ,
                        boost::begin(s7) ,
                        boost::begin(s8) ,
                        boost::begin(s9) ,
                    thrust::make_tuple(
                        boost::begin(s10) ,
                        boost::begin(s11) ,
                        boost::begin(s12) ,
                        boost::begin(s13) ,
                        boost::begin(s14) ) ) ),
                thrust::make_zip_iterator( thrust::make_tuple( boost::end(s1) ,
                        boost::end(s2) ,
                        boost::end(s3) ,
                        boost::end(s4) ,
                        boost::end(s5) ,
                        boost::end(s6) ,
                        boost::end(s7) ,
                        boost::end(s8) ,
                        boost::end(s9) ,
                    thrust::make_tuple(
                        boost::end(s10) ,
                        boost::end(s11) ,
                        boost::end(s12) ,
                        boost::end(s13) ,
                        boost::end(s14) ) ) ),
                op);
    }

    template< class Value , class S , class Red >
    Value reduce( const S &s , Red red , Value init)
    {
        return thrust::reduce( boost::begin( s ) , boost::end( s ) , init , red );
    }




};


} // odeint
} // numeric
} // boost



#endif // BOOST_NUMERIC_ODEINT_EXTERNAL_THRUST_THRUST_ALGEBRA_HPP_INCLUDED
