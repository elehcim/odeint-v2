/*
 [auto_generated]
 boost/numeric/odeint/external/thrust/thrust_operations.hpp

 [begin_description]
 Operations of thrust zipped iterators. Is the counterpart of the thrust_algebra.
 [end_description]

 Copyright 2009-2011 Karsten Ahnert
 Copyright 2009-2011 Mario Mulansky

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
 */


#ifndef BOOST_NUMERIC_ODEINT_EXTERNAL_THRUST_THRUST_OPERATIONS_HPP_INCLUDED
#define BOOST_NUMERIC_ODEINT_EXTERNAL_THRUST_THRUST_OPERATIONS_HPP_INCLUDED

namespace boost {
namespace numeric {
namespace odeint {

#include <thrust/tuple.h>
#include <thrust/iterator/zip_iterator.h>

/**ToDo extend to scale_sum13 for rk78 */

struct thrust_operations
{
    template< class Fac1 = double , class Fac2 = Fac1 >
    struct scale_sum2
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;

        scale_sum2( const Fac1 alpha1 , const Fac2 alpha2 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) + m_alpha2 * thrust::get<2>(t);
        }
    };

    template< class Fac1 = double , class Fac2 = Fac1 >
    struct scale_sum_swap2
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;

        scale_sum_swap2( const Fac1 alpha1 , const Fac2 alpha2 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            typename thrust::tuple_element<0,Tuple>::type tmp = thrust::get<0>(t);
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) + m_alpha2 * thrust::get<2>(t);
            thrust::get<1>(t) = tmp;
        }
    };

    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 >
    struct scale_sum3
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;

        scale_sum3( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t);
        }
    };


    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 >
    struct scale_sum4
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;

        scale_sum4( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 , const Fac4 alpha4 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) , m_alpha4( alpha4 ){ }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t);
        }
    };


    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 ,
            class Fac4 = Fac3 , class Fac5 = Fac4 >
    struct scale_sum5
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;

        scale_sum5( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t);
        }
    };


    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 ,
            class Fac4 = Fac3 , class Fac5 = Fac4 , class Fac6 = Fac5 >
    struct scale_sum6
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;

        scale_sum6( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t);
        }
    };


    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 >
    struct scale_sum7
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;

        scale_sum7( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) ;
        }
    };

//Added 8
    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 , class Fac8 = Fac7 >
    struct scale_sum8
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;
        const Fac8 m_alpha8;

        scale_sum8( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 , const Fac8 alpha8 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) , m_alpha8( alpha8 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) +
                    m_alpha8 * thrust::get<8>(t) ;
        }
    };

//Added 9
    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 , class Fac8 = Fac7 , class Fac9 = Fac8 >
    struct scale_sum9
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;
        const Fac8 m_alpha8;
        const Fac9 m_alpha9;

        scale_sum9( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 , const Fac8 alpha8 , 
                const Fac9 alpha9 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
            m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) , m_alpha8( alpha8 ) , 
            m_alpha9( alpha9 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) +
                    m_alpha8 * thrust::get<8>(t) +
                    m_alpha9 * thrust::get<9>(t) ;
        }
    };

//Added 10 - FIXME
    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 , class Fac8 = Fac7 , class Fac9 = Fac8 ,
            class Fac10 = Fac9 >
    struct scale_sum10
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;
        const Fac8 m_alpha8;
        const Fac9 m_alpha9;
        const Fac10 m_alpha10;

        scale_sum10( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 , const Fac8 alpha8 , 
                const Fac9 alpha9 , const Fac10 alpha10 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
        m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) , m_alpha8( alpha8 ) , 
        m_alpha9( alpha9 ) , m_alpha10( alpha10 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) +
                    m_alpha8 * thrust::get<8>(t) +
                    m_alpha9 * thrust::get<9>(t) +
                    m_alpha10 * thrust::get<10>(t) ;
        }
    };

//Added 11 - FIXME
    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 , class Fac8 = Fac7 , class Fac9 = Fac8 ,
            class Fac10 = Fac9 , class Fac11 = Fac10 >
    struct scale_sum11
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;
        const Fac8 m_alpha8;
        const Fac9 m_alpha9;
        const Fac10 m_alpha10;
        const Fac11 m_alpha11;

        scale_sum11( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 , const Fac8 alpha8 , 
                const Fac9 alpha9 , const Fac10 alpha10 , const Fac11 alpha11 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) , m_alpha8( alpha8 ) , 
          m_alpha9( alpha9 ) , m_alpha10( alpha10 ) , m_alpha11( alpha11 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) +
                    m_alpha8 * thrust::get<8>(t) +
                    m_alpha9 * thrust::get<9>(t) +
                    m_alpha10 * thrust::get<10>(t) +
                    m_alpha11 * thrust::get<11>(t) ;
        }
    };

