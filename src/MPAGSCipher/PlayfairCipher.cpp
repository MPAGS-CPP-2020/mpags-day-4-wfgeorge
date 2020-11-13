// Project header includes
#include "PlayfairCipher.hpp"

PlayfairCipher::PlayfairCipher( const std::string& key ){
    setKey(key);
}

void PlayfairCipher::setKey( const std::string& key){

    //Store the original key
    key_ = key;

    //Append the alphabet

    //Remove non-alpha characters

    //Change J -> I

    //Remove duplicated letters

    //Store coords of each letter

    //Store the playfair cipher key map
}

std::string PlayfairCipher::applyCipher( const std::string& inputText, const CipherMode cipherMode ) const
{    
    //Change J -> I

    //If repeated chars in a digraph add an X or Q if XX

    //If size of input is odd add a trailing Z

    //Loop over the input in digraphs

    //   - Find the coords in the grdi for each digraph

    //   - Apply the rules to these coords to get new coords

    //Placeholder to avoid unused parameter warning 
    switch ( cipherMode ) {
	  case CipherMode::Encrypt :
	    break;
	  case CipherMode::Decrypt :
	    break;
	}

    //   - Find the letter associated with the new coords

    //Return the text
    return inputText;

}

