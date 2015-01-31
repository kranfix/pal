/**
 *
 * Computes a real FIR filter (direct-form) with 'h' symmetric coefficients 
 * The filter is assumed to have a  symmetric impulse response. The real input
 * data is stored in vector x. The filter output result is stored in vector r. 
 * The function maintains the array 'dbuf' containing the previous delayed 
 * input values to allow consecutive processing of input data blocks. 

 * @param x     Pointer to input vector of 'n' elements
 *
 * @param h     Pointer to first half of symmetric filter coefficients.
 *
 * @param dbuf  Pointer to delay buffer of length nh*2+2
 *
 * @param r     Pointer to result vector
 *
 * @param nh    The number of coefficients of the filter.
 *
 * @param nx    The number of input (and output) samples
 *
 * @return      None
 *
 */


void p_firsym_32f (float* x, float* h, float* dbuf, int nx, int nh, float* r){


/*PLACE CODE HERE*/

}