//Added 12 - FIXME
    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 , class Fac8 = Fac7 , class Fac9 = Fac8 ,
            class Fac10 = Fac9 , class Fac11 = Fac10 , class Fac12 = Fac11 >
    struct scale_sum12
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;
        const Fac8 m_alpha8;
        const Fac9 m_alpha9;
        const Fac10 m_alpha10;
        const Fac11 m_alpha11;
        const Fac12 m_alpha12;

        scale_sum12( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 , const Fac8 alpha8 , 
                const Fac9 alpha9 , const Fac10 alpha10 , const Fac11 alpha11 , const Fac12 alpha12 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) , m_alpha8( alpha8 ) , 
          m_alpha9( alpha9 ) , m_alpha10( alpha10 ) , m_alpha11( alpha11 ) , m_alpha12( alpha12 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) +
                    m_alpha8 * thrust::get<8>(t) +
                    m_alpha9 * thrust::get<9>(t) +
                    m_alpha10 * thrust::get<10>(t) +
                    m_alpha11 * thrust::get<11>(t) +
                    m_alpha12 * thrust::get<12>(t) ;
        }
    };

//Added 13 - FIXME
    template< class Fac1 = double , class Fac2 = Fac1 , class Fac3 = Fac2 , class Fac4 = Fac3 ,
            class Fac5 = Fac4 , class Fac6 = Fac5 , class Fac7 = Fac6 , class Fac8 = Fac7 , class Fac9 = Fac8 ,
            class Fac10 = Fac9 , class Fac11 = Fac10 , class Fac12 = Fac11 , class Fac13 = Fac12 >
    struct scale_sum13
    {
        const Fac1 m_alpha1;
        const Fac2 m_alpha2;
        const Fac3 m_alpha3;
        const Fac4 m_alpha4;
        const Fac5 m_alpha5;
        const Fac6 m_alpha6;
        const Fac7 m_alpha7;
        const Fac8 m_alpha8;
        const Fac9 m_alpha9;
        const Fac10 m_alpha10;
        const Fac11 m_alpha11;
        const Fac12 m_alpha12;
        const Fac13 m_alpha13;

        scale_sum13( const Fac1 alpha1 , const Fac2 alpha2 , const Fac3 alpha3 ,
                const Fac4 alpha4 , const Fac5 alpha5 , const Fac6 alpha6 , const Fac7 alpha7 , const Fac8 alpha8 , 
                const Fac9 alpha9 , const Fac10 alpha10 , const Fac11 alpha11 , const Fac12 alpha12 , const Fac13 alpha13 )
        : m_alpha1( alpha1 ) , m_alpha2( alpha2 ) , m_alpha3( alpha3 ) ,
          m_alpha4( alpha4 ) , m_alpha5( alpha5 ) , m_alpha6( alpha6 ) , m_alpha7( alpha7 ) , m_alpha8( alpha8 ) , 
          m_alpha9( alpha9 ) , m_alpha10( alpha10 ) , m_alpha11( alpha11 ) , m_alpha12( alpha12 ) , m_alpha13( alpha13 ) { }

        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            thrust::get<0>(t) = m_alpha1 * thrust::get<1>(t) +
                    m_alpha2 * thrust::get<2>(t) +
                    m_alpha3 * thrust::get<3>(t) +
                    m_alpha4 * thrust::get<4>(t) +
                    m_alpha5 * thrust::get<5>(t) +
                    m_alpha6 * thrust::get<6>(t) +
                    m_alpha7 * thrust::get<7>(t) +
                    m_alpha8 * thrust::get<8>(t) +
                    m_alpha9 * thrust::get<9>(t) +
                    m_alpha10 * thrust::get<10>(t) +
                    m_alpha11 * thrust::get<11>(t) +
                    m_alpha12 * thrust::get<12>(t) +
                    m_alpha13 * thrust::get<13>(t) ;
        }
    };

    template< class Fac1 = double >
    struct rel_error
    {
        const Fac1 m_eps_abs , m_eps_rel , m_a_x , m_a_dxdt;

        rel_error( const Fac1 eps_abs , const Fac1 eps_rel , const Fac1 a_x , const Fac1 a_dxdt )
        : m_eps_abs( eps_abs ) , m_eps_rel( eps_rel ) , m_a_x( a_x ) , m_a_dxdt( a_dxdt ) { }


        template< class Tuple >
        __host__ __device__
        void operator()( Tuple t ) const
        {
            using std::abs;
            thrust::get< 0 >( t ) = abs( thrust::get< 0 >( t ) ) /
                    ( m_eps_abs + m_eps_rel * ( m_a_x * abs( thrust::get< 1 >( t ) + m_a_dxdt * abs( thrust::get< 2 >( t ) ) ) ) );
        }

        typedef void result_type;
    };


    /*
     * for usage in reduce
     */

    template< class Value >
    struct maximum
    {
        template< class Fac1 , class Fac2 >
        __host__ __device__
        Value operator()( const Fac1 t1 , const Fac2 t2 ) const
        {
            using std::max;
            return ( abs( t1 ) < abs( t2 ) ) ? t2 : t1 ;
        }

        typedef Value result_type;
    };


};

} // odeint
} // numeric
} // boost


#endif // BOOST_NUMERIC_ODEINT_EXTERNAL_THRUST_THRUST_OPERATIONS_HPP_INCLUDED
