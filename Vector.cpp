//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"


        void UTEC::vector::push_back(const int &value) {
            // Completarlo

            int *tempArr = new int[_size+1];

            for(int index = 0;index<_size;index++) {
                *(tempArr+index) = *(_arr+index);
            }

            *(tempArr+_size)=value;

            _size+=1;

            delete[] _arr;

            _arr=tempArr;

        }

        void UTEC::vector::pop_back() {
            // Completarlo
            int *tempArr = new int[--_size];
            for(int index = 0;index<_size;index++) {
                *(tempArr+index) = *(_arr+index);
            }

            delete[] _arr;

            _arr=tempArr;
        }

        UTEC::vector::vector(): _arr{nullptr}, _size(0) {}

        UTEC::vector::~vector() {
            // Completarlo
            delete[] _arr;
        }

        int UTEC::vector::size() { return _size; }

        int UTEC::vector::get_item(int i) { return _arr[i]; }

        void UTEC::vector::insert(int pos, const int &value){

        int* tempArray = new int[++_size];

        for(int index = 0; index<_size;index++){

            if(pos==index){
                *(tempArray+index)=value;
            }

            else if(pos<index){
                *(tempArray+index)=*(_arr+index-1);
            }

            else if(pos>index){
                *(tempArray+index)=*(_arr+index);
            }
        }

        delete[] _arr;
        _arr=tempArray;
}
